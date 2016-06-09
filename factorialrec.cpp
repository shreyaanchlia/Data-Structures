#include<bits/stdc++.h>
using namespace std;
int factorial(int num)
{
	int fact=1;
	if(num==0)
		return fact;
	fact=num*factorial(num-1);
   return fact;
}
int main()
{
	cout<<factorial(8);
}