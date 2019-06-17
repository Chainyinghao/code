#include<math.h>
#include<iostream>
using namespace std;
void Simpson(double a,double b,int n) //��������ɭ��ʽ
{ 
   double h=(b-a)/n;
   double t1,t2,x;
    t1=t2=0;
     for(x=a+h;x<b;x+=2*h)
       t1+=4*sin(x)/x;
     for(x=a+2*h;x<b;x+=2*h)
        t2+=2*sin(x)/x;
        double S=2*h*(1+sin(b)/b+t1+t2)/6; //��a=0,sin(a)/a=1
        cout<<"���㾫�ȵĻ��ֽ��Ϊ:S="<<S<<endl;
}
int main()
{
   double a,b;
   int n;
    cout<<"���������޷ֱ�Ϊ:";
    cin>>b>>a;
    cout<<"����ȷ�n=:";
    cin>>n;
    Simpson(a,b,n);
    return 0;
}

