#include<iostream>
using namespace std;
int main()
{
	int a[5]={5,4,7,3,1};
	int i,j,temp,k;
	cout<<"原数组为："<<endl;
	for(i=0;i<5;i++)
	cout<<a[i]<<" ";
	for(i=1;i<5;i++)
	{
		k=i;
	 for(j=0;j<=i-1;j++)
	  	{
		 if(a[k]<a[j])
		 { 
		   k=j;
		   if(k!=i)
		  { 
		  temp=a[i];
		  a[i]=a[k];
		  a[k]=temp;
          }
         }     
	   } 
	 }
	 cout<<endl<<"排序后为："<<endl;
	 for(i=0;i<5;i++)
	 cout<<a[i]<<" ";
    return 0;
}
