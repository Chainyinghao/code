#include<iostream>
using namespace std;
int main()
{
	double a,b,c;
	char op1='+',op2='-',op3='*',op4='/',op5; 
	cout<<"请输入你所要计算的式子："<<endl;
	cin>>a>>op5>>b;
	if(op5==op1)
	c=a+b;
	else if(op5==op2)
	c=a-b;
	 else if(op5==op3)
	 c=a*b;
	 else if(op5==op4)
	 c=a/b;
	 
	 cout<<"结果为："<<c<<endl;
	 return 0; 
}
