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
    cout<<"�����������";
    cin>>number;
    counter.SetValue(number);
    counter.Increment();
    cout<<"������";
    counter.GetValue();
    counter.Print();
    counter.SetValue(number);
    counter.Decrement();
    cout<<"�Լ���";
    counter.GetValue();
    counter.Print();
    return 0;
}
