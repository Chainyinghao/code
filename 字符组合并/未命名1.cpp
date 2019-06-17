#include<iostream>
using namespace std;
int main()
{
    char a[23]="The world is ";
    char b[9]="beatiful";
    int i,j;
    cout<<"合并前："<<endl;
	for(i=0;i<13;i++)
	cout<<a[i];
	cout<<endl;
	for(j=0;j<9;j++)
	cout<<b[j];
	for(i=13,j=0;i<23,j<9;i++,j++)
	 a[i]=b[j];
	 cout<<endl<<"合并后："<<endl;
	 for(i=0;i<23;i++)
	 cout<<a[i];
	return 0;	
}
