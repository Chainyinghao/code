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
	cout << "���� : " << chinese << " ; ��ѧ : " << math
		<< " ; Ӣ�� : " << English << endl << "ƽ����Ϊ ��" << ave << endl;
}
int main()
{
	float num1,num2,num3;
	Cstudent mine;
	cout << "������������֣�";
	mine.scanfname();
	cout << "���������ѧ�ţ�";
	mine.scanfxuehao();
	cout << "������������Ƴɼ���";
		cin >> num1 >> num2 >> num3;
	cout << "�����ϢΪ��" << endl;
	mine.printfname();
	mine.printfxuehao();
	mine.printfchengji(num1, num2, num3);
		return 0;
}
