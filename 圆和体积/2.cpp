#include<iostream>
const double PI=3.14;
using namespace std;
class Column;
class Circle
{
  private:
     int R;
	 double S,L;
	 public:
	 	 	friend class Column;
	   int SetR()
	   {
	   	 cout<<"�������Բ�İ뾶��";
	   	 cin>>R;
	   	 return R;
	   }
	   double SetArea();
       double SetPerimeter();
};
double Circle::SetPerimeter()
{
	L=2*PI*R;
	return L;
}
double Circle::SetArea()
{
	S=PI*R*R;
	return S;
}
class Column
{
	private:
		int H;
		double V;
		public:
			int SetH();
			double SetVolume(Circle x);
			void Show(Circle x);
};
int Column::SetH()
{
	cout<<"����Բ���ĸߣ�";
	cin>>H;
	return H;
}
double Column::SetVolume(Circle x)
{
	V=x.S*H;
	return V;
}
void Show(Circle x)
{
	cout<<"����Բ�����Ϊ��"<<x.S<<endl;
	cout<<"����Բ���ܳ�Ϊ��"<<x.L<<endl;
	cout<<"Բ�������Ϊ��"<<V<<endl; 
}
int main()
{
	Circle circle;
	Column column;
	circle.SetR();
	circle.SetPerimeter();
	circle.SetArea();
	column.SetH();
	column.SetVolume();
	column.Show();
	return 0;
}










