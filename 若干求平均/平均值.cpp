#include<iostream>
using namespace std;
int main()
{
	int i,num=0;
	double c,sum=0;
	cout<<"����������Ҫ��������У�"<<endl;		
      for(;;)
      {
	    cin>>i;
	    if(i<0)  break;
	   else
	    {
		    sum+=i;
		    num++;
		    c=sum/num;
	    }break;
	}
	  
	cout<<"the average is :"<<c<<endl; 
	return 0; 
}
