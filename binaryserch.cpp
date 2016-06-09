#include<bits/stdc++.h>
using namespace std;
int binary(int a[],int n,int k)
{
int l=0;
int r=n-1;
while(l<=r)
{
	int  mid=(l+r)/2;
	if(a[mid]==k)
		return mid;
	if(a[mid]>k)
	{
		r=mid-1;
	}
	else
		l=mid+1;
}
return -1;
}
int main()
{
	int arr[]={1,5,6,9,45,96};
	int n=sizeof(arr)/sizeof arr[0];
	int k=45;
	int x=binary(arr,n,k);
    if(x!=-1)
    	cout<<"found at"<<x<<endl;
    else
    	cout<<"not found"<<endl;
}