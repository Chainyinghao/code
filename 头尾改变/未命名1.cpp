#include<iostream>
using namespace std;
int input(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
    cin>>a[i]; 
	return i;
}
void swap(int a[],int n)
{
	int temp;
	for(int i=1;i<n;i++)
	{
	  if(a[0]>a[i])
	  {
	  	temp=a[0];
	  	a[0]=a[i];
	  	a[i]=temp;
	  }}
	  for(int j=0;j<n-1;j++)
	    {
	    	
		  if(a[n-1]<a[j])
	      {
	      	temp=a[n-1];
	      	a[n-1]=a[j];
	      	a[j]=temp;
		  }	}
}
void output(int a[],int n)
{
	for(int i=0;i<n;i++)
	  cout<<a[i]<<" ";
}
int main()
{
	int a[10];
	cout<<"请输入10个整数："<<endl;
	input(a,10);
	swap(a,10);
	cout<<"交换后："<<endl;
	output(a,10);
	return 0;
}
