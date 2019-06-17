#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a[10][10];
	int i,j,n;
	cout<<"¾Ö²¿Ñî»ÔÈý½ÇÍ¼£º"<<endl;
	a[1][1]=1;
	for(i=0;i<10;i++)
      a[i][0]=1;	
	for(i=2;i<10;i++)
	{
	  for(j=1;j<=i;j++)
	 {
	    a[i][j]=a[i-1][j-1]+a[i-1][j];
	    if(j==i)
	    a[i][j]=1;
	}}
	for(i=0;i<10;i++)
	{
	  for(n=0;n<=9-i;n++)
	  cout<<" ";
	  for(j=0;j<=i;j++)
		cout<<a[i][j]<<" ";
	   cout<<endl;
	}	
	return 0;	
}
