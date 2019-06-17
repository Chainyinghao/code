#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float x1,x2;
	float a;
	cout<<"please input a:"<<endl;
	cin>>a;
	x1=a/2;
	x2=(x1+a/x1)/2;
	while(fabs(x1-x2)>=1e-5)
	{
		x1=x2;
		x2=(x1+a/x1)/2;
	}
	cout<<"The square foot is:"<<x1<<endl;
	return 0;
}
