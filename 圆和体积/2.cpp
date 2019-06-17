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
	   	 cout<<"输入底面圆的半径：";
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
	cout<<"输入圆柱的高：";
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
	cout<<"底面圆的面积为："<<x.S<<endl;
	cout<<"底面圆的周长为："<<x.L<<endl;
	cout<<"圆柱的体积为："<<V<<endl; 
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










