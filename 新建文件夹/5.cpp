#include <iostream>
using namespace std;
template <class T>
struct Node{
    T  key;
};
template <class T,int size >
class Orderedlist{
   int maxsize;
   int last;
   Node<T> slist[size]; //数组元素为结构
public:
   Orderedlist(){last=-1;maxsize=size;}  //用last表示数组中的最后一个有效元素的下标，刚开始数组没有
                                         // 元素，程序约定其值为-1用此值来判断数组是否为空；
										 //以后若储存进去一个元素，last值就变为0，
										 //再储存一个就变为1，以此类推 
void BubbleSort();
void Setlist(Node<T> aa[],int n);
void print();   
}; 
template <class T,int size > 
void Orderedlist<T,size>::BubbleSort()
{
    int i,j;
    Node<T> temp;
    for (i=0;i<last;i++){ //最多做n-1趟
	 	 for(j=last;j>i;j--){ //从下往上冒泡
 	      if(slist[j].key<slist[j-1].key){
		    temp=slist[j];
		    slist[j]=slist[j-1]; 
		    slist[j-1]=temp;}
			}}
}
template <typename T,int size >
void Orderedlist<T,size>::Setlist(Node<T> aa[],int n)
{
	last=n;
	for(int i=0;i<=last;i++)
		slist[i]=aa[i];
}
template <typename T,int size> 
void Orderedlist<T,size>::print(){
	int i;
	for(i=0;i<=last;i++){
		cout<<slist[i].key <<'\t';
		if(i%10==9) cout<<endl;
	}
	cout<<endl;
}
int main()
{
    const int N=19;
    int i,k=47;
    Orderedlist<int,100> ordlist;
    int a[N]={11,12,17,18,23,28,30,38,51,53,57,63,79,81,87,1,2,3,4};
    Node<int> n[N];
    for(i=0;i<N;i++)  
     n[i].key=a[i];
      ordlist.Setlist(n,N-1);
      ordlist.BubbleSort( ); 
      ordlist.print();//
    return 0;
}
