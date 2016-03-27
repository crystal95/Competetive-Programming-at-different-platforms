using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
#include <map>
int main()
{
	int i,j,k,l,n,na,nb,m,x,cnt=0,max=-1;
	cin>>n;
	int hash[2001],curr=0;
	for(i=1;i<=n;i++)
	{
		cin>>x;
		hash[i]=x;
	}
	for(i=1;i<=n;i++)
	{
		curr=i;
		if(hash[curr]!=-1)
		{
			cnt=0;
			while(hash[curr]!=-1)
			{
				curr=hash[curr];
				cnt++;
			}
			if(cnt>max)
				max=cnt;

		}
	}
	if(max==-1)
		cout<<'1'<<endl;
	else
	cout<<max+1<<endl;
	return 0;
}