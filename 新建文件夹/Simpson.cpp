#include<cmath>
#include<iostream>
using namespace std;
class Simpson{
	private:
		double a,b;
		double step,result;
		int n;
		public:
			virtual int Hanshu()=0;
};
class Sinx:public Simpson
{
	private:
		double a,b;
		double step,result;
		int n;
		public:
			Sinx(double aa,double bb,int nn):a(aa),b(bb),n(nn)
			{
				step=(b-a)/n;
			}
			int Hanshu();
};
int Sinx::Hanshu()
{
	result=0;
	double temp,x1(0),x2(0);
	for(temp=a+step;temp<b;temp+=2*step)
	    x1+=4*sin(temp)/temp;
	    for(temp=a+step*2;temp<b;temp+=2*step)
	    x2+=2*sin(temp)/temp;
	    result=2*step*(1+sin(b)/b+x1+x2)/6;
	    cout<<"满足精度的积分结果为:result="<<result<<endl;
	    return result;
}
void fun(Simpson *p)
{
   p->Hanshu();	
}
const double PI=3.1415926;
int main()
{
	Simpson *pp;
	Sinx a(0.0,PI/2,100000);
	pp=&a;
	fun(pp);
	return 0;
}












