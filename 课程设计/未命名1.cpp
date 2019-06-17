/*******************************************************************
*          分数计算器设计                                         **
* 功能要求：                                                      **
*（1）定义整数类和分数类，其中包括构造函数、析构函数、显示函数等；**
*（2）输入输出：对插入、提取运算符进行重载；                      **
*（3）计算功能：对分数进行加、减、乘、除运算；                    **
*（4）化简功能：将分数化成最简分数；                              **
*（5）异常处理：分母不能为零；                                    **
*（6）菜单功能：每种功能的操作都是在菜单中进行相应选择；          **
*完成时间：       2017年6月22日                                   **
*设计人：   邓英豪                                                */
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
class Zhengshu
{
private:
	int Fenzi, Fenmu;
public:
	Zhengshu(){}
	Zhengshu(int FZ, int FM) :Fenzi(FZ), Fenmu(FM)
	{}
	int GetFenzi(){ return Fenzi; }
	int GetFenmu(){ return Fenmu; }
	virtual ~Zhengshu(){}
};
class Fenshu :public Zhengshu
{
private:
	int Fenzi, Fenmu;
	char Fenhao;
public:
	Fenshu(){}
	Fenshu(Zhengshu A)
	{
		this->Fenmu = A.GetFenmu();
		this->Fenzi = A.GetFenzi();
	}
	friend Fenshu operator +(Fenshu A, Fenshu B);
	friend Fenshu operator -(Fenshu A, Fenshu B);
	friend Fenshu operator *(Fenshu A, Fenshu B);
	friend Fenshu operator /(Fenshu A, Fenshu B);
	friend ostream &operator <<(ostream &, const Fenshu &);
	friend istream &operator >>(istream &, Fenshu &);
	void Display();
	void JiSuan(Fenshu a1, Fenshu a2, char fuhao);
	void SShow();
	void Huajian();
	void Show(Fenshu A);
	~Fenshu(){}
};
Fenshu operator +(Fenshu A, Fenshu B)
{
	Fenshu C;
	C.Fenzi = A.Fenzi + B.Fenzi;
	C.Fenmu = A.Fenmu = B.Fenmu;
	return C;
}
Fenshu operator -(Fenshu A, Fenshu B)
{
	Fenshu C;
	C.Fenzi = A.Fenzi - B.Fenzi;
	C.Fenmu = A.Fenmu = B.Fenmu;
	return C;
}
Fenshu operator *(Fenshu A, Fenshu B)
{
	Fenshu C;
	C.Fenzi = A.Fenzi*B.Fenzi;
	C.Fenmu = A.Fenmu*B.Fenmu;
	return C;
}
Fenshu operator /(Fenshu A, Fenshu B)
{
	Fenshu C;
	C.Fenzi = A.Fenzi*B.Fenmu;
	C.Fenmu = A.Fenmu*B.Fenzi;
	return C;
}
ostream &operator <<(ostream &output, const Fenshu &A)
{
	output << A.Fenzi << "/" << A.Fenmu ;      //重载插入运算符；进行分数输出
	return output;
}
istream &operator >>(istream &input, Fenshu &A)
{
	input >> A.Fenzi >> A.Fenhao >> A.Fenmu;    //重载提取运算符；进行分数输入
	if (A.Fenmu == 0)
	{
		cout << "错误！分母不能为零" << endl;
		abort();
	}
	return input;
}
void Fenshu::Display()
{
	cout << "计算结果是：" << Fenzi << "/" << Fenmu << endl;
}
void Fenshu::JiSuan(Fenshu a1, Fenshu a2, char fuhao)
{
	Fenshu A, B, C;
	if (a1.Fenmu == a2.Fenmu)
	{
		A.Fenmu = B.Fenmu = a1.Fenmu;     //判断是否需要进行通分加减
		A.Fenzi = a1.Fenzi;
		B.Fenzi = a2.Fenzi;
	}
	else
	{
		A.Fenzi = a1.Fenzi*a2.Fenmu;
		A.Fenmu = a1.Fenmu*a2.Fenmu;
		B.Fenzi = a2.Fenzi*a1.Fenmu;
		B.Fenmu = A.Fenmu;
	}
	switch (fuhao)                             //根据选择进行运算
	{
	case '+':
		C = A + B;
		break;
	case '-':
		C = A - B;
		break;
	case '*':
		C = A*B;
		break;
	case '/':
		C = A / B;
		break;
	case 1:
		C = A + B;
		cout << a1 << " + " << a2 << " = " << endl;
		break;
	case 2:
		C = A - B;
		cout << a1 << " - " << a2<< " = " << endl;
		break;
	case 3:
		C = A*B;
		cout << a1 << " * " << a2 << " = " << endl;
		break;
	case 4:
		C = A / B;
		cout << a1 << " / " << a2 << " = " << endl;
		break;
	}
	if (C.Fenmu == 0)
	{
		cout << "错误！分母不能为零" << endl;
		abort();
	}
	else
	{
		this->Fenzi = C.Fenzi;
		this->Fenmu = C.Fenmu;
	}
}
void Fenshu::SShow()
{
	Fenshu D;                                      //真分数化简
	D.Fenzi = Fenzi;
	D.Fenmu = Fenmu;
	if (D.Fenzi<D.Fenmu)
		cout << "化简结果为：" << D << endl;
	else
	{
		int n;
		n = D.Fenzi / D.Fenmu;                              //假分数化为代分数
		D.Fenzi = D.Fenzi - n*D.Fenmu;
		if (D.Fenzi == 0)
			cout << n << endl;
		else
			cout << "化简结果为：" << n << "+" << D << endl;
	}
}
void Fenshu::Huajian()
{
	int r;
	for (r = Fenmu; r>1; r--)                     // 寻找分子分母的最大公约数
	{
		if (Fenzi%r == 0 && Fenmu%r == 0)
			break;
	}
	this->Fenzi /= r;
	this->Fenmu /= r;
}
void Fenshu::Show(Fenshu A)
{
	if (Fenzi == A.Fenzi&&Fenmu == A.Fenmu)
		cout << "You are right!" << endl;
	else
		cout << "正确答案为：" << Fenzi << "/" << Fenmu << endl;
}
int main()
{
	cout << endl;
	cout << "\t*****************欢迎使用分数计算器*******************" << endl;
	cout << "\t*                                                    *" << endl;
	cout << "\t*                计算你的式子(1)                     *" << endl;
	cout << "\t*                                                    *" << endl;
	cout << "\t*                随 机 计 算 (2)                     *" << endl;
	cout << "\t*                                                    *" << endl;
	cout << "\t*注释：                                              *" << endl;
	cout << "\t*(1)输入你所要计算的两个分式，然后选择所要进行的运算,*" << endl;
	cout << "\t*   及选择是否需要化简。                             *" << endl;
	cout << "\t*(2)系统随机给出一个算式，输入你的计算结果判断对错   *" << endl;
	cout << "\t******************************************************" << endl;
	cout << endl << "请选择：";
	int k;
	cin >> k;
	if (k == 1)
	{
		Fenshu F1, F2, F3;
		char yunsuan;
		for (int ch = 0; ch != 3;)
		{
			cout << "分别输入两个分式：\n";
			cin >> F1 >> F2;
			for (; ch != 2 && ch != 3;)
			{
				cout << "选择你所要进行的运算：";
				cin >> yunsuan;
				F3.JiSuan(F1, F2, yunsuan);
				F3.Display();
				cout << "是否需要化简(1是；0否）：";
				int i;
				cin >> i;
				if (i == 1)
				{
					F3.Huajian();
					F3.SShow();
					system("pause");
					cout << "对该分式重新进行运算（1）" << endl; //选择功能 
					cout << "重新输入分式进行运算（2）" << endl;
					cout << "退出计算器（3）" << endl;
					cin >> ch;
					if (ch == 2 && ch == 3)
						break;
				}
				else
				{
					cout << "对该分式重新进行运算（1）" << endl; //选择功能 
					cout << "重新输入分式进行运算（2）" << endl;
					cout << "退出计算器（3）" << endl;
					cin >> ch;
					if (ch == 2 && ch == 3)
						break;
				}
			}
			if (ch == 3)
				break;
			ch = 0;   //初始化ch值，防止陷入死循环 
		}
		return 0;
	}
	else
	{
		for (int ch1 = 1;;)
		{
			cout << "输入分式最大的整数范围值：";
			int i;
			cin >> i;
			srand((unsigned)time(NULL));
			Zhengshu A(1 + rand() % i, 1 + rand() % i);
			Zhengshu B(1 + rand() % i, 1 + rand() % i);
			Fenshu F1(A);
			Fenshu F2(B);
			Fenshu F3;
			char ch = 1 + rand() % 4;
			F3.JiSuan(F1, F2, ch);
			F3.Huajian();
			cout << "输入你的答案：";
			Fenshu F4;
			cin >> F4;
			F3.Show(F4);
			cout << "是否继续（1）是（0）否：";
			cin >> ch1;
			if (ch1 == 1)
				continue;
			else
				break;
		}
		return 0;
	}
	cout << "**********************************谢谢使用***********************************" << endl;
}



