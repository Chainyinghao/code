#include<iostream>
using namespace std;
int main()
{
	char a[20],b;
	char *p=a;
	int i,c;
	bool found=false;
	cout<<"������һ���ַ���"<<endl; 
	for(i=0;i<20;i++)
	cin>>a[i];
	while(c!=0)
	{
		if(c!=0)
		{
	       cout<<"��������Ҫ���ҵ��ַ�:"<<endl;
	       cin>>b;
	        for(i=0;i<20;i++)
			    if(b==*(p+i))
	 	         cout<<"���ַ����״γ����ڵ�"<<i+1<<"λ";
        }
        cout<<endl<<"����1��ʼ��0����"<<endl;
		cin>>c;
    }
		return 0; 
}
