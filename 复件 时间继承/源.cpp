#include<iostream>
using namespace std;
class Date
{
protected:
	int Year, Month, Day;
public:
	Date() :Year(2017), Month(4), Day(12)
	{
		cout << "默认日期为：" << Year<<"年" <<
			Month << "月" << Day << "日" << endl;
	}
	Date(int Y, int M, int D)
	{
		this->Year = Y;
		this->Month = M;
		this->Day = D;
		cout << "初始日期为：" << Year << "年" <<
			Month << "月" << Day << "日" << endl;
	}
	void SetDate();
	void Show();
};
void Date::SetDate()
{
	int a, YY, MM, DD;
	cout << "是否需要修改日期：";
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
	cout << "当前设定日期为：" << Year << "年" <<
		Month << "月" << Day << "日" << endl;
}
class Time
{
protected:
	int Hour, Minute, Second;
public:
	Time() :Hour(13), Minute(14), Second(52)
	{
		cout << "默认时间为："  << Hour <<
			":" << Minute << ":" << Second << endl;
	}
	Time(int H, int M, int S)
	{
		this->Hour = H;
		this->Minute = M;
		this->Second = S;
		cout << "初始时间为：" << Hour <<
			":" << Minute << ":" << Second << endl;
	}
	void SetTime();
	void Show();
};
void Time::SetTime()
{
	int b, HH, MM, SS;
	cout << "是否需要修改时间：";
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
	cout << "当前设定时间为："  << Hour <<
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





