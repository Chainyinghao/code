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
	cout<<"����1��0ѡ���Ƿ���Ҫ�ƶ���";
	cin>>m;
	if(m)
	{
		cout<<"X�ĸı�ֵ��";
		cin>>x1;
		cout<<"Y�ĸı�ֵ��";
		cin>>y1;
	 } 
	 else
	    exit(-1);
	 X=X+x1;
	 Y=Y+y1;
} 
void Circle::Display()
{
	cout<<"Բ�ĵ����꣺��"<<X<<","<<Y<<")"<<endl;
	cout<<"�뾶Ϊ��"<<R<<endl;
}
Circle::~Circle()
{
	cout<<"bye bye"<<endl; 
}
int main()
{
	Circle circle;
	int x,y,r;
	cout<<"�ֱ�����Բ�ĵĺᡢ�������Լ��뾶��";
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
