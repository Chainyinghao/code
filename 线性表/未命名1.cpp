#include<iostream>
#include<cstring>
using namespace std;
const int MaxSize=100;
class List
{
	private:
		int data[MaxSize];
		int size;    //当前数据元素的个数； 
	public:
		List(){}
		~List(){}
		void Insert(int &item,int pos);  //在pos位置插入元素； 
		int  Delete(const int pos);                 //删除元素并返回； 
		void Inidata();
		int  ListSize(){return size;}             //返回表元素的个数size； 
		                                        //内联函数方法定义函数体；
		int  Empty();                   //检测表是否为空；
		int Find(int &item);   //查找元素；
		int GetData(int pos); //返回POS的位置；
		void ClearList();          //清空表； 
};
void List::Inidata()
{
	int *p=new int [size];
	cout<<"输入数组大小：";
	cin>>size;
	cout<<"输入数据："<<endl;
	for(int i=0;i<size;i++)
	    cin>>p[i];
	for(int i=0;i<size-1;i++)
	    for(int j=i+1;j<size;j++)
	      {
	       	 if(p[i]>p[j])
	       	   {
	       	   	int temp=p[j];
	       	   	p[j]=p[i];
	       	   	p[i]=temp;
				  }  
		   }
	cout<<"排序后为："<<endl; 
	   for(int k=0;k<size;k++)
	      cout<<p[k]<<" ";
	memcpy(data,p,size);
	      delete [] p;
}
void List::Insert(int &item,int pos)
{
    int i;
	if(size==MaxSize)
	  {
	  	cout<<"线性表已满"<<endl;
	  	exit(1);
		 }
    if(pos<0||pos>size)        //当pos=size时表示已插到最后 
	{
		cout<<"已越界"<<endl;
		exit(1); 
	   }  
	   size++;  //当前数据元素加一；  
   	for(i=size;i>pos;i--)    //从后向前将元素往后移，直到到pos的位置为止；
	    data[i]=data[i-1];
	data[pos]=item;      //在pos位上增加元素； 	
	cout<<"数组为："<<endl;
	for(int j=0;j<size;j++)
	   cout<<data[j]<<" ";                   
 } 
 int List::Delete(const int pos)
 {
 	if(size<=0)
 	  {
	     cout<<"该表无元素"<<endl;
	     exit(1);
	    }
	 if(pos<0||pos>size)   //删除元素序号pos必须在0到size-1之间 
	 {
	 	cout<<"已越界"<<endl;
	 	exit(1);
	 }
	 int temp=data[pos];
	 for(int i=pos;i<size-1;i++)  //从pos到size-2逐渐右移 
	 	data[i]=data[i+1];         
	 size--;                                       //当前数据个数size减1 
	 return temp;
}
int List::Empty()            //判断线性表是否空，空返回1，不空返回0 
{
	if(size<=0)
	  return 1;
	 else
	   return 0; 
 } 
 int List::Find(int &item)     //定位元素item的位置。返回值为temp的位置，返回值为-1表示不存在 
 {
 	int i=0;
 	if(Empty())
	    return -1;
	while(i<size&&item!=data[i])
	      i++;
	if(i<size) return i;
	else   return-1;
 }
 int List::GetData(int pos)
 {
 	if(pos<0||pos>size-1)
 	 cout<<"越界"<<endl;
 	 exit(1);
 	 return data[pos];
 }
 void List::ClearList()
 {
     size=0; 
	}        //当前数据个数初始为0；
 int main()
 {
 	List list;
 	int a,b;
 	cout<<"初始化数组："<<endl;
 	list.Inidata();
 	cout<<"\n输入所要插入的数及其所在位置："; 
 	cin>>a>>b;
 	list.Insert(a,b);
 	return 0;
 }
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
