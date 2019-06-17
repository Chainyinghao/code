#include<iostream>
using namespace std;
class Array
{
	private:
		int a[3][3];
		public:
			Array()
			{
				for(int i=0;i<3;i++)
				  for(int j=0;j<3;j++)
				  a[i][j]=0;
			}
			friend ostream&operator<<(ostream&,const Array&);
			friend istream&operator>>(istream&,Array&);
			friend Array operator +(const Array A,const Array B);
};
ostream&operator<<(ostream&output,const Array&T)
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
	      output<<T.a[i][j]<<" ";
	      output<<endl;
		  }
	   return output;
}
istream&operator>>(istream&input,Array&T)
{
	cout<<"input Array:"<<endl;
	for(int i=0;i<3;i++)
	   for(int j=0;j<3;j++)
	     input>>T.a[i][j];
	     return input;
}
Array operator +(const Array A,const Array B)
{
	Array C;
	for(int i=0;i<3;i++)
	   for(int j=0;j<3;j++)
	     C.a[i][j]=A.a[i][j]+B.a[i][j];
	     return C;
}
int main()
{
	Array a,b,c;
	cin>>a>>b;
	cout<<"Array a:\n"<<a<<"Array b:\n"<<b;
	c=a+b;
	cout<<"a+b=:\n"<<c<<endl;
	return 0;
}

