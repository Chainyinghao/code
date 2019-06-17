#include<iostream>
using namespace std;
int main()
{
	char a[20],b;
	char *p=a;
	int i,c;
	bool found=false;
	cout<<"请输入一段字符："<<endl; 
	for(i=0;i<20;i++)
	cin>>a[i];
	while(c!=0)
	{
		if(c!=0)
		{
	       cout<<"请输入你要查找的字符:"<<endl;
	       cin>>b;
	        for(i=0;i<20;i++)
			    if(b==*(p+i))
	 	         cout<<"该字符数首次出现在第"<<i+1<<"位";
        }
        cout<<endl<<"输入1开始，0结束"<<endl;
		cin>>c;
    }
		return 0; 
}
