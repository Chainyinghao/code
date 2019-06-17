#include<iostream>
using namespace std;
int main()
{
	int i;
	int s1,s2,s3,s4;
	cout<<"四位数的水仙花数有："<<endl;
	for(i=1000;i<=9999;i++)
	{
       s1=i/1000;
	   s2=(i-s1*1000)/100;
	   s3=(i-s1*1000-s2*100)/10;
	   s4=i-s1*1000-s2*100-s3*10;
	   if(i==s1*s1*s1*s1+s2*s2*s2*s2+s3*s3*s3*s3+s4*s4*s4*s4)
		   cout<<i<<'\t';
	}
	return 0;
}

