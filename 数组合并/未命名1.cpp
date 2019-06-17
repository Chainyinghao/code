#include<iostream>
using namespace std;
int main()
{
	int a[15]={1,7,9,15,26,37,48};
	int b[8]={2,5,10,17,19,21,25,47};
	int i,j,k,z;
	cout<<"A数组为：";
	for(i=0;i<7;i++)
	    cout<<a[i]<<'\t';
	cout<<endl<<"B数组为："; 
	for(j=0;j<8;j++)
	    cout<<b[j]<<'\t';
	for(j=0;j<8;j++)
	{
		for(i=0;i<15;i++)
		if(b[j]>a[i-1]&&b[j]<a[i])
		{
		  k=i;
	    	for(z=14;z>k;z--)
		    a[z]=a[z-1];
		  a[k]=b[j];
	    }
	}
	cout<<endl<<"合并后的数组为："<<endl; 
	for(k=0;k<15;k++)
	cout<<a[k]<<" ";
	return 0;	
	
} 
