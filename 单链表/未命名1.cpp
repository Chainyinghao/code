#include<iostream>
#include<cstring>
#include<iomanip> 
using namespace std;
struct student
{
	char name[20];
	float score;
	struct student *next;
};
typedef student NODE;
NODE *Search(NODE *head,int key)
{
	NODE *p;
	p=head;
	while(p->next!=NULL)
    {
    	if(p->next->score<key)   //寻找关键字小于key的节点的前驱； 
    	  return p;
    	  p=p->next;
	}
	return p;
}
void InsertNode(NODE *p,NODE *newp)      //在p之后插入一个新的节点newp; 
{
	newp->next=p->next;
	p->next=newp;
 } 
 void DelNode(NODE *p)           //删除p节点的一个后继节点； 
 {
    NODE *q;
	if(p->next!=NULL)
	{
		q=p->next;
		p->next=q->next;
		delete q;
		}	
 }
 void DelList(NODE *head)          //删除链表； 
 {
 	NODE *p;
 	p=head;
 	while(head->next!=NULL)
 	{
 		head=head->next;
 		delete head;
 		p=head;
	 }
	 delete head;
 }
 void DisplayList(NODE *head)   //显示链表元素； 
{
	
	NODE *p;
	p=head;
	while(p->next!=NULL){
	cout<<p->next->name<<setw(12)<<p->next->score<<endl;
	p=p->next;
		}
 } 
 int main()
{
	NODE *newp,*head,*p;
	char name[20];
	float score,low=60;
	if((newp=new NODE)==NULL)
	{
		cout<<"new NODE fail"<<endl;
		exit(0);
	}
	head=newp;
	head->next=NULL;
	cout<<"Input name and score(-1 to exit):"<<endl;
	cin>>name>>score;
	while(score>0)
	{
		if((newp=new NODE)==NULL)
		{
			cout<<"new NODE fail"<<endl;
			exit(0); 
		}
		strcpy(newp->name,name);
		newp->score=score;
		newp->next=NULL;
		p=Search(head,score);
		InsertNode(p,newp);
		cin>>name>>score;
	}
	cout<<"before delete:"<<endl;
	DisplayList(head);
	for(p=Search(head,low);p->next!=NULL;p=Search(head,low))
	    DelNode(p);
	    cout<<"After delete:"<<endl;
	    DisplayList(head);
	    DelList(head);
	    return 0;
} 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
