#include<iostream>
const double PI = 3.14;
using namespace std;
class Point
{
  private:
     float X,Y;
	 public:
	 int GetX(float xx)
	 {
	   this->X=xx;
	   return X;}	
	 int GetY(float yy)
	 {
       this->Y=yy;	 
	   return Y;}	
};
class Circle:public Point
{
private:
	int R;
	double S, L;
public:
	 Circle()
	{
		Point P;
		float xx,yy;
		cout<<"输入圆心坐标：";
		cin>>xx>>yy;
		P.GetX(xx);
		P.GetY(yy);
	 } 
	int SetR()
	{
		cout << "输入底面圆的半径：";
		cin >> R;
		return R;
	}
	double SetArea();
	double SetPerimeter();
};
double Circle::SetPerimeter()
{
	L = 2 * PI*R;
	return L;
}
double Circle::SetArea()
{
	S = PI*R*R;
	return S;
}
class Column:public Circle
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
	cout << "输入圆柱的高：";
	cin >> H;
	return H;
}
double Column::SetVolume(Circle x)
{
	V = x.SetArea()*H;
	return V;
}
void Column::Show(Circle x)
{
	cout << "底面圆的面积为：" << x.SetArea() << endl;
	cout << "底面圆的周长为：" << x.SetPerimeter()<< endl;
	cout << "圆柱的体积为：" << V << endl;
}
int main()
{
	Circle circle;
	Column column;
	circle.SetR();
	circle.SetPerimeter();
	circle.SetArea();
	column.SetH();
	column.SetVolume(circle);
	column.Show(circle);
	return 0;
}
