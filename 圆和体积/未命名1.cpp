#include<iostream>
const double PI=3.14;
using namespace std;
class Column;
class Circle{
	private:
		int R,X,Y;
		public:
			int SetR()
			{
				cout<<"����Բ�İ뾶��";
				cin>>R;
				return R;
			}
			double Area()
			{				
				double area;
				area=PI*R*R;
				return area;
			}
			double Perimeter()
			{
				double l;
				l=2*PI*R;
				return l;
			}
			void SetXY()
			{
			    cout<<"����Բ�����꣺";
				cin>>X>>Y;	
				cout<<"Բ�ĵ�����Ϊ����"<<X<<","<<Y<<")"<<endl;
			}
};
class Column{
	private:
		int H;
		double S;
		Circle C_Varea;
		public:
			double Varea(){
				S=C_Varea.Area();
				return S;
			}
			double Volumn(int h);
};
double Column::Volumn(int h)
{
	H=h;
	double v;
	v=S*h;
	return v;	
}
int main()
{
	Circle circle;
	Column column;
	circle.SetXY();
	circle.SetR();
	cout<<"Բ�����Ϊ��"<<circle.Area()<<endl;
	cout<<"Բ���ܳ�Ϊ��"<<circle.Perimeter()<<endl;
	cout<<"����Բ���ĸߣ�";
	int h;
	cin>>h;
	column.Varea();
    cout<<"���Ϊ��"<<column.Volumn(h)<<endl;
    return 0;
}











