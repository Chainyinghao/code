#include<iostream>
using namespace std;
int main()
{
   int n=0,m=0;char i;
   while(cin.get(i))
   {
   	if(i==' '||i=='\n'||i=='\t')
   	n++;
   	if(i=='\n')
   	m++;  
	if(i==EOF) break; 
   }
      cout<<"�������У�"<<n<<endl;
	   cout<<"������"<<m<<endl;
	   return 0;
}
