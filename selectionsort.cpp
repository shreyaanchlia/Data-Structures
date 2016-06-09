#include<bits/stdc++.h>
using namespace std;
void swap(int &a,int &b)
{
	int t =a;
	a=b;
	b=t;
}
int main()
{
int arr[]={5,9,4,1,23,56};
int size= sizeof arr/sizeof arr[0];
int min;
for(int i=0;i<size-1;i++)
{
	min=i;
	for(int j=i+1;j<size;j++)
	{
		if(arr[j]<arr[min])
		{
			min=j;
		}
	}
	swap(arr[min],arr[i]);
}
for(int i=0;i<size;i++)
cout<<arr[i]<<" ";
}