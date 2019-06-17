#include<iostream>
using namespace std;
const int SIZE = 100;
class Publication
{
protected:
	char title[SIZE], name[SIZE];
	char price[SIZE], date[SIZE];
public:
	Publication(){ cout << "Please input your information" << endl; }
	void InputData();
	void Display();
	~Publication(){ cout << "Over1" << endl; }
};
void Publication::Display()
{
	cout << title << " " << name << " " << price << " " << date
		<< endl;
}
void Publication::InputData()
{
	cout << "title：";
	cin >> title;
	cout << "name:";
	cin >> name;
	cout << "price:";
	cin >> price;
	cout << "date;";
	cin >> date;
}
class Book :public Publication
{
private:
	int page;
public:
	Book(){ cout << "图书" << endl; }
	void B_inputdata();
	void B_Display();
	~Book(){ cout << "Over2" << endl; }
};
void Book::B_inputdata()
{
	cout << "输入书的页数：";
	cin >> page;
}
void Book::B_Display()
{
	cout << page << endl;
}
class Tape :public Publication
{
private:
	char playtime[SIZE];
public:
	Tape(){ cout << "磁带" << endl; }
	void T_inputdata();
	void T_Display();
	~Tape(){ cout << "over3" << endl; };
};
void Tape::T_inputdata()
{
	cin >> playtime;
}
void Tape::T_Display()
{
	cout << "播放时间为：" << playtime << endl;
}
int main()
{
	Publication A;
	A.InputData();
	A.Display();
	Book B;
	B.B_inputdata();
	B.B_Display();
	Tape C;
	C.T_inputdata();
	C.T_Display();
	return 0;
}