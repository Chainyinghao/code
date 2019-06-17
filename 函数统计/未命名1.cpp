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
	cout<<"字母有："<<num1<<endl;
	cout<<"空格有："<<num2<<endl; 
	cout<<"数字有："<<num3<<endl;
	cout<<"其他字符有："<<num4<<endl;
}
int main()
{
	char a[15];
	cout<<"请输入一串字符："<<endl;
	cin.get(a,15);
	jishu(a);	
	return 0; 
}

