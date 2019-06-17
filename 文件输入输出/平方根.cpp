#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;
int main()
{
	fstream file;
	file.open("D:\\360data\\重要数据\\桌面\\My file\\data.dat",ios::out|ios::binary);
	if(!file)
	{
		cerr<<"file.tat creat or open error!"<<endl;
		exit(-1);
	}
	double data;
	for(int i=0;i<101;i++)
	{
		data=sqrt(double(i));
		file.write((char *)&data,sizeof(data));
	}
	file.close();
	return 0;	
}
