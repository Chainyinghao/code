#include<iostream>
#include<fstream>
#include<iomanip>
#include<cstring>
using namespace std;
class Student
{
private:
	int ID,grade;
	char name[10];	
public:
	Student(char n[],int id,int g):ID(id),grade(g)
	{
		strcpy(name,n);
	}
	Student(){}	
	void In(ifstream&);
	void Out(ofstream&);
	void Display();
 } ;
void Student::Display()
{
	cout<<setw(12)<<name<<setw(12)<<ID<<setw(12)<<grade<<endl;
}
 void Student::In(ifstream&re)
 {	
	re.read((char*)this,sizeof(Student));	
 }
 void Student::Out(ofstream&wr)
 {
	 wr.write((char*)(this),sizeof(Student));	 
 }
int main()
{
	Student a[3]={Student("Lily",01,100),Student("Jay",02,99),Student("Luke",03,98)},b[3];
	ofstream output("D:\\360data\\重要数据\\桌面\\My file\\7.txt",ios::out|ios::binary);
 	if(!output)
 	{
 		cout<<"不能打开源文件"<<endl; exit(1);
	 }
 	for(int i=0;i<3;i++)
 	{
		a[i].Out(output); 
		a[i].Display();
	 }
	output.close();
	ifstream input("D:\\360data\\重要数据\\桌面\\My file\\7.txt",ios::in|ios::binary);
 	if(!input)
 	{
 		cout<<"不能打开源文件"<<endl; exit(1);
	 }
	for(int i=0;i<3;i++)
	{	
		b[i].In(input);
		b[i].Display();
	}	
	input.close();
}

