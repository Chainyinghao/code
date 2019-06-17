#include<iostream> 
using namespace std;
int main()
{
	long seconds1;
	int days,hours,minutes,seconds2;
	cout<<"Enter the number of seconds:"<<endl;
	cin>>seconds1;
	days=seconds1/86400;
	hours=seconds1%86400/3600;
	minutes=seconds1%86400%3600/60;
	seconds2=seconds1%86400%3600%60;
	cout<<seconds1<<"seconds ="<<days<<"days  "
	    <<hours<<"hours  "<<minutes<<"minutes  "
	    <<seconds2<<"seconds  "<<endl; 
	return 0;
}
