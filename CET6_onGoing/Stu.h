#ifndef STU_H_
#define STU_H_
#include<iostream>
#include<QString>
#include<QTextStream>

class Stu;

class Queue
{
public:


	friend class Stu;
    friend class QTextStream;

    void AddStu(QString id, QString name, QString score, QString rank);
    void AddStu(QTextStream in, QString name);
    void DelStu();
    Stu* find(QString name);
    Stu* showCur();
    void ChangeInfo(QString id,QString name,float score,int rank);
    void load();
    void save();
	void sort();
    void deleteScore();
    void setCurFile(QString fileName);
    bool tobeSave(){return isChanged;}  //是否保存
    void setChanged(){isChanged=true;tobeSort=true;}
    void setTitled(){isUntitled=false;}
    bool scanner(Stu **pt);
    QString showCurFile();

	Queue()
	{
		count = 0;
        isUntitled=true;
        isChanged=false;
        tobeSort=true;
		front = rear = NULL;
	}
private:
    Stu* front;
    Stu* rear;
    Stu* preLocat;
    Stu* cur;
    int count;
    QString curFile;
    bool isUntitled; //判断是否保存在新文件
    bool isChanged;    //change是相对于保存记录，判断是否要保存
    bool tobeSort;  //这是相对于信息变动，判断是否排序

};

class Stu
{
private:

    Stu* next;


public:
    QString name;
    QString id;
    float score;
    int rank;

	friend class Queue;
    friend class QTextStream;
    friend class infodialog;

	Stu()
	{
        score=0;
		rank = -1;
        next = NULL;
	}
};

#endif
