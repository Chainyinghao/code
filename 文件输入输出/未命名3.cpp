#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char str[100];
	fstream f;
	f.open("D:\\360data\\重要数据\\桌面\\My file\\3.txt",ios::out);
	if(!f)
	 {
	 	cerr<<"file creat or open"<<endl;
	 	exit(1);
	 }
	 f<<"hello world";
	 f.put('\n');
	 f.seekg(0);
	 while(!f.eof())
	 {
	 	f.getline(str,100);
		 cout<<str; 
	 }
}
