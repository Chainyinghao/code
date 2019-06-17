#include<iostream>
#include<cstring>
using namespace std;
template<typename T1,typename T2>void add(T1 B[],T2 n)
{
     double sum(0);
     for(int i=0;i<n;i++)
        sum+=B[i];
        cout<<"该数组和为："<<sum<<endl;
}
void add(char s1[],char s2[],int n1,int n)
{
		for(int i=0;i<n;i++)
			s1[n1+i]=s2[i];
		cout<<s1;
} 
int main()
{
	int A[10];
	cout<<"输入数组元素："<<endl;
	for(int i=0;i<10;i++)
	   cin>>A[i];
	   add(A,10);
	char p1[15], p2[15];
	int n1(0),n2(0);
	cout<<"输入字符串1：";
	   cin>>p1;
	   cout<<"输入字符串2：";
	   cin>>p2;
	   n1=strlen(p1);
	   n2=strlen(p2);
	   add(p1,p2,n1,(n1+n2));
	   return 0; 
}
