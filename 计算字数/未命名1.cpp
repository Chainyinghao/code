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
      cout<<"单词数有："<<n<<endl;
	   cout<<"行数："<<m<<endl;
	   cout<<"字符数有："<<count-n<<endl;
	   return 0;
}




