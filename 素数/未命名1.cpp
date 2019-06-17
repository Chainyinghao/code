#include<iostream>
#include<cmath>
using namespace std;
int main()
{
   int d,k,n,m;
   cout<<"所有的素数为："<<endl;
   for(n=101;n<200;n+=2)
   {
       k=sqrt(n);
      for(m=2;m<=k;m++)	
      {
      	d=n%m;
		  if(d==0) break;
	  }
	  if(m>k)
	  cout<<n<<" ";
   }
   return 0;
}
