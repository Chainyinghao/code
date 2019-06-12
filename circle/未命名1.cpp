#include<iostream>
using namespace std;
class Circle
{
  private:
       int X,Y,R;
  public:
  	   void GetO(){}
  	   int GetR(){return R;}
  	   void SetO(int a,int b){X=a;Y=b;}
	   void SetR(int r){R=r;}
	   int MoveTo();
	   void Display();
	   ~Circle();
};
int Circle::MoveTo()
{
	int m=1;
	int x1,y1;
	cout<<"输入1或0选择是否需要移动：";
	cin>>m;
	if(m)
	{
		cout<<"X的改变值：";
		cin>>x1;
		cout<<"Y的改变值：";
		cin>>y1;
	 } 
	 else
	    exit(-1);
	 X=X+x1;
	 Y=Y+y1;
} 
void Circle::Display()
{
	cout<<"圆心的坐标：（"<<X<<","<<Y<<")"<<endl;
	cout<<"半径为："<<R<<endl;
}
Circle::~Circle()
{
	cout<<"bye bye"<<endl; 
}
int main()
{
	Circle circle;
	int x,y,r;
	cout<<"分别输入圆心的横、纵坐标以及半径：";
	cin>>x>>y>>r;
	circle.SetO(x,y);
	circle.SetR(r) ;
	circle.Display();
	circle.MoveTo();
	circle.GetO();
	circle.GetR();
	circle.Display();
	return 0;
}
