#include<iostream>
using namespace std;
int main()
{
   int n=0,m=0;char i;
   int count=0;
   while(cin.get(i))
   {
   	if(i>='\97'||i<='\122'||i>='\065'||i<='\90'||i=='\032')
   count++;
   	if(i==' '||i=='\n')
   	n++;
   	if(i=='\n')
   	m++;  
	if(i==EOF) break; 
   }
      cout<<"�������У�"<<n<<endl;
	   cout<<"������"<<m<<endl;
	   cout<<"�ַ����У�"<<count-n<<endl;
	   return 0;
}




