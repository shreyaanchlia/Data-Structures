#include<iostream>
using namespace std;
#define max 5
int queue[max];
int rear=-1;
int front=-1;
void enqueue(int data)
{
	if((front==0 && rear==max-1)||front==rear+1)
	{
		cout<<"overflow"<<endl;
		return ;
	}
	if(front==-1)
	{
		rear=0;
		front=0;
	}
	else if(rear==max-1)
	{
		rear=0;
	}
	else
		rear++;
	queue[rear]=data;
}
void dequeue()
{
	int x;
	if(front==-1)
	{
		cout<<"underflow"<<endl;
		return;
	}
	x=queue[front];
	if(front==rear)
	{
		front=-1;
		rear=-1;
	}
	if(front==max-1)
		front=0;
	else
		front++;
cout<< x;
}
void display()
{
	for(int i=front;i<=rear;i++)
		cout<<queue[i]<<endl;
} 
int main()
{
enqueue(6);
enqueue(7);
enqueue(1);
display();
dequeue();
display();
}
