#include<iostream>
using namespace std;
int main()
{
	int a[5],i,n,m=0;
    int count1=0,sum=0;
	for(i=0;i<5;i++)
	{
	 cin>>a[i];
	 sum+=a[i];
	 count1++;
    }
      cout<<"sum:"<<sum<<" "<<"count1:"<<count1<<endl;
      int k=sum/count1,count2=0;
      for(i=0;i<5;i++)
      {
	  if(a[i]>=k)
	  cout<<"满足条件的数有："<<a[i]<<'\n';
	  count2++;
      }
      cout<<'\n'<<"一共有"<<count2<<"个数"<<endl;
	return 0;
}
