#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream file1,file2;
	file1.open("D:\\360data\\重要数据\\桌面\\My file\\1.txt", ios::out|ios::app|ios::binary);
	file2.open("D:\\360data\\重要数据\\桌面\\My file\\2.txt", ios::in|ios::binary);
	if (!file1 || !file2)
	{
		cerr << "files open error!" <<endl;
		exit(1);
	}
	char ch[300];
	while (!file2.eof())
	{
		file2.getline(ch,30);
		file1 << ch;
	}
	file1.close();
	file2.close();
	return 0;
}
