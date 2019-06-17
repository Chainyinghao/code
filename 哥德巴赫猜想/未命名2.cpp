#include<iostream>
#include<cmath>
using namespace std;
int sushu(double n)
{
	bool flag=1;
	for(int i=2;i<=sqrt(n);i++)
	    if(int(n)%i==0)
	       flag=0;
	if(flag==1)
	   return 1;
	else
	   return 0;
}
int main()
{
	int num,x,y;
	double a,b;
	cout<<"请输入一个大于6的偶数："<<endl;
	cin>>num;
	for(a=3;a<=num/2;a+=2)
	{
		x=sushu(a);
		b=num-a;
		y=sushu(b);
		if(x==1&&y==1)
		   cout<<num<<"="<<a<<"+"<<b<<endl;
	  }
	  return 0;
}
