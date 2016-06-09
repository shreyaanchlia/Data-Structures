#include<iostream>
#include<cstdio>
using namespace std;
struct node
{
	int info;
	node *next;
};
node *head=NULL;
void insert_beg(int data)
{
	node *temp=new node;
	if(temp==NULL)
		return;
	temp->info=data;
	if(head==NULL)
	{
		temp->next=temp;
        head=temp;
	}
	else
	{
		temp->next=head;
		head->next=temp;
		head=temp;
	}
}
void traverse()
{
	node *x;
    if (head == NULL)
        printf("\n List is empty");
    else
    {
        x = head;
        while (x->next !=  head)
        { 
            printf("%d->", x->info);
            x = x->next;
        }
        printf("%d", x->info);
    }
}
int main()
{
	insert_beg(56);
	insert_beg(3);
	insert_beg(39);
	insert_beg(6);
	traverse();
return 0;
}