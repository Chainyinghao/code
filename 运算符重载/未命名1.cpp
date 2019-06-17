#include<iostream>
using namespace std;
class Money
{
	private:
		int Yuan,Jiao,Fen;
		public:
			Money(int Y=0,int J=0,int F=0)
			{
				this->Yuan=Y;
				this->Jiao=J;
				this->Fen=F;
			}
			Money operator ++();
			void show();
};
Money Money::operator ++()
{
	return Money(Yuan,Jiao,++Fen);
}
void Money::show()
{
	cout<<Yuan<<"Ôª"<<Jiao<<"½Ç"<<Fen<<"·Ö"<<endl;
}
int main()
{
	Money m1(10,9,1),m2,m3;
	m1.show();
	m2=++m1;
	m2.show();
	m3=++m2;
	m3.show();
	return 0;
}
