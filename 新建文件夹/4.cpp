#include<math.h>
#include<iostream>
using namespace std;
void Simpson(double a,double b,int n) //复化辛普森公式
{ 
   double h=(b-a)/n;
   double t1,t2,x;
    t1=t2=0;
     for(x=a+h;x<b;x+=2*h)
       t1+=4*sin(x)/x;
     for(x=a+2*h;x<b;x+=2*h)
        t2+=2*sin(x)/x;
        double S=2*h*(1+sin(b)/b+t1+t2)/6; //当a=0,sin(a)/a=1
        cout<<"满足精度的积分结果为:S="<<S<<endl;
}
int main()
{
   double a,b;
   int n;
    cout<<"积分上下限分别为:";
    cin>>b>>a;
    cout<<"区间等分n=:";
    cin>>n;
    Simpson(a,b,n);
    return 0;
}

