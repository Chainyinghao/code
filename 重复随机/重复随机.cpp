#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	long a,b,c,d,e,i;
	while(1)
	{
		cout<<"�밴1��ʼ��0��������"<<endl;
	    cin>>a;
	    if(a==0) break;
		cout<<"�����������:"<<endl;
		cin>>i;
		srand((unsigned)time(NULL));
	    d=rand()%i+1;
	    e=rand()%3+1;
	    cout<<"�����Ϊ��"<<d<<endl;
		switch(e)
		{
			case 1:c=i*d,cout<<"i*d="<<endl;break;
			case 2:c=i/d,cout<<"i/d="<<endl;break;
			case 3:c=i%d,cout<<"i%d="<<endl;break;
		}
		cout<<"��������Ľ����"<<endl;
		cin>>b;
		if(b!=c)
		cout<<"��ȷ�Ľ���ǣ�"<<c<<endl;
		else
		cout<<"��ϲ������:"<<endl; 
	}
	return 0;
}

