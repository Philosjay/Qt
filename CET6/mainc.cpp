#include<iostream>
#include"Stu.h"



using namespace std;

void main()
{	
	FILE* pt;
	Queue pq;

	if (fopen_s(&pt, "info.txt", "r") != 0)
	{
		cout << "can not open file."<<endl;
		if(fopen_s(&pt, "info.txt", "w")==0)
			cout << "a new file has been opened." << endl;

	}
	else
	{
		pq.load(pt);
		fclose(pt);
	}

	

	

	pq.menu();
	char ch;
	cin >> ch;
	while (cin.get() != '\n');


	char temp[20];

	while (ch != 'q')
	{

		switch (ch)
		{
		case'a':
			pq.AddStu();
			break;
		case'l':
			pq.list();
			break;
		case'f':
			cout << "'n' to find by name, 'i' to find by ID:";
			cin >> ch;
			while (cin.get() != '\n');
			if (ch == 'n')
			{
				cout << "name: ";
				cin >> temp;
				pq.find(temp);
			}
			else if (ch == 'i')
			{
				cout << "ID: ";
				cin >> temp;
				pq.find(temp, 1);
			}
			break;
		case's':
			pq.sort();
		}
		pq.menu();
		cin >> ch;
		while (cin.get() != '\n');
	}

	if (fopen_s(&pt, "info.txt", "w") != 0)
		cout << "can not save info." << endl;
	pq.save(pt);
	fclose(pt);
	cout << "data has been updated.";
	getchar();
}
