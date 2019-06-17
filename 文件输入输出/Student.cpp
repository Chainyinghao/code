#include<iostream>
#include<cstring>
#include<fstream>
#include<iomanip>
using namespace std;
class Student{
	private:
	   double xuehao;
	   string name;
	   float chengji;
	   public:
	   	Student(long x,string name,float c):xuehao(x),name(name),chengji(c)
	   	{}
	   	double Getxuehao(){return xuehao;}
		string Getname(){return name;}
		float Getchengji(){return chengji;}   
	   	void Filein(ifstream&,Student);
		   void Fileout(ofstream&);
		   void display();	   	 	   		   
};
void Student::display()
{
	cout<<name<<setw(9)<<xuehao<<setw(9)<<chengji<<endl;
}
void Student::Filein(ifstream&file,Student a)
{
	
		file.read((char*)this,sizeof(Student));	
}
void Student::Fileout(ofstream&file)
{
	file.write((char *)this,sizeof(Student));
}
int main()
{
	Student a[3]={Student(1001,"liuqiang",95),Student(1002,"wanglei",98),Student(1003,"liming",92)};
	ifstream filein;
	ofstream fileout;
	fileout.open("D:\\360data\\重要数据\\桌面\\My file\\Student.txt",ios::out|ios::binary);
	if(!fileout)
	 {
	 	cerr<<"file creat or open"<<endl;
	 	exit(1);
	 }
	   for(int i=0;i<3;i++)
	{
		a[i].Fileout(fileout);
		a[i].display();
	}
	fileout.close();
	filein.open("D:\\360data\\重要数据\\桌面\\My file\\Student.txt",ios::in|ios::binary);
	if(!filein)
	 {
	 	cerr<<"file creat or open"<<endl;
	 	exit(1);
	 }
	for(int i=0;i<3;i++)
	{
		a[i].Filein(filein,a[i]);
	}
	filein.close();
	return 0;
}
