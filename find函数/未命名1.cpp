#include<iostream>
using namespace std;
int find1(int a[],int b)
{
	int count(0);
	bool flag=0;
	cout<<"������ʵ��"<<endl; 
	for(int i=0;i<15;i++)
	{
		count++;
		if(a[i]==b)
		 {
		   cout<<b<<"�ڵ�"<<count<<"λ"<<endl;
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
	cout<<"ָ�������ָ�����"<<endl;
	for(int i=0;i<15;i++)
	{
		count++;
		if(pa[i]==b)
		 {
		   cout<<b<<"�ڵ�"<<count<<"λ"<<endl;
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
	cout<<"���������"<<endl;
	for(int i=0;i<15;i++)
	{
		count++;
		if(a[i]==b)
		 {
		   cout<<b<<"�ڵ�"<<count<<"λ"<<endl;
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
	cout<<"����һ������"<<endl;
	for(i=0;i<15;i++)
	cin>>p[i];
	cout<<"������Ҫ���ҵ�����";
	cin>>m; 
	find1(b,m);
	find2(p,m);
	find3(b,m);
	return 0;
}
