#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{
	fstream filein,fileout;
	filein.open("D:\\360data\\重要数据\\桌面\\My file\\datain.txt",ios::in);
	fileout.open("D:\\360data\\重要数据\\桌面\\My file\\dataout.txt",ios::out|ios::trunc);
	if(!filein)
	{
		cerr<<"datain open or creat error!"<<endl;
		exit(-1);
	}
	if(!fileout)
	{
		cerr<<"dataout open or creat error!"<<endl;
		exit(-1);
	}
	char ch[20];
	while(!filein.eof())
	{
		filein>>ch;
		for(int i=0;i<strlen(ch);i++)
		  ch[i]=ch[i]-32;
		fileout<<ch;
	}
	filein.close();
	fileout.close();
	return 0;
 } 
