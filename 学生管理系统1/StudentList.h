#ifndef STUDENTLIST_H
#define STUDENTLIST_H
#include<iostream>
#include<string>
#include "Student.h"
using namespace std;
class StudentList
{
	public:
		StudentList()
		{
			List = new Student[1];
		}
		StudentList(int number)
		{
			List = new Student[number];
		}
		void Add(Student value)
		{
			if(currentIndex>=sizeof(List)/sizeof(Student))
			{
				Student* newList=new Student[sizeof(List)/sizeof(Student)*2];
				copy(List,List + sizeof(List)/sizeof(Student),newList);
				List= newList;
			}
			List[currentIndex++]=value;
		}
		void Delete(int index)
		{
			for(int i=index-1;i<sizeof(List)/sizeof(List[0])-1;i++)
			{
				List[i]=List[i+1];
			}
		}
		Student Searchfor(int Number)
		{
			for(int i=0;i<sizeof(List)/sizeof(List[0]);i++)
			{
				if(List[i].getNumber()==Number)
				return List[i];
			}
		void print()
		{
			for(int i=0;i<correntIndex;i++)
			cout<<List[i];
		 } 
		}
		
	protected:
		Student* List;
		int currentIndex=0;
	
};

#endif
