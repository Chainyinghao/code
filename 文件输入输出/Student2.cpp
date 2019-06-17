#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
class Student{
	private:
	   double xuehao;
	   string name;
	   float chengji;
	   public:
	   	Student(double x,string name,float c):xuehao(x),name(name),chengji(c)
	   	{}
	   	double Getxuehao(){return xuehao;}
		string Getname(){return name;}
		float Getchengji(){return chengji;}
		void display();
		friend istream& operator>>(istream&,Student&);   	   	 	   		   
};
istream& operator>>(istream&input,Student& a)
{
	input>>a.name>>a.xuehao>>a.chengji;
}
void Student::display()
{
	cout<<name<<setw(9)<<xuehao<<setw(9)<<chengji<<endl;
}
int main()
{
	Student a[3]={Student(1001,"liuqiang",95),Student(1002,"wanglei",98),Student(1003,"liming",92)};
	ofstream fileout;
	fileout.open("D:\\360data\\重要数据\\桌面\\My file\\Student1.txt",ios::out);
	if(!fileout)
	 {
	 	cerr<<"fileout creat or open"<<endl;
	 	abort();
	 }
	 for(int i=0;i<3;i++)
	 {
	 	fileout<<a[i].Getname()<<" "<<a[i].Getxuehao()<<" "<<a[i].Getchengji()<<endl;
	 }
	 fileout.close();
	 ifstream filein;
	 filein.open("D:\\360data\\重要数据\\桌面\\My file\\Student1.txt",ios::out);
	if(!filein)
	 {
	 	cerr<<"filein creat or open"<<endl;
	 	abort();
	 }
	 for(int i=0;i<3;i++)
	 {
	 	filein>>a[i];
	    a[i].display();
	 }
	 filein.close();
	 return 0;
}
