#include<iostream>
using namespace std;
class money
{
	int yuan,jiao,fen;
public:
	money (int y=0,int j=0,int f=0):yuan(y),jiao(j),fen(f)
	{}
	money operator++();
	void display()
	{
		cout<<yuan<<"Ôª"<<jiao<<"½Ç"<<fen<<"·Ö"<<endl;
	}
};
money money::operator++()
{
   ++fen;
   return money(yuan,jiao,fen);
}
int main()
{
	money m1(10,9,1),m2,m3;
	cout<<"m1:";
	m1.display();
	m2=++m1;
	cout<<"m2;";
	m2.display();
	m3=++m2;
	cout<<"m3;";
	m3.display();
	return 0;
}

