#include<iostream>
#include<fstream>
using namespace std;
class Complex
{
	private:
		double real;
		double image;
		public:
			Complex(double real=0.0,double image=0.0)
			{
				this->real=real;
				this->image=image;
			}
			friend istream& operator>>(istream&,Complex&);
			friend ostream& operator<<(ostream&,const Complex&);
			void display()
			{
				cout<<"("<<real<<","<<image<<")"<<endl;
			}
			Complex operator +(Complex B);
};
istream& operator>>(istream&input,Complex&C)
{
	input>>C.real>>C.image;
	return input;
}
ostream& operator<<(ostream&output,const Complex&C)
{
	output<<C.real;
	if(C.image>=0)
	 output<<"+";
	 output<<C.image<<"i";
	 return output;
}
Complex Complex::operator +()
{
	return Complex(real+B.real,image+B.image);
}
int main()
{
	fstream myfile;
	myfile.open("D:\\360data\\重要数据\\桌面\\My file\\Complex.txt",ios::out);
	if(!myfile)
	{
		cerr<<"Complex.txt creat or open error"<<endl;
		exit(-1);
	}
	while(!myfile.eof())
	{
		myfile<<
	}
	

















	
}
