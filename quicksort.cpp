#include<bits/stdc++.h>
using namespace std;
void swap(int &a,int &b)
{
	int t=a;
	a=b;
	b=t;
}
int partition(int a[],int p,int r)
{
int x=a[r];
int i=p-1;
for(int j=p;j<r;j++)
{
	if(a[j]<=x)
	{
		i++;
		swap(a[i],a[j]);
	}
	swap(a[i+1],a[r]);
}
return i+1;
}
void quicksort(int a[],int p,int r)
{
	if(p<r)
	{
		int q=partition(a,p,r);
		quicksort(a,p,q-1);
		quicksort(a,q+1,r);
	}
}

int main()
{
	int a[] = {4,6,6,12,1,9,8,7,4,5,23};
	int size = sizeof a/sizeof a[0];
	quicksort(a,0,size-1);
	for(int i=0;i<size;i++)
		cout<<a[i]<<" ";

}