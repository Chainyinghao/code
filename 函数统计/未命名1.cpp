#include<iostream>
using namespace std;
void jishu(char a[])
{
    int i;
    int num1(0),num2(0),num3(0),num4(0);
	while(a[i]!='\0')
	{
		if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
		num1++;
		else if(a[i]==' ')
		num2++;
		else if(a[i]>='0'&&a[i]<='9')
		num3++;
		else 
		num4++;
		i++;
	}
	cout<<"��ĸ�У�"<<num1<<endl;
	cout<<"�ո��У�"<<num2<<endl; 
	cout<<"�����У�"<<num3<<endl;
	cout<<"�����ַ��У�"<<num4<<endl;
}
int main()
{
	char a[15];
	cout<<"������һ���ַ���"<<endl;
	cin.get(a,15);
	jishu(a);	
	return 0; 
}

