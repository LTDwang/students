#include<iostream>
#include<string>
#include"StudentList.h"
#include"Student.h"
using namespace std;
void add(StudentList* list)
{
	printf("请输入该学生相关信息"); 
	Student value;
	cin>>value;
	list->Add(value);
	return;
}

void searchfor(StudentList* list)
{
	printf("请输入要查找的学生信息");
	int studentNumber;
	cin>>studentNumber;
	Student result=list->Searchfor(studentNumber);
	cout<<result; 
}

void mydelete(StudentList* list)
{
	printf("请输入要删除第几条记录"); 
	int index;
	cin>>index;
	list->Delete(index);
}

void print(StudentList* list) 
{
	list->print();
}

void menu(StudentList* list)
{
	int a=0;
	start:
	printf("请问你要进行什么操作呢\n1.添加学生信息\n2.查找学生信息\n3.删除学生信息\n4.打印所有人员信息\5.关闭程序");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			add(list);goto start;
		case 2:
			searchfor(list);goto start;
		case 3:
			mydelete(list);goto start;
		case 4:
			print(list);goto start;
		case 5: return;
	} 

}




