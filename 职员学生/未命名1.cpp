#include<iostream>
using namespace std;
enum work{student=1,staff,teacher,staffstudent};
class Person
{
protected:
	   char name[20];
	   int tel[20];
	   char add[50];
public:
	void Inputname();
	void Inputtel();
	void Inputadd();
	void Show(); 
	private:
		int t1=0;
		  int t2=0;
};
void Person::Inputname()
{
	cout<<"����������";
	char ch;
	for(int i=0;i<20;i++)
	{
		name[i]=ch;
		t1++;
	}
}
void Person::Inputtel()
{
	cout<<"����绰��";
	for(int i=0;i<11;i++)
		cin>>tel[i];
}
void Person::Inputadd()
{
	cout<<"�����ͥסַ��";
   char ch;
	for(int i=0;i<50;i++)
	{
		add[i]=ch;
		t2++;
	}
}
void Person::Show()
{
	cout<<"������";
	  for(int i=0;i<t1;i++)
		  cout<<name[i];
	  cout<<"\n�绰��";
	  for(int i=0;i<11;i++)
		  cout<<tel[i];
	  cout<<"\n��ͥסַ��";
	  for(int i=0;i<t2;i++)
		  cout<<add[i];
}
class Student:public Person
{
protected:
	char major[15];
	int t3=0;
public:
	void Stu_information();
	void Show();
};
void Student::Stu_information()
{
	char ch;
	 Inputname();
	 Inputtel();
	 Inputadd();
	 for(int i=0;i<15;i++)
	 {
		 major[i]=ch;
		 t3++;
	 }
}
void Student::Show()
{
	Person::Show();
	cout<<"ѧ��רҵ��Ϣ��";
	for(int i=0;i<t3;i++)
		cout<<major[i];
}
class Staff:public Person
{
protected:
	char office[15];
	double money;
	int t4=0;
public:
	void Sta_information();
	void Show();
};
void Staff::Sta_information()
{
	Inputname();
	Inputtel();
	Inputadd();
	cout<<"���ڲ��ţ�";
	char ch;
	for(int i=0;i<15;i++)
	{
		office[i]=ch;
		t4++;
	}
	cout<<"ÿ�¹��ʣ�";
	cin>>money;
}
void Staff::Show()
{
	Person::Show();
	cout<<"���ڲ��ţ�";
	for(int i=0;i<t4;i++)
		cout<<office[i];
	cout<<"ÿ�¹���Ϊ��"<<money<<endl;
}
class Teacher:public Staff
{
protected:
	char lesson[50];
	int t5=0;
public:
	void Tea_information();
	void Show();
};
void Teacher::Tea_information()
{
	 Inputname();
	 Inputtel();
	 Inputadd();
     Sta_information();
	 char ch;
	 cout<<"�ڿ���Ϣ��"<<endl;
	 for(int i=0;i<50;i++)
	 {
		 lesson[i]=ch;
		 t5++;
	 }
}
void Teacher::Show()
{
	Staff::Show();
	cout<<"�ڿ���Ϣ��"<<endl;
	for(int i=0;i<t5;i++)
		cout<<lesson[i];
}
class StudentTeacher:public Student,public Teacher
{
public:
	void Information();
	void Show();
};
void StudentTeacher::Information()
{
     Inputname();
	 Inputtel();
	 Inputadd();
     Sta_information();
	 Tea_information();
	 Stu_information();
}
void StudentTeacher::Show()
{
	Teacher::Show();
	Student::Show();
}
int main()
{
	int i;
	cout<<"���������ְҵ��"<<endl;
	cout<<"ѧ����1������Ա��2������ʦ��3������ְ���޽�ʦ��4����"<<endl;
	cin>>i;
	if(i==1)
	{
		Student A;
		A.Stu_information();
		A.Show();
	}
	else if(i==2)
	{
		Staff B;
		B.Sta_information();
		B.Show();
	}
	else if(i==3)
	{
		Teacher C;
		C.Tea_information();
		C.Show();
	}
	else if(i==4)
	{
	  StudentTeacher D;
	  D.Information();
	  D.Show();
	}
	return 0;
}






	

