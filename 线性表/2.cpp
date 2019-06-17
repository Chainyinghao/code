#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
const int MAXSIZE=100;
class List
{
private:
 int data[MAXSIZE];
 int size1;	
public:
	List(int inia=0,int inib=0);
	void Update(int a[],int b);
    void Update();
    void Sort();
    void Insert(int &item,int pos);
    int  Find(int temp);
    void Delete(int pos);
    ~List();
}; 
List::List(int inia,int inib)
{
	for(int i=0;i<inib;i++)
	 {
	 	data[i]=inia;
	 	inia++;
	 }
	 cout<<"初始数组为："<<endl;
	 for(int j=0;j<inib;j++)
	 cout<<data[j]<<" ";
}
void List::Update(int a[],int b)
{
	if(b>MAXSIZE)
	 {
	  cout<<"数值个数越界"<<endl;
	  exit(1);} 
	for(int i=0;i<b;i++)
	   data[i]=a[i];
	   cout<<"新数组为："<<endl;
	   for(int i=0;i<b;i++) 
	      cout<<data[i]<<" ";	
}
void List::Update()
{
	srand((unsigned)time(NULL));
	size1=rand()%(MAXSIZE+1);
	if(size1==0)
	  {
	  cout<<"产生数组失败"<<endl;
	  exit(1);}
	cout<<"新数组大小为："<<size1<<endl;
	for(int i=0;i<size1;i++)
	  {
	  	data[i]=rand()%(size1+1);
	  	cout<<data[i]<<" ";
	  }
}
void List::Sort()
{
	for(int i=0;i<size1-1;i++)
	    for(int j=i+1;j<size1;j++)
	      {
	       	 if(data[i]>data[j])
	       	   {
	       	   	int temp=data[j];
	       	   	data[j]=data[i];
	       	   	data[i]=temp;
				  }  
		   }
	cout<<"排序后为："<<endl; 
	   for(int k=0;k<size1;k++)
	      cout<<data[k]<<" ";
}
void List::Insert(int &item,int pos)
{
	if(pos>=MAXSIZE)
	  {
	  	cout<<"该线性表已满,无法插入"<<endl;
	  	exit(1);
	  }
	if(pos>size1||pos<0)
	   { 
	     cout<<"已越界"<<endl;
	     exit(1);
	   }
	  int i;
	  for(i=size1;i>pos;i--)    //从后向前将元素往后移，直到到pos的位置为止；
	    data[i]=data[i-1];
	data[pos]=item; 
	size1++;
	cout<<"数组为："<<endl;
	for(int j=0;j<size1;j++)
	   cout<<data[j]<<" ";  
}
void List::Delete(int pos)
{
	if(pos<0)
	 { 
		cout<<"该表无该元素"<<endl;
		exit(1);
	 }
	if(pos<0||pos>size1)
	 {
	    cout<<"越界"<<endl;
	    exit(1);}
	   int temp;
	   temp=data[pos];
	for(int i=pos;i<size1;i++)
		data[pos]=data[i+1];
		size1--;
	       cout<<"删除数据为："<<temp<<endl;
	          cout<<"剩余数组为："<<endl;
	             for(int i=0;i<size1;i++)
	                cout<<data[i]<<" ";
}
int List::Find(int temp)
{
	int j,a,b;
	cout<<"是否需要进行查找";
	cin>>a;
	if(a==0)
	  exit(1);
	  else
	     {
		  while(b!=0)
	      {
		    if(b!=0)
		    {
		    	cout<<"输入查找字符：";
		    	cin>>temp;
		    	for(j=0;j<size1;j++)
		    	  if(temp==data[j])
		    	    cout<<"该字符位置是："<<size1+1<<endl;
			}
			cout<<"输入1开始查找，0结束";
			cin>>b;
	}}
	return temp;
}
int main()
{
	List list(0,4);
	int size2,a;
	int temp[MAXSIZE];
	cout<<"是否需要随机数组：";
	cin>>a;
	if(a==0)
	 list.Update();
	 else
	 {
	   cout<<"输入数组大小：";
	   cin>>size2;
	   for(int i=0;i<size2;i++)
	     cin>>temp[i];
	    list.Update(temp,size2);
	    list.Sort();
	 } 
	 cout<<"输入插入数据及位置：";
	 int num1,pos1;
	 cin>>num1>>pos1;
	 list.Insert(num1,pos1);
	 cout<<"输入查找数值：";
	 int num2;
	 cin>>num2;
	 list.Find(num2);
	 cout<<"输入删除数值：";
	 int num3;
	 cin>>num3;
	 list.Delete(num3);
	 return 0;
}






































