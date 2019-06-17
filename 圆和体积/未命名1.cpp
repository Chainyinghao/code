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
				cout<<"输入圆的半径：";
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
			    cout<<"输入圆心坐标：";
				cin>>X>>Y;	
				cout<<"圆心的坐标为：（"<<X<<","<<Y<<")"<<endl;
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
	cout<<"圆的面积为："<<circle.Area()<<endl;
	cout<<"圆的周长为："<<circle.Perimeter()<<endl;
	cout<<"输入圆柱的高：";
	int h;
	cin>>h;
	column.Varea();
    cout<<"体积为："<<column.Volumn(h)<<endl;
    return 0;
}











