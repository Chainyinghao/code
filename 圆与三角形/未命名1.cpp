#include<iostream>
#include<cmath>
using namespace std;
const double PI=3.14;
enum shape{circle=1,triangle=2};
class Shape{
	public:
		double area(int i)
		{
			if(i==circle)
			{
				S=PI*R*R;
				return S;
			}
			if(i==triangle)
			{
				int p;
				p=(a+b+c)/2;
				S=sqrt(double(p*(p-a)*(p-b)*(p-c)));
				return S;
			}
		}
		double girth(int i)
		{
			if(i==circle)
			{
				L=2*PI*R;
				return L;
			}
			if(i==triangle)
			{
				L=a+b+c;
				return L;
			}
		}
		void Show()
		{
			cout<<"shape object:"<<endl;
		}
	protected:
		double S,L;
		int a,b,c,R;		
};
class Circle:public Shape
{
	private: 
	   int CR,X,Y;
	   double CS,CL;
	public:
	   int GETR()
	   {
	   	cout<<"input redius:";
	   	cin>>CR;
	   	this->R=this->CR;
	   	return R;
		   }	
	    void SETXY()
	    {
	    	cout<<"input X and Y:";
	    	cin>>X>>Y;
	    	cout<<"("<<X<<","<<Y<<")"<<endl;
		}
		double Carea()
		{
			this->CS=area(circle);
			cout<<"圆的面积："<<this->CS<<endl;
			return CS;
		 } 
		 double Cgirth()
		 {
		    this->CL=girth(circle);
		 	cout<<"圆的周长："<<CL<<endl;
		 	return CL;
		 }
		 void CShow()
		 {
		 	Show();
		 	cout<<"\tCIRCLE"<<endl;
		 }
};
class Triangle:public Shape
{
	private:
		int a1,b1,c1;
		double TS,TL;
		public:
			void Setabc()
			{
				cout<<"输入三边长：";
				cin>>a1>>b1>>c1;
				if(a1+b1<=c1|a1-b1>=c1)
				{
					cout<<"无法构成三角形"<<endl;
					exit(-1);
				}
				else
				{
					this->a=this->a1;
					this->b=this->b1;
					this->c=this->c1;	
				}
			}
			double Tarea()
			{
			this->TS=area(2);
				cout<<"三角形的面积："<<this->TS<<endl;
				return TS;
			}
			double Tgirth()
			{
				this->TL=girth(2);
				cout<<"三角形的周长："<<this->TL<<endl;
				return TL;
			}
			void TShow()
			{
				Show();
				cout<<"\tTRIANGLE"<<endl;
			}
};
int main()
{
	Circle cir;
	cir.GETR();
	cir.SETXY();
	cir.Carea();
	cir.Cgirth();
	cir.CShow();
	Triangle tri;
	tri.Setabc();
	tri.Tarea();
	tri.Tgirth();
	tri.TShow();
}































