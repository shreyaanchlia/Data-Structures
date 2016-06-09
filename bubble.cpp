#include<bits/stdc++.h>
using namespace std;
void swap(int &a,int &b)
{
	int t=a;
	a=b;
	b=t;
}
int main()
{
int a[]={4,5,5,6,1,8,4,5,};
int size=sizeof a/sizeof a[0];
for(int i=0;i<size-1;i++)
{
	for(int j=0;j<size-1-i;j++)
	{
		if(a[j]>a[j+1])
		{
			swap(a[j],a[j+1]);
		}
	}
}
for(int i=0;i<size;i++)
cout<<a[i]<<" ";

}