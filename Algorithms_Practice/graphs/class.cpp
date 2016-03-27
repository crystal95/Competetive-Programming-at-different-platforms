#include<iostream>
#include<stdio.h>
using namespace std;
class rect
{
	int len;
	int bred;
	public:
	int area();
	void in(int,int);
};
int rect::area()
{
	return len*bred;
}
void rect::in(int a,int b)
{
	len=a;
	bred=b;
}
int main()
{
	int i,j,k,l;
	rect a;
	a.in(4,5);
	cout<<a.area()<<endl;
return 0;
}

