#include<iostream>
#include<string>
#include"StudentList.h"
#include"Student.h"
using namespace std;
void add(StudentList* list)
{
	printf("�������ѧ�������Ϣ"); 
	Student value;
	cin>>value;
	list->Add(value);
	return;
}

void searchfor(StudentList* list)
{
	printf("������Ҫ���ҵ�ѧ����Ϣ");
	int studentNumber;
	cin>>studentNumber;
	Student result=list->Searchfor(studentNumber);
	cout<<result; 
}

void mydelete(StudentList* list)
{
	printf("������Ҫɾ���ڼ�����¼"); 
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
	printf("������Ҫ����ʲô������\n1.���ѧ����Ϣ\n2.����ѧ����Ϣ\n3.ɾ��ѧ����Ϣ\n4.��ӡ������Ա��Ϣ\5.�رճ���");
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




