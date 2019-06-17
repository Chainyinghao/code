#include<iostream>
using namespace std;
int main()
{
	int a[7]={1,2,8,7,5,21,15};
	int i,j,temp,k;
	cout<<"原数组为："<<endl;
	for(i=0;i<7;i++)
	cout<<a[i]<<" ";
	for(i=1;i<7;i++)
	{  
	   temp=a[i];
	 for(j=i-1;j>=0&&temp>a[j];j--)
	  	{
		 a[j+1]=a[j];
		 a[j+1]=temp;
	   } 
	 }
	 cout<<endl<<"排序后为："<<endl;
	 for(i=0;i<7;i++)
	 cout<<a[i]<<" ";
    return 0;
}
