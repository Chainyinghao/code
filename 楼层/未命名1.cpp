#include<iostream>
using namespace std;
class Building
{
	public:
		void Show()
		{
			cout<<"��ѧУ��������Ϣ"<<endl;
		}
};
class Teach_Building:public Building
{
	private:
		char num[7]={'A','B','C','D','E','F','G'};
	public:
	void TBNum();
	void TBStor();
	void TBRoom();
	void TBArea();	
};
void Teach_Building::TBNum()
{
  cout<<"��ѧУ�У�"<<endl;
  for(int i=0;i<7;i++)
    cout<<num[i]<<"¥ ";
}
void Teach_Building::TBStor()
{
	int sto1(6),sto2(4),sto3(2),sto4(3),sto5(2);
	cout<<"\n��ѧ¥�Ĳ�����"<<sto1<<endl;
	cout<<"ʵ��¥�Ĳ�����"<<sto2<<endl;
	cout<<"����¥�Ĳ�����"<<sto3<<endl; 
	cout<<"ͼ��¥�Ĳ�����"<<sto4<<endl;
	cout<<"���õĲ�����"<<sto5<<endl;
}
void  Teach_Building::TBRoom()
{
	int room1(75),room2(16);
	cout<<"��������"<<room1<<endl;
	cout<<"ʵ��������"<<room2<<endl;
}
void Teach_Building::TBArea()
{
	double s1(4800.86),s2(1600),s3(425.6);
	cout<<"��ѧ¥�������"<<s1<<endl;
	cout<<"ʵ�����������"<<s2<<endl;
	cout<<"�������:"<<s3<<endl;
 } 
 class Dorm_Building:public Building
 {
 	private:
    char num1[4]={'A','B','C','D'}; 
   public:
        void DBNum();
	    void DBStor();
	    void DBRoom();
	    void DBArea();	
        int CStudent();
 };
void Dorm_Building::DBNum()
{
	cout<<"�����У�"<<endl;
	for(int i=0;i<4;i++)
	cout<<num1[i]<<"�� "; 
}
void Dorm_Building::DBStor()
{
	int sto1(6),sto2(7),sto3(6),sto4(5);
	cout<<"\n��������1(A)�����У�"<<sto1<<endl;
	cout<<"��������2(B)�����У�"<<sto2<<endl;
	cout<<"Ů����Ԣ1(C)�����У�"<<sto3<<endl;
	cout<<"Ů����Ԣ2(D)�����У�"<<sto4<<endl;
}
void Dorm_Building::DBRoom()
{
	int room1(90),room2(140),room3(90),room4(100);
	cout<<"��������1(A)����������"<<room1<<endl;
	cout<<"��������2(B)����������"<<room2<<endl;
	cout<<"Ů����Ԣ1(C)����������"<<room3<<endl;
	cout<<"Ů����Ԣ2(D)����������"<<room4<<endl; 
}
void Dorm_Building::DBArea()
{
	int s1(2500),s2(2000);
	cout<<"���������������"<<s1<<endl;
	cout<<"Ů����Ԣ�������"<<s2<<endl;
}
int Dorm_Building::CStudent()
{
	int student(5600);
		cout<<"��У������ѧ����������"<<student<<endl;
		return student;
}
int main()
{
	Teach_Building tb;
	tb.TBNum();
	tb.TBStor();
	tb.TBRoom();
	tb.TBArea();
	Dorm_Building db;
	db.DBNum();
	db.DBStor();
	db.DBRoom();
	db.DBArea();
	db.CStudent();
	return 0;	
}






























