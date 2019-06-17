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
	  	 cout<<"两个对象的n值相等"<<endl;
		   else 
	  	    cout<<"两个对象的n值不相等"<<endl;
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
