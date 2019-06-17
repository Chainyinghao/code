#include<iostream>
#include<cmath>
using namespace std; 
int main()
{
	int a,b,c,l,s,p;
	cout<<"请依次输入三角形的三边："<<endl; 
	cin>>a>>b>>c;
	l=a+b+c;
	p=1/2.0*(a+b+c);
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	cout<<"l="<<l<<'\n'<<"s="<<s<<endl;
	return 0;
}
