#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a[4][4];int i,j,temp;
	int max,maxj,k;
	cout<<"请输入十六个数："<<endl;
	for(int i=0;i<4;i++)
	  for(int j=0;j<4;j++)
	  cin>>a[i][j];
	  cout<<"该数组为："<<endl;
	for(int i=0;i<4;i++)
	 {
	   for(int j=0;j<4;j++)
	    cout<<setw(4)<<a[i][j];
	    cout<<'\n';
      }
    for(i=0;i<4;i++)
    {
    	max=a[i][0];
    	for(j=1;j<4;j++)
    	{
    		if(max<a[i][j])
    	  {
    			max=a[i][j];
    			maxj=j;} 
    	  } 		
		  temp=a[0][maxj];
		for(k=1;k<4;k++)
			 if(temp>a[k][maxj])
 			  temp=a[k][maxj]; 
		  if(max==temp)
	 		cout<<" 鞍点为：a"<<"["<<i+1<<"]["<<maxj+1<<"]";break;
	}			
	  return 0;     
}
