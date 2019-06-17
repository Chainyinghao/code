#include<iostream>
#include<cmath>
using namespace std;
double distance(double x1,double x2,double y1,double y2)
{
	double z;
	z=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	return z;
}
int main()
{
	double x1(0),x2(0),x3(0);
	double y1(0),y2(0),y3(0);
	cout<<"请输入坐标系中三个点的坐标："<<endl;
	cout<<"A : ";
	  cin>>x1>>y1;
	cout<<"B : ";
	  cin>>x2>>y2;
	cout<<"C : ";
	  cin>>x3>>y3;
    double z1,z2,z3;
	z1=distance(x1,x2,y1,y2);
	z2=distance(x1,x3,y1,y3);
	z3=distance(x2,x3,y2,y3);
	if(z1<(z2+z3)&&z1>(z2-z3))
	   cout<<"该三点能构成三角形"<<endl;
	else
	   cout<<"该三点不能构成三角形"<<endl;
	  return 0;	
}
