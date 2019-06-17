#include<iostream>
using namespace std;
class CCounter
{
	int value;
public:
	void SetValue(int number){value = number;}
	void Increment(){value++;}
	void Decrement(){value--;}
	int GetValue(){return value;}
	void Print()
	{
	  cout << "value: " << value << endl;
    }
};
int main()
{
    CCounter counter;
    int number;
    cout<<"输入你的数：";
    cin>>number;
    counter.SetValue(number);
    counter.Increment();
    cout<<"自增后：";
    counter.GetValue();
    counter.Print();
    counter.SetValue(number);
    counter.Decrement();
    cout<<"自减后：";
    counter.GetValue();
    counter.Print();
    return 0;
}
