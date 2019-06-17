#include<iostream>
using namespace std;
class Cstudent
{
private:
	char name[12];
	char xuehao[10];
	float chinese, math, English;
	float ave;
public:
	void scanfname();
	void scanfxuehao();
	void printfname();
	void printfxuehao();
	void printfchengji(float a, float b, float c);
};
void Cstudent::scanfname()
{
	cin >> name;
}
void Cstudent::scanfxuehao()
{
	cin >> xuehao;
}
void Cstudent::printfname()
{
	cout << name<<endl;
}
void Cstudent::printfxuehao()
{
	cout << xuehao << endl;
}
void Cstudent::printfchengji(float a, float b, float c)
{
	chinese = a;
	math = b;
	English = c;
	ave = (a + b + c) / 3;
	cout << "语文 : " << chinese << " ; 数学 : " << math
		<< " ; 英语 : " << English << endl << "平均分为 ：" << ave << endl;
}
int main()
{
	float num1,num2,num3;
	Cstudent mine;
	cout << "请输入你的名字：";
	mine.scanfname();
	cout << "请输入你的学号：";
	mine.scanfxuehao();
	cout << "请输入你的三科成绩：";
		cin >> num1 >> num2 >> num3;
	cout << "你的信息为：" << endl;
	mine.printfname();
	mine.printfxuehao();
	mine.printfchengji(num1, num2, num3);
		return 0;
}
