#include<stdio.h>
#include<stdlib.h>
struct Stack
{
int top;
int capacity;
int *arr;
} ; 
struct Stack * createstack(int capacity)
{
	struct Stack *stack=(struct Stack *)malloc(sizeof(struct Stack *));
	stack->capacity=capacity;
	int *arr=(int *)calloc(stack->capacity,sizeof(int));
	int top=-1;
	return stack;
}
int isfull(struct Stack *stack)
{
	return (stack->top==stack->capacity-1);
}
int isempty(struct Stack *stack)
{
	return (stack->top==-1);
}
int push(struct Stack *stack,int x)
{
if(isfull(stack))
{
	printf("stack overflow\n");
	return ;
}
   stack->arr[++stack->top]=x;
   printf("%d item is inserted",x);
}
int pop(struct Stack *stack)
{
	if(isempty(stack))
    {
    	printf("stack underflow\n");
    	return ;
    }
    int y=stack->arr[--stack->top];
    return y; 
}
int peek(struct Stack *stack)
{
	return stack->arr[stack->top];
}
int main()
{
	int i;
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	struct Stack *stack=createstack(10);
	push(stack,2);
	push(stack,56);
	push(stack,89);
	printf("peek element is:%d",peek(stack));
	pop(stack);
	printf("peek element is %d",peek(stack));
return 0;
}