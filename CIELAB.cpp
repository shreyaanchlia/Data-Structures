#include<bits/stdc++.h>
using namespace std;
int main()
{
	long a,b;
	cin>>a>>b;
	long n=a-b;
		if(n%10 < 9 && n%10>=0 )
			cout<<++n<<endl;
		else
			cout<<--n<<endl;
}