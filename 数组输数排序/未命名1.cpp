#include<iostream>
using namespace std;
int main()
{
	int ini[7]={2,6,9,14,21,35};
	int b,i,j,k;
	cout<<"原数组为："<<endl;
	for(i=0;i<6;i++)
	cout<<ini[i]<<" ";
	cout<<'\n'<<"请输入一个数："<<'\t';
	cin>>b;
	for(i=0;i<6;i++)
	{
	 if(b>ini[i-1]&&b<ini[i])
	 {
	 k=i;
	 for(j=6;j>k;j--)
	 ini[j]=ini[j-1];
	 ini[k]=b;
    }}
	for(i=0;i<7;i++)
	cout<<ini[i]<<" ";
	return 0; 
}

