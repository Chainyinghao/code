#include<iostream>
#include<cstring>
using namespace std;
class Person
{
  protected:
      string name,tel,add;
  public:
  	  Person(string n,string t,string a)
  	   {
  	   	 name=n;
  	   	 tel=t;
  	   	 add=a;
	   }	 
};
class Student:virtual public Person
{
	protected:
		string S_inform;
		public:
			Student(string n,string t,string a,string str):Person(n,t,a)
			{
				S_inform=str;
			}		
};
class Staff:virtual public Person
{
	protected:
		string office;
		double wages;
		public:
		Staff(string n,string t,string a,string offi,double wags):Person(n,t,a)
		{
			office=offi;
			wages=wags;
		 } 
};
class Teacher:public Staff
{
  protected:
     string lessons;
	 public:
	   Teacher(string n,string t,string a,string offi,double wags,string l):Person(n,t,a),Staff(n,t,a,offi,wags)	
	   {
	   	 lessons=l;
	   }
};
class StudentTeacher:public Student,public Teacher
{
	public:
		StudentTeacher(string n,string t,string a,string str,string offi,double wags,string l)
		:Person(n,t,a),Student(n,t,a,str),Teacher(n,t,a,offi,wags,l){}
		void show();
};
void StudentTeacher::show()
{
	cout<<"姓名："<<name<<endl;
	cout<<"电话："<<tel<<endl;
	cout<<"地址："<<add<<endl;
	cout<<"专业："<<S_inform<<endl;
	cout<<"所在的部门："<<office<<endl;
	cout<<"工资："<<wages<<endl;
	cout<<"教授课程："<<lessons<<endl; 
}
int main()
{
	string nam,te,ad,str1,offi1,le;
	double wag;
       cout<<"输入相关信息："<<endl; 
		cout<<"name:";
		cin>>nam;
		cout<<"telephone:";
		cin>>te;
		cout<<"address:";
		cin>>ad;
		cout<<"kecheng:";
		cin>>str1;
	    cout<<"office:";
	    cin>>offi1;
	    cout<<"wages:";
	    cin>>wag;
	    cout<<"lessons:";
	    cin>>le;
	    StudentTeacher A(nam,te,ad,str1,offi1,wag,le);
	    A.show();
		return 0;
}






















