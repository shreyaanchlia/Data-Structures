#include<iostream>
using namespace std;
struct node
{
int info;
node *next;
};
node *start=NULL;
void insert_beg(int data)
{
    node *temp=new node;
    if(temp==NULL)
    {
    	cout<<"overflow"<<endl;
    	return ;
    }
    temp->info=data;
	if(start==NULL)
	{
      temp->next=NULL;
      start=temp;
	}
	else
	{
    temp->next=start;
     start=temp;
	}
}
void traverse()
{
	node *p;
	if(start==NULL)
	{
		cout<<"underflow"<<endl;
		return;
	}
	p=start;
	while(p!=NULL)
	{
		cout<<p->info<<endl;
		p=p->next;
	}
}
void insert_end(int data)
{
 node *temp=new node;
 if(temp==NULL)
 {
 	cout<<"overflow"<<endl;
 	return ;
 }
 temp->info=data;
 node *p=start;
 if(start==NULL)
 {
 	temp->next=NULL;
 	start=temp;
 }
 while(p->next!=NULL)
 {
 	p=p->next;
 }
 p->next=temp;
 temp->next=NULL;
}
void insert_after(int element,int data)
{
	node *temp=new node;
	node *p=start;
	if(temp==NULL)
	{
		cout<<"overflow"<<endl;
		return ;
	}
	temp->info=data;
	while(p->info!=element)
	{
     p=p->next;
	}
	temp->next=p->next;
	p->next=temp;
}
void insert_before(int element,int data)
{
	node *temp=new node;
	node *p=start;
	if(temp==NULL)
	{
		cout<<"overflow"<<endl;
		return ;
	}
	temp->info=data;
	while(p->next->info!=element)
	{
		p=p->next;
	}
	temp->next=p->next;
	p->next=temp;
}
void del(int element)
{
	node *p=start;
	node *temp;
	if(p->info==element && p!=NULL)
	{
		start=p->next;
		delete p;
		return ;
	}
	while(p!=NULL && p->info!=element)
	{
		temp=p;
		p=p->next;
	}
	temp->next=p->next;
	delete p;
}
void search_element(int data)
{
	int pos=0;
node *p=start;
while(p!=NULL)
{
	if(p->info==data)
    {
    	cout<<data<<" found at "<<pos+1<<endl;
    }
    p=p->next;
    pos++;
}
}
int search_position(int pos)
{
int c=1;
node *p=start;
while(p!=NULL && c!=pos)
{
p=p->next;
c++;
}
cout<<p->info<<":found at position:"<<pos<<endl;
return (p->info);
}
int count()
{
	node *p=start;
	int count=0;
	while(p!=NULL)
	{
		count++;
		p=p->next;
	}
	cout<<"Number of nodes: ";
cout<<count<<endl;
return count;
}
void traverse_alternate()
{
	node *p=start;
	while(p!=NULL)
	{
		cout<<p->info<<endl;
		p=p->next->next;
	}
}
void reverse()
{
	node *current=start;
	node *result=NULL;
	node *next;
	while(current!=NULL)
	{
		next=current->next;
		current->next=result;
		result=current;
		current=next;
	}
	start=result;
}
void middle()
{
int x=count();
int y=(x+1)/2;
//cout<<y<<endl;
cout<<"middle of linkedlist is:"<<search_position(y);
}
node * start1=NULL;
int main()
{
	insert_beg(5);
	insert_beg(6);
	insert_after(6,89);
	//traverse();
	insert_beg(9);
	insert_end(12);
	insert_end(8);
	insert_after(9,56);
	insert_before(12,45);
	//del(12);
	//count();
	traverse();
	//traverse_alternate();
	//search_element(45);
	reverse();
	traverse();
	//search_position(1);
	//middle();
	return 0;
}
