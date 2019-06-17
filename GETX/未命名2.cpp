#include<iostream>
using namespace std;
class CPoint
{
	public:
		int GetX(){return X;}
	    int GetY(){return Y;}
	    void SetX(int a){X=a;}
	    void SetY(int b){Y=b;}
	    void MoveTo(int num1=0,int num2=0);
	    void Show();
	private:
		int X,Y;
};
void CPoint::MoveTo(int num1,int num2)
{
  	X=X+num1;
  	Y=Y+num2;
}
void CPoint::Show()
{
	cout<<"X= "<<X<<"  Y="<<Y<<endl;
}
int main()
{
	CPoint cpoint;
	int a,b,c,d;
	cout<<"请输入初始坐标值： "<<"\n X=";
	cin>>a;
	cpoint.SetX(a);
	cout<<" Y=";
	cin>>b;
	cpoint.SetY(b);
	cout<<"请分别输入你的改变量：";
	cin>>c>>d;
	cpoint.MoveTo(c,d);
	cpoint.GetX();
	cpoint.GetY();
	cout<<"移动后的坐标为：";
	cpoint.Show(); 
	return 0;
}
