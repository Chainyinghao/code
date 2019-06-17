#include<iostream>
using namespace std;
class Date
{
protected:
	int Year, Month, Day;
public:
	Date() :Year(2017), Month(4), Day(12)
	{
		cout << "Ĭ������Ϊ��" << Year<<"��" <<
			Month << "��" << Day << "��" << endl;
	}
	Date(int Y, int M, int D)
	{
		this->Year = Y;
		this->Month = M;
		this->Day = D;
		cout << "��ʼ����Ϊ��" << Year << "��" <<
			Month << "��" << Day << "��" << endl;
	}
	void SetDate();
	void Show();
};
void Date::SetDate()
{
	int a, YY, MM, DD;
	cout << "�Ƿ���Ҫ�޸����ڣ�";
	cin >> a;
	if (a == 1)
	{
		cout << "Year:";
		cin >> YY;
		this->Year = YY;
		cout << "Month:";
		cin >> MM;
		this->Month = MM;
		cout << "Day:";
		cin >> DD;
		this->Day = DD;
	}
	else
		exit(-1);
}
void Date::Show()
{
	cout << "��ǰ�趨����Ϊ��" << Year << "��" <<
		Month << "��" << Day << "��" << endl;
}
class Time
{
protected:
	int Hour, Minute, Second;
public:
	Time() :Hour(13), Minute(14), Second(52)
	{
		cout << "Ĭ��ʱ��Ϊ��"  << Hour <<
			":" << Minute << ":" << Second << endl;
	}
	Time(int H, int M, int S)
	{
		this->Hour = H;
		this->Minute = M;
		this->Second = S;
		cout << "��ʼʱ��Ϊ��" << Hour <<
			":" << Minute << ":" << Second << endl;
	}
	void SetTime();
	void Show();
};
void Time::SetTime()
{
	int b, HH, MM, SS;
	cout << "�Ƿ���Ҫ�޸�ʱ�䣺";
	cin >> b;
	if (b == 1)
	{
		cout << "Hour:";
		cin >> HH;
		this->Hour = HH;
		cout << "Minute:";
		cin >> MM;
		this->Minute = MM;
		cout << "Second:";
		cin >> SS;
		this->Second = SS;
	}
	else
		exit(-1);
}
void Time::Show()
{
	cout << "��ǰ�趨ʱ��Ϊ��"  << Hour <<
		":" << Minute << ":" << Second << endl;
}
class DT :public Date, public Time
{
public:
	void SetDate()
	{
		Date::SetDate();
	}
	void SetTime()
	{
	 Time::SetTime();
	}
	void Show()
	{
	Date::Show();
	Time::Show();
	}
};
int main()
{
	Date A;
	Date B(1997, 4, 22);
	Time C;
	Time D(14, 25, 28);
	DT dt;
	dt.SetDate();
	dt.SetTime();
	dt.Show();
	return 0;
}





