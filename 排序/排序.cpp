#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,t;
	cout<<"请输入四个数："<<endl;
	cin>>a>>b>>c>>d;
	if(a>b)
	t=a,a=b,b=t;
	if(a>c)
	t=a,a=c,c=t;
	if(a>d)
	t=a,a=d,d=t;
	if(b>c)
	t=b,b=c,c=t;
	if(b>d)
	t=b,b=d,d=t;
	if(c>d)
	t=c,c=d,d=t;
	cout<<"排序后的数列为："<<endl;
	cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
	return 0;
	
}







