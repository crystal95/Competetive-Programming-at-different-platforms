using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
int main()
{
	int i,j,k,l,n;
	cin>>n>>l;
	if(l<10)
	{
		for(i=0;i<n;i++)
			cout<<l;
		cout<<endl;
	}
	else
	{
		if(n==1)
			cout<<"-1"<<endl;
		else
		{
			for(i=0;i<n-1;i++)
			cout<<'1';
			cout<<'0'<<endl;
		}
	}
	return 0;
}
