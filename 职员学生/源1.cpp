#include<iostream>
using namespace std;
enum work{ student = 1, staff, teacher, staffstudent };
class Person
{
private:
	char name[20];
	int tel[11];
	char add[50];
	int t1;
	int t2;
public:
	void Inputname();
	void Inputtel();
	void Inputadd();
	void Show();

};
void Person::Inputname()
{
	t1 = 0;
	cout << "����������";
	char ch;
	for (int i = 0; i<20; i++)
	{
		cin >> ch;
		name[i] = ch;
		t1++;
	}
}
void Person::Inputtel()
{
	cout << "\n����绰��";
	for (int i = 0; i < 11; i++)
	{
		cin >> tel[i];
	}
}
void Person::Inputadd()
{
	t2 = 0;
	cout << "\n�����ͥסַ��";
	char ch;
	for (int i = 0; i<50; i++)
	{
		cin >> ch;
		add[i] = ch;
		t2++;
	}
}
void Person::Show()
{
	cout << "\n������";
	for (int i = 0; i<t1; i++)
		cout << name[i];
	cout << "\n�绰��";
	for (int i = 0; i<11; i++)
		cout << tel[i];
	cout << "\n��ͥסַ��";
	for (int i = 0; i<t2; i++)
		cout << add[i];
}
class Student :public Person
{
protected:
	char major[15];
	int t3;
public:
	void Stu_information();
	void Show();
};
void Student::Stu_information()
{
	t3 = 0;
	char ch;
	Inputname();
	Inputtel();
	Inputadd();
	for (int i = 0; i<15; i++)
	{
		cin >> ch;
		major[i] = ch;
		t3++;
	}
}
void Student::Show()
{
	Person::Show();
	cout << "ѧ��רҵ��Ϣ��";
	for (int i = 0; i<t3; i++)
		cout << major[i];
}
class Staff :public Person
{
protected:
	char office[15];
	double money;
	int t4;
public:
	void Sta_information();
	void Show();
};
void Staff::Sta_information()
{
	t4 = 0;
	Inputname();
	Inputtel();
	Inputadd();
	cout << "���ڲ��ţ�";
	char ch;
	for (int i = 0; i<15; i++)
	{
		cin >> ch;
		office[i] = ch;
		t4++;
	}
	cout << "ÿ�¹��ʣ�";
	cin >> money;
}
void Staff::Show()
{
	Person::Show();
	cout << "���ڲ��ţ�";
	for (int i = 0; i<t4; i++)
		cout << office[i];
	cout << "ÿ�¹���Ϊ��" << money << endl;
}
class Teacher :public Staff
{
protected:
	char lesson[50];
	int t5;
public:
	void Tea_information();
	void Show();
};
void Teacher::Tea_information()
{
	t5 = 0;
	Inputname();
	Inputtel();
	Inputadd();
	Sta_information();
	char ch;
	cout << "�ڿ���Ϣ��" << endl;
	for (int i = 0; i<50; i++)
	{
		cin >> ch;
		lesson[i] = ch;
		t5++;
	}
}
void Teacher::Show()
{
	Staff::Show();
	cout << "�ڿ���Ϣ��" << endl;
	for (int i = 0; i<t5; i++)
		cout << lesson[i];
}
class StudentTeacher :public Student, public Teacher
{
public:
	void Information();
	void Show();
};
void StudentTeacher::Information()
{
	Student::Inputname();
	Student::Inputtel();
	Student::Inputadd();
	Teacher::Inputname();
	Teacher::Inputtel();
	Teacher::Inputadd();
	Sta_information();
	Tea_information();
	Stu_information();
}
void StudentTeacher::Show()
{
	Teacher::Show();
	Student::Show();
}
int main()
{
	int i;
	cout << "���������ְҵ��" << endl;
	cout << "ѧ����1������Ա��2������ʦ��3������ְ���޽�ʦ��4����" << endl;
	cin >> i;
	if (i == 1)
	{
		Student A;
		A.Stu_information();
		A.Show();
	}
	else if (i == 2)
	{
		Staff B;
		B.Sta_information();
		B.Show();
	}
	else if (i == 3)
	{
		Teacher C;
		C.Tea_information();
		C.Show();
	}
	else if (i == 4)
	{
		StudentTeacher D;
		D.Information();
		D.Show();
	}
	return 0;
}









