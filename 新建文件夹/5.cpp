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
   Node<T> slist[size]; //����Ԫ��Ϊ�ṹ
public:
   Orderedlist(){last=-1;maxsize=size;}  //��last��ʾ�����е����һ����ЧԪ�ص��±꣬�տ�ʼ����û��
                                         // Ԫ�أ�����Լ����ֵΪ-1�ô�ֵ���ж������Ƿ�Ϊ�գ�
										 //�Ժ��������ȥһ��Ԫ�أ�lastֵ�ͱ�Ϊ0��
										 //�ٴ���һ���ͱ�Ϊ1���Դ����� 
void BubbleSort();
void Setlist(Node<T> aa[],int n);
void print();   
}; 
template <class T,int size > 
void Orderedlist<T,size>::BubbleSort()
{
    int i,j;
    Node<T> temp;
    for (i=0;i<last;i++){ //�����n-1��
	 	 for(j=last;j>i;j--){ //��������ð��
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
