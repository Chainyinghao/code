#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	long a,b,c,d,e,i;
	while(1)
	{
		cout<<"请按1开始，0结束程序："<<endl;
	    cin>>a;
	    if(a==0) break;
		cout<<"请输入你的数:"<<endl;
		cin>>i;
		srand((unsigned)time(NULL));
	    d=rand()%i+1;
	    e=rand()%3+1;
	    cout<<"随机数为："<<d<<endl;
		switch(e)
		{
			case 1:c=i*d,cout<<"i*d="<<endl;break;
			case 2:c=i/d,cout<<"i/d="<<endl;break;
			case 3:c=i%d,cout<<"i%d="<<endl;break;
		}
		cout<<"请输入你的结果："<<endl;
		cin>>b;
		if(b!=c)
		cout<<"正确的结果是："<<c<<endl;
		else
		cout<<"恭喜你答对了:"<<endl; 
	}
	return 0;
}

