#include<stdio.h>
int fact(int num)
{
	int f=num;
	if(num==1)
		{
        return f;
		}
	return f*fact(num-1);
}
int main()
{
	int num;
	scanf("%d",&num);
	printf("%d\n",fact(num));
	return 0;
}