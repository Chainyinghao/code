#include<iostream>
#include<cstring>
using namespace std;
const int SIZE=15;
class Stack
{
	private:
		char stck[SIZE];
		int tos;
	public:
		Stack();
		void Push(char ch);
		int Pop();
		void Show();
}; 
Stack::Stack():tos(0)
{
	for(int i=0;i<SIZE-1;i++)
	   stck[i]=0;
}
void Stack::Push(char ch)
{
	if(tos==SIZE)
	   cout<<"Õ»Âú"<<endl;
	else
	{
	  stck[tos]=ch;
	  tos++;
}}
int Stack::Pop()
{
	if(tos==0)
	  cout<<"¿ÕÕ»"<<endl;
	  tos--;
	  return stck[tos];
}
void Stack::Show()
{
	if(tos==0)
	  cout<<"Õ»ÒÑ¿Õ"<<endl;
	for(int i=tos-1;i>=0;i--)
	cout<<stck[i];
}
int main()
{
	Stack stack;
	char str[SIZE];
	cout<<"ÊäÈë×Ö·û"<<endl;
	cin>>str;
	for(int i=0;i<strlen(str);i++)
	    stack.Push(str[i]);
	stack.Show();
	stack.Pop();
	return 0;
}
