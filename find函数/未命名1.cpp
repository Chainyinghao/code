#include<iostream>
using namespace std;
int find1(int a[],int b)
{
	int count(0);
	bool flag=0;
	cout<<"数组做实参"<<endl; 
	for(int i=0;i<15;i++)
	{
		count++;
		if(a[i]==b)
		 {
		   cout<<b<<"在第"<<count<<"位"<<endl;
		   flag=1; 
      } }
   if(flag==1)
       return count;
    else
       return -1;
}
int find2(int *pa,int b)
{
	int count(0);
	bool flag=0;
	cout<<"指向数组的指针变量"<<endl;
	for(int i=0;i<15;i++)
	{
		count++;
		if(pa[i]==b)
		 {
		   cout<<b<<"在第"<<count<<"位"<<endl;
		   flag=1; 
      } }
   if(flag==1)
       return count;
    else
       return -1;
}
int find3(int (&a)[15],int b) 
{
	int count(0);
	bool flag=0;
	cout<<"数组的引用"<<endl;
	for(int i=0;i<15;i++)
	{
		count++;
		if(a[i]==b)
		 {
		   cout<<b<<"在第"<<count<<"位"<<endl;
		   flag=1; 
      } }
   if(flag==1)
       return count;
    else
       return -1;
	
}
int main()
{
	int i,b[15],m;
	int *p=b;
	cout<<"输入一行数："<<endl;
	for(i=0;i<15;i++)
	cin>>p[i];
	cout<<"输入你要查找的数：";
	cin>>m; 
	find1(b,m);
	find2(p,m);
	find3(b,m);
	return 0;
}
