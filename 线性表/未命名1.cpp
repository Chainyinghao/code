#include<iostream>
#include<cstring>
using namespace std;
const int MaxSize=100;
class List
{
	private:
		int data[MaxSize];
		int size;    //��ǰ����Ԫ�صĸ����� 
	public:
		List(){}
		~List(){}
		void Insert(int &item,int pos);  //��posλ�ò���Ԫ�أ� 
		int  Delete(const int pos);                 //ɾ��Ԫ�ز����أ� 
		void Inidata();
		int  ListSize(){return size;}             //���ر�Ԫ�صĸ���size�� 
		                                        //���������������庯���壻
		int  Empty();                   //�����Ƿ�Ϊ�գ�
		int Find(int &item);   //����Ԫ�أ�
		int GetData(int pos); //����POS��λ�ã�
		void ClearList();          //��ձ� 
};
void List::Inidata()
{
	int *p=new int [size];
	cout<<"���������С��";
	cin>>size;
	cout<<"�������ݣ�"<<endl;
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
	cout<<"�����Ϊ��"<<endl; 
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
	  	cout<<"���Ա�����"<<endl;
	  	exit(1);
		 }
    if(pos<0||pos>size)        //��pos=sizeʱ��ʾ�Ѳ嵽��� 
	{
		cout<<"��Խ��"<<endl;
		exit(1); 
	   }  
	   size++;  //��ǰ����Ԫ�ؼ�һ��  
   	for(i=size;i>pos;i--)    //�Ӻ���ǰ��Ԫ�������ƣ�ֱ����pos��λ��Ϊֹ��
	    data[i]=data[i-1];
	data[pos]=item;      //��posλ������Ԫ�أ� 	
	cout<<"����Ϊ��"<<endl;
	for(int j=0;j<size;j++)
	   cout<<data[j]<<" ";                   
 } 
 int List::Delete(const int pos)
 {
 	if(size<=0)
 	  {
	     cout<<"�ñ���Ԫ��"<<endl;
	     exit(1);
	    }
	 if(pos<0||pos>size)   //ɾ��Ԫ�����pos������0��size-1֮�� 
	 {
	 	cout<<"��Խ��"<<endl;
	 	exit(1);
	 }
	 int temp=data[pos];
	 for(int i=pos;i<size-1;i++)  //��pos��size-2������ 
	 	data[i]=data[i+1];         
	 size--;                                       //��ǰ���ݸ���size��1 
	 return temp;
}
int List::Empty()            //�ж����Ա��Ƿ�գ��շ���1�����շ���0 
{
	if(size<=0)
	  return 1;
	 else
	   return 0; 
 } 
 int List::Find(int &item)     //��λԪ��item��λ�á�����ֵΪtemp��λ�ã�����ֵΪ-1��ʾ������ 
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
 	 cout<<"Խ��"<<endl;
 	 exit(1);
 	 return data[pos];
 }
 void List::ClearList()
 {
     size=0; 
	}        //��ǰ���ݸ�����ʼΪ0��
 int main()
 {
 	List list;
 	int a,b;
 	cout<<"��ʼ�����飺"<<endl;
 	list.Inidata();
 	cout<<"\n������Ҫ���������������λ�ã�"; 
 	cin>>a>>b;
 	list.Insert(a,b);
 	return 0;
 }
 
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
