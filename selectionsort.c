#include<stdio.h>
void swap(int *x ,int *y)
{
	int t=*x;
	*x=*y;
	*y=t;
}
void selectionsort(int a[],int n)
{
	int mn;
	int i,j,index;
	for(i=0;i<n-1;i++)
	{
		mn=i;
      for(j=i+1;j<n;j++)
      {
      	if(a[j]<a[mn])
      	{
      		mn=j;
      	}
      }
      swap(&a[i],&a[mn]);
	}
}
void bubblesort(int a[],int n)
{
	int i,j;
for(i=0;i<n;i++)
{
	for(j=0;j<n-1-i;j++)
		if(a[j]>a[j+1])
			swap(&a[j],&a[j+1]);
}
}
void insertionsort(int a[],int n)
{
	int i,j,key;
	for(i=1;i<n;i++)
	{
		key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key)
        {
          a[j+1]=a[j];
          j--;
        }
        a[j+1]=key;
	}
}
int main()
{
	int i=0;
int a[]={4,1,3,25,9,16};
int size=(sizeof a/sizeof a[0]);
//selectionsort(a,size);
//bubblesort(a,size);
insertionsort(a,size);
for( i=0;i<size;i++)
printf("%d ",a[i] );
}