#include<iostream>
using namespace std;
int main()
{
	int a[10],*p;
	int i,j,temp;
	p=&a[0];
	cout<<"请任意输入十个数："<<endl;
	for(i=0;i<10;i++)
	cin>>a[i];
	for(i=0;i<9;i++)
	{
		for(j=i+1;j<10;j++)
		 if(*(p+i)>*(p+j))
		{
			temp=*(p+i);
			*(p+i)=*(p+j);
			*(p+j)=temp;
		}
	 } 
	cout<<"排序后："<<endl; 
	for(i=0;i<10;i++)
	{
		cout<<*p<<" ";
		p++;
		}	
	return 0;
	
}
