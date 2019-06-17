#include<iostream>
#include<cstdlib>
#include<ctime>
const int Len=20;
using namespace std;
class IntArray
{
	private:
		int list[Len];
		bool IsValid(int index)const;
	public:
	    IntArray();
	    bool Set(int index,int element);
	    bool Get(int index,int &element);
	    int LinearSearch(int value)const;
	    void BubbleSort();
};
bool IntArray::IsValid(int index)const
{
	if(index<0||index>Len-1)
	{
		cout<<"Խ��"<<endl;
		return false;
	}
	else
	 return true;
}
IntArray::IntArray()
{
	for(int i=0;i<Len;i++)
	list[i]=0;
}
bool IntArray::Set(int index,int element)
{
	if(IsValid(index))
	{
		list[index]=element;
		return true;
	}
	else
	    return false; 
}
bool IntArray::Get(int index,int &element)
{
	if(IsValid(index))
	{
		element=list[index];
		return true;
	}
	else
	    return false;
}
int IntArray::LinearSearch(int value)const
{
	for(int i=0;i<Len;i++)
		if(this->list[i]==value)
		  return i+1;
}
void IntArray::BubbleSort()
{
	for(int i=0;i<Len-1;i++)
	   for(int j=i+1;j<Len;j++)
	    {
	    	int temp;
	    	if(this->list[i]>this->list[j])
	    	  {
	    	  	temp=this->list[i];
	    	  	this->list[i]=this->list[j];
	    	  	this->list[j]=temp;
			  }
		}
}
int main()
{
  IntArray Array;
  int value;
  srand((unsigned)time(NULL));
  for(int i=0;i<Len;i++)
  {
  	value=rand()%100;
  	Array.Set(i,value);
  }
  for(int i=0;i<Len;i++)
  {
  	Array.Get(i,value);
  	cout<<value<<" ";
  }
  cout<<"\n�����Ϊ��"<<endl;
  Array.BubbleSort();
  for(int i=0;i<Len;i++)
  {
  	Array.Get(i,value);
  	cout<<value<<" ";	
  }
  int a;
  cout<<endl<<"������Ҫ���ҵ�����";
  cin>>a;
  int index;
  index=Array.LinearSearch(a);
  if(index==0)
    cout<<"�����ڸ���"<<endl;
    else
    cout<<"�����״γ����ڵ�"<<index<<"λ"<<endl; 
  	return 0;
}























