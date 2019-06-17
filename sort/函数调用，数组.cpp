#include<iostream>
using namespace std;
void sort(int ini[],int)
{
	int temp,i,j;
	for(i=0;i<9;i++)
	    for(j=i+1;j<10;j++)
	   {
	   	   if(ini[i]>ini[j])
	   	   {
	   	   	temp=ini[i];
	   	   	ini[i]=ini[j];
	   	   	ini[j]=temp;
		   }
	   }
}
int main()
{
	int a[10],i;
	cout<<"请输入十个数字："<<endl;
	for(i=0;i<10;i++)
	  cin>>a[i];
	sort(a,10);
	for(i=0;i<10;i++)
	   cout<<a[i]<<" ";
	return 0;
}
