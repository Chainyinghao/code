#include<iostream>
using namespace std;
class Building
{
	public:
		void Show()
		{
			cout<<"该学校建筑类信息"<<endl;
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
  cout<<"该学校有："<<endl;
  for(int i=0;i<7;i++)
    cout<<num[i]<<"楼 ";
}
void Teach_Building::TBStor()
{
	int sto1(6),sto2(4),sto3(2),sto4(3),sto5(2);
	cout<<"\n教学楼的层数："<<sto1<<endl;
	cout<<"实验楼的层数："<<sto2<<endl;
	cout<<"行政楼的层数："<<sto3<<endl; 
	cout<<"图书楼的层数："<<sto4<<endl;
	cout<<"礼堂的层数："<<sto5<<endl;
}
void  Teach_Building::TBRoom()
{
	int room1(75),room2(16);
	cout<<"教室数："<<room1<<endl;
	cout<<"实验室数："<<room2<<endl;
}
void Teach_Building::TBArea()
{
	double s1(4800.86),s2(1600),s3(425.6);
	cout<<"教学楼总面积："<<s1<<endl;
	cout<<"实验室总面积："<<s2<<endl;
	cout<<"礼堂面积:"<<s3<<endl;
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
	cout<<"宿舍有："<<endl;
	for(int i=0;i<4;i++)
	cout<<num1[i]<<"区 "; 
}
void Dorm_Building::DBStor()
{
	int sto1(6),sto2(7),sto3(6),sto4(5);
	cout<<"\n男生寝室1(A)层数有："<<sto1<<endl;
	cout<<"男生寝室2(B)层数有："<<sto2<<endl;
	cout<<"女生公寓1(C)层数有："<<sto3<<endl;
	cout<<"女生公寓2(D)层数有："<<sto4<<endl;
}
void Dorm_Building::DBRoom()
{
	int room1(90),room2(140),room3(90),room4(100);
	cout<<"男生寝室1(A)总宿舍数："<<room1<<endl;
	cout<<"男生寝室2(B)总宿舍数："<<room2<<endl;
	cout<<"女生公寓1(C)总宿舍数："<<room3<<endl;
	cout<<"女生公寓2(D)总宿舍数："<<room4<<endl; 
}
void Dorm_Building::DBArea()
{
	int s1(2500),s2(2000);
	cout<<"男生寝室总面积："<<s1<<endl;
	cout<<"女生公寓总面积："<<s2<<endl;
}
int Dorm_Building::CStudent()
{
	int student(5600);
		cout<<"该校能容纳学生总人数："<<student<<endl;
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






























