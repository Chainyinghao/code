#include<iostream>
using namespace std;
int main()
{
	int x1,x2,x3;
	x3=0;
	x2=0;
     for(;5*x3<=100;)
	{
		for(;5*x3+2*x2<=100;)
		{
			x1=100-5*x3-2*x2;
			cout<<"x1="<<x1<<"\tx2="<<x2<<"\tx3="<<x3<<endl;
			x2++;
		}
		x3++;
	}
	return 0;
}
