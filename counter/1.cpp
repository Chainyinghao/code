#include<iostream>
using namespace std;
class CCounter
{
	int value;
public:
	void SetValue(int number = 0);
	void Increment();
	void Decrement();
	int GetValue();
	void Print();
};
void CCounter::SetValue(int number)
{
	value = number;
}
void CCounter::Increment()
{
	value++;
}
void CCounter::Decrement()
{
	value--;
}
int CCounter::GetValue()
{
	return value;
}
void CCounter::Print()
{
	cout << "value: " << value << endl;
}
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
