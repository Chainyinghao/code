#include<iostream>
using namespace std;
int main()
{
	int a[15]={1,7,9,15,26,37,48};
	int b[8]={2,5,10,17,19,21,25,47};
	int i,j,temp;
	cout<<"A数组为：";
	for(i=0;i<7;i++)
	    cout<<a[i]<<'\t';
	cout<<endl<<"B数组为："; 
	for(j=0;j<8;j++)
	    cout<<b[j]<<'\t';
	for(j=0;j<8;j++)
	memcpy(a+7,b,8*sizeof(int));
	for(i=0;i<14;i++)
	  {
	    for(j=i+1;j<15;j++)
		  if(a[i]>a[j])
	       {
	       	temp=a[i];
			 a[i]=a[j];
	        a[j]=temp;
	       }
	  }
		cout<<endl<<"合并后数组为："<<endl;  
		for(i=0;i<15;i++)
		cout<<a[i]<<" ";
		return 0;
	}
