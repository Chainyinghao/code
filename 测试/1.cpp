#include<iostream>
using namespace std;
int main()
{
	int m,n;
	int *p=new int[n];
	cin>>n;
	for(int i=0;i<n;i++)
	   cin>>p[i];
	for(int j=0;j<n-1;j++)
		for(int i=j+1;i<n;i++)
		    if(p[j]<p[i])
	          {
	          	m=p[j];
	          	p[j]=p[i];
	          	p[i]=m;
			  }
	for(int i=0;i<n;i++)
	cout<<p[i]<<" ";
	delete []p;
	return 0;
}
