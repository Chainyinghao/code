#include<iostream>
using namespace std;
int main()
{
	int a[5]={4,7,8,2,5};
	int i,j,temp,k;
	cout<<"ԭ����Ϊ��"<<endl;
	for(i=0;i<5;i++)
	cout<<a[i]<<" ";
	for(i=0;i<4;i++)
	{
	 for(j=i+1;j<5;j++)
	  	{
		 if(a[i]>a[j])
		  { 
		  temp=a[i];
		  a[i]=a[j];
		  a[j]=temp;
         }
	   } 
	 }
	 cout<<endl<<"�����Ϊ��"<<endl;
	 for(i=0;i<5;i++)
	 cout<<a[i]<<" ";
    return 0;
}
