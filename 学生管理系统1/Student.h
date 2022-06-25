#ifndef STUDENT_H
#define STUDENT_H
#include<string>
using namespace std;
class Student
{
	private:
		int studentNumber;
		string name;
		string gender;
		int math;
		int chinese;
		int english;

	
	public:
		static int account;
		Student(){}
		Student(int studentNumber,string name)
		{
			this->studentNumber=studentNumber;
			this->name=name;
			account++;
		}
 
		{
			this->gender=gender;
		}
		Student(int studentNumber,string name,string gender,int math,int chinese,int english):Student(studentNumber,name,gender)
		{
			this->chinese=chinese;
			this->math=math;
			this->english=english;
		}
		~Student(){}
		int getNumber()
		{
			return this->studentNumber;
		}
		string getName()
		{
			return this->name;
		}
		friend istream & operator>>(istream & in,Student & A);
		friend ostream & operator<<(ostream & out, Student & A);
};

istream & operator>>(istream & in, Student & A)
{
	in>>A.studentNumber>>A.name>>A.gender>>A.math>>A.chinese>>A.english;
	return in;
}
ostream & operator<<(ostream & out,Student & A){
    out <<"姓名：" <<A.name <<"性别："<< A.gender <<"数学成绩："<<A.math<<"语文成绩："<<A.chinese<<"英语成绩："<<A.english;
    return out;
}


#endif
