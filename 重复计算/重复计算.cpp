#include<iostream>
using namespace std;
int main()
{
	float a,b,c;int i;
	char op1='+',op2='-',op3='*',op4='/',op5;
	for(;i>0;)
    {	 
    cout<<"��������㹫ʽ(��1��ʼ����,��0�س���������)��"<<endl;
    	cin>>i;
	if(i==1)
		{
		cin>>a>>op5>>b;
		if (op5==op1)c=a+b;
		if (op5==op2)c=a-b;
		if (op5==op3)c=a*b;
		if (op5==op4)c=a/b;
		cout<<c<<endl;
	    }
	    else break;
      }
      cout<<"��ӭ�ٴ�ʹ��"<<endl; 
	return 0;
}
