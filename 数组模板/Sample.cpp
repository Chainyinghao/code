#include<iostream>
using namespace std;
template<typename T>class Sample
{
  private:
     T n;
	 public:
	  Sample(T nn):n(nn){};
	  Sample operator==(Sample b)
	  {
	  	if(n==b.n)
	  	 cout<<"���������nֵ���"<<endl;
		   else 
	  	    cout<<"���������nֵ�����"<<endl;
		  }	
		  ~Sample()
		  {
		  	cout<<"It is been called"<<endl;
		  }
};

int main()
{
	Sample<int>A(20);
	Sample<int>B(10);
	 A==B;
	 Sample<char>C('A');
	 Sample<char>D('A');
	 A==A;
	 return 0;
}
