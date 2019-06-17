#include<iostream>
#include<cmath>
using namespace std;
double root(double x)
{
	double y;
	y=x*x-5*x+4;
	return y;
}
int main()
{
	double x(0),result;
	cout<<"ÇëÊäÈëXµÄÖµ£º"<<endl;
	cin>>x;
	result=root(2);
	cout<<"y1=2^2-5*2+4="<<result<<endl;
	 result=root(x+15);
	 cout<<"y2=(x+15)^2-5*(x+15)+4="<<result<<endl;
	 result=root(sin(x));
	 cout<<"y3=(sin x)^2-5*(sin x)+4="<<result<<endl;
	return 0; 
}
