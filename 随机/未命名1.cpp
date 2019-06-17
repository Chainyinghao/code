#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{

    long  a,b,c,f;
	cout<<"请输入一个数:";
	cin>>a;
	srand((unsigned)time(NULL));
	b=rand()%9+1;
	f=rand()%3+1;
	switch(f)
	{
	 	case 1:c=a*b;break;
	 	case 2:c=a/b;break;
	 	case 3:c=a%b;break;
	}
	 cout<<b<<" "<<c<<endl;
	 return 0;
}
