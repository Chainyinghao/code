#include<iostream>
using namespace std;
int main()
{
	int i,j,s=0;
	for(i=1;i<=9;i++)
	  {
	  	for(j=1;j<=i;j++)
	  	{
		  s=i*j;
		  cout<<i<<"*"<<j<<"="<<s<<'\t'; 
	  	}
		cout<<endl;  
	  }
	  return 0;
}
