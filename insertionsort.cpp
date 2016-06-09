#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[]={12,11,13,5,6};
	int size=sizeof a/sizeof a[0];
    int key,i;
    for(int j=1;j<size;j++)
    {
    	key=a[j];
    	i=j-1;
    	while(i>0 && a[i]>key)
    	{
    		a[i+1]=a[i];
    		i--;
    	}
    	a[i+1]=key;
    }
    for(int i=0;i<size;i++)
    	cout<<a[i]<<" ";
}