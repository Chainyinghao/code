/*******************************************************************
*          �������������                                         **
* ����Ҫ��                                                      **
*��1������������ͷ����࣬���а������캯����������������ʾ�����ȣ�**
*��2������������Բ��롢��ȡ������������أ�                      **
*��3�����㹦�ܣ��Է������мӡ������ˡ������㣻                    **
*��4�������ܣ�������������������                              **
*��5���쳣������ĸ����Ϊ�㣻                                    **
*��6���˵����ܣ�ÿ�ֹ��ܵĲ��������ڲ˵��н�����Ӧѡ��          **
*���ʱ�䣺       2017��6��22��                                   **
*����ˣ�   ��Ӣ��                                                */
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
	output << A.Fenzi << "/" << A.Fenmu ;      //���ز�������������з������
	return output;
}
istream &operator >>(istream &input, Fenshu &A)
{
	input >> A.Fenzi >> A.Fenhao >> A.Fenmu;    //������ȡ����������з�������
	if (A.Fenmu == 0)
	{
		cout << "���󣡷�ĸ����Ϊ��" << endl;
		abort();
	}
	return input;
}
void Fenshu::Display()
{
	cout << "�������ǣ�" << Fenzi << "/" << Fenmu << endl;
}
void Fenshu::JiSuan(Fenshu a1, Fenshu a2, char fuhao)
{
	Fenshu A, B, C;
	if (a1.Fenmu == a2.Fenmu)
	{
		A.Fenmu = B.Fenmu = a1.Fenmu;     //�ж��Ƿ���Ҫ����ͨ�ּӼ�
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
	switch (fuhao)                             //����ѡ���������
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
		cout << "���󣡷�ĸ����Ϊ��" << endl;
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
	Fenshu D;                                      //���������
	D.Fenzi = Fenzi;
	D.Fenmu = Fenmu;
	if (D.Fenzi<D.Fenmu)
		cout << "������Ϊ��" << D << endl;
	else
	{
		int n;
		n = D.Fenzi / D.Fenmu;                              //�ٷ�����Ϊ������
		D.Fenzi = D.Fenzi - n*D.Fenmu;
		if (D.Fenzi == 0)
			cout << n << endl;
		else
			cout << "������Ϊ��" << n << "+" << D << endl;
	}
}
void Fenshu::Huajian()
{
	int r;
	for (r = Fenmu; r>1; r--)                     // Ѱ�ҷ��ӷ�ĸ�����Լ��
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
		cout << "��ȷ��Ϊ��" << Fenzi << "/" << Fenmu << endl;
}
int main()
{
	cout << endl;
	cout << "\t*****************��ӭʹ�÷���������*******************" << endl;
	cout << "\t*                                                    *" << endl;
	cout << "\t*                �������ʽ��(1)                     *" << endl;
	cout << "\t*                                                    *" << endl;
	cout << "\t*                �� �� �� �� (2)                     *" << endl;
	cout << "\t*                                                    *" << endl;
	cout << "\t*ע�ͣ�                                              *" << endl;
	cout << "\t*(1)��������Ҫ�����������ʽ��Ȼ��ѡ����Ҫ���е�����,*" << endl;
	cout << "\t*   ��ѡ���Ƿ���Ҫ����                             *" << endl;
	cout << "\t*(2)ϵͳ�������һ����ʽ��������ļ������ж϶Դ�   *" << endl;
	cout << "\t******************************************************" << endl;
	cout << endl << "��ѡ��";
	int k;
	cin >> k;
	if (k == 1)
	{
		Fenshu F1, F2, F3;
		char yunsuan;
		for (int ch = 0; ch != 3;)
		{
			cout << "�ֱ�����������ʽ��\n";
			cin >> F1 >> F2;
			for (; ch != 2 && ch != 3;)
			{
				cout << "ѡ������Ҫ���е����㣺";
				cin >> yunsuan;
				F3.JiSuan(F1, F2, yunsuan);
				F3.Display();
				cout << "�Ƿ���Ҫ����(1�ǣ�0�񣩣�";
				int i;
				cin >> i;
				if (i == 1)
				{
					F3.Huajian();
					F3.SShow();
					system("pause");
					cout << "�Ը÷�ʽ���½������㣨1��" << endl; //ѡ���� 
					cout << "���������ʽ�������㣨2��" << endl;
					cout << "�˳���������3��" << endl;
					cin >> ch;
					if (ch == 2 && ch == 3)
						break;
				}
				else
				{
					cout << "�Ը÷�ʽ���½������㣨1��" << endl; //ѡ���� 
					cout << "���������ʽ�������㣨2��" << endl;
					cout << "�˳���������3��" << endl;
					cin >> ch;
					if (ch == 2 && ch == 3)
						break;
				}
			}
			if (ch == 3)
				break;
			ch = 0;   //��ʼ��chֵ����ֹ������ѭ�� 
		}
		return 0;
	}
	else
	{
		for (int ch1 = 1;;)
		{
			cout << "�����ʽ����������Χֵ��";
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
			cout << "������Ĵ𰸣�";
			Fenshu F4;
			cin >> F4;
			F3.Show(F4);
			cout << "�Ƿ������1���ǣ�0����";
			cin >> ch1;
			if (ch1 == 1)
				continue;
			else
				break;
		}
		return 0;
	}
	cout << "**********************************ллʹ��***********************************" << endl;
}



