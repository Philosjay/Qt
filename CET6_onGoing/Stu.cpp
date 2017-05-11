#include<QFile>
#include<QMessageBox>
#include<QString>
#include<QDialog>
#include<QFileDialog>
#include"Stu.h"

QString Queue::showCurFile()
{
    return curFile;
}

void Queue::setCurFile(QString fileName)
{
    curFile=fileName;
}

void Queue::deleteScore()
{
    for(Stu* temp=front;temp!=NULL;temp=temp->next)
    {
        temp->score=0;
    }
}

void Queue::DelStu()
{
    if(preLocat!=NULL)  //目标不在队列首
    {
        Stu* temp=preLocat->next;
        preLocat->next = preLocat->next->next;
        delete(temp);
        count--;
    }
    else        //目标在队列首
    {
        Stu* temp=front;
        front=front->next;
        delete temp;
        count--;
    }
    cur=NULL;
}

void Queue::ChangeInfo(QString id, QString name, float score, int rank)
{
    cur->id=id;
    cur->name=name;
    cur->score=score;
    cur->rank=rank;
}

void Queue::AddStu(QString id,QString name,QString score,QString rank)
{
    Stu* pt = new Stu;
    count++;

    if (front == NULL)
        front = pt;
    else
        rear->next = pt;

    rear = pt;

    pt->name=name;
    pt->id=id;
    pt->score=score.toFloat();
    pt->rank=rank.toInt();

}

void Queue::load()
{
    isChanged=true;

    QFile file(curFile);
    file.open(QFile::ReadOnly);
    QTextStream in(&file);

    Stu* pre=NULL;
    Stu* temp=NULL;

    bool bug=true;
    while (!in.atEnd())
    {
        bug=false;
        pre=temp;

        temp = new Stu;

        if (front == NULL)
            front = temp;
        else
            rear->next = temp;

        rear = temp;

        in>>temp->id;
        in>>temp->name;
        in>>temp->score;
        in>>temp->rank;

        count++;

    }
    if(pre!=NULL)
    {
        delete pre->next;
        rear=pre;
        pre->next=NULL;
    }
    else
    {
        delete temp;
        front=rear=NULL;
    }
    if(bug) count++;
    count--;

}

Stu* Queue::showCur()
{
    return cur;
}

Stu* Queue::find(QString NameId)	//支持学号姓名查找
{   
    Stu* pre = NULL;
    Stu* pt;

    cur=preLocat=NULL;     //目标学生父

        for (pt = front; pt != NULL; pt = pt->next)
        {
            if (pt->name==NameId|pt->id==NameId)
            {
                cur=pt;         //记录下目标及其前面的指针
                preLocat=pre;   //如果在队首或者没找到，pre都是NULL，但是如果没找到，无法调用delStu，歧义被消除
                return pt;
            }
            pre = pt;
        }

    if(pt==NULL) return NULL;   //未找到
}

void Queue::sort()
{
    if(tobeSort)
    {
        int n = count;

        struct room
        {
            QString name;
            QString id;
            float score;
        };
        struct room* pt = new struct room[n];

        int i = 0;
        for (Stu* temp = front; temp != NULL; temp = temp->next)
        {
            (pt + i)->name=temp->name;
            (pt + i)->id=temp->id;
            (pt + i)->score = temp->score;
            i++;
        }

        for (int i = 0; i<n - 1; i++)
        {
            for (int j = 0; j<n - 1 - i; j++)
            {
                if ((pt + j)->score < (pt + j + 1)->score)
                {
                    struct room temp = *(pt + j);
                    *(pt + j) = *(pt + j + 1);
                    *(pt + j + 1) = temp;
                }
            }
        }

        i = 0;
        struct room* pre=NULL;
        int realRank=1; //支持并列排名
        for (Stu* temp = front; temp != NULL; temp = temp->next)    //tip：每次循环保证i++一次,下面三选一
        {
            temp->name=(pt + i)->name;
            temp->id=(pt + i)->id;
            temp->score = (pt + i)->score;

            if(pre==NULL)   //处理开头
            {
                temp->rank=1;
                pre=pt;
                i++;
                continue;
            }

            if(pre->score!=(pt+i)->score)   //不并列时，realRank更新
            {
                realRank=i+1;
            }


            temp->rank = realRank;
            pre=(pt+i);         //i递增之前用pre记录之前信息
            i++;

        }

        tobeSort=false;
    }


}

bool Queue::scanner(Stu** pt)
{
    if(*pt==NULL)
    {
        (*pt)=front;
        return true;
    }
    else
    {
        (*pt)=(*pt)->next;
        if((*pt)==NULL) return false;
        else return true;
    }
}

void Queue::save()
{
    if(isChanged)   //分为保存和不保存
    {
        if(isUntitled==true)  //分为 保存 和 另存为
        {
            QMessageBox mes;
            mes.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
            mes.setButtonText(QMessageBox::Yes,QStringLiteral("是"));
            mes.setButtonText(QMessageBox::No,QStringLiteral("否"));
            mes.setText(QStringLiteral("警告：临时成绩单待保存"));
            mes.setInformativeText(QStringLiteral("保存避免当前数据遗失！"));
            int ret=mes.exec();
            if(ret==QMessageBox::Yes)
            {
                QString fileName= QFileDialog::getSaveFileName(0,QStringLiteral("文件另存为"));
                if(fileName.length()!=0)
                {
                    setCurFile(fileName);
                }
                else setCurFile("temp.txt");
            }
            else
            {
                setCurFile("temp.txt");     //防止误选择不保存临时文件时，数据丢失
            }

        }

        QFile file(curFile);
        file.open(QFile::WriteOnly|QFile::Text);
        QTextStream out(&file);


        out.setFieldAlignment(QTextStream::AlignLeft);




        int len;
        for (Stu* temp = front; temp != NULL; temp = temp->next)
        {

            out.setFieldWidth(20);
            out<<temp->id;

            len=temp->name.size();
            out.setFieldWidth(10-len);
            out<<temp->name;

            out.setFieldWidth(10);
            out<<QString::number(temp->score);
            out<<QString::number(temp->rank);
            out.setFieldWidth(0);
            out<<endl;
        }

        isUntitled=false;
        isChanged=false;
    }


}
