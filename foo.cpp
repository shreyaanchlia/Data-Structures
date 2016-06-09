#include<iostream>
#include<string>
#include<cstdlib>
#include<fstream>
using namespace std;
int f(int &a)
{
	cout<<a<<endl;
	a=5;
	cout<<a<<endl;
}
int main()
{
	int x=89;
	cout<<x<<endl;
	f(x);
	cout<<x<<endl;
	return 0;
}