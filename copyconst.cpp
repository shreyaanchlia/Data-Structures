#include<iostream>
using namespace std;
class Demo
{
int x,y;
public:
	Demo(int x1,int y1){ x=x1;y=y1;}
	Demo(const Demo &p2){ x=p2.x;y=p2.y;}
	int getx(){return x;}
	int gety(){return y;}
};
int main()
{
Demo p1(5,6);
Demo p2=p1;
cout<<p1.getx()<<" "<<p1.gety()<<endl;
cout<<p2.getx()<<" "<<p2.gety()<<endl;
return 0;
}