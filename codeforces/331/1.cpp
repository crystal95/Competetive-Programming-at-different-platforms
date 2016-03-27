using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
#include <queue>
#include <math.h> 
int main()
{
	int i,j,k,l,m,n,ans=0,flag=0;
	cin>>n;
	int x[4],y[4];
	for(i=0;i<n;i++)
	{
		cin>>x[i]>>y[i];
	}
	if(n==1)
		cout<<"-1"<<endl;
	if(n==2)
	{
				if(x[1]-x[0]!=0 && y[1]-y[0]!=0)
				{
					ans=abs((x[1]-x[0])*(y[1]-y[0]));
					cout<<ans<<endl;
				}
				else
				{
					cout<<"-1"<<endl;
				}
	}
	if(n>=3)
	{
		for(i=0;i<n;i++)
		{
			for(j=i;j<n;j++)
			{
				if((x[i]-x[j])!=0 && (y[i]-y[j])!=0)
				{
					ans=abs((x[i]-x[j])*(y[i]-y[j]));
					flag=1;
					break;
				}

			}
			if(flag==1)
				break;
		}
		cout<<ans<<endl;
	}
	return 0;
}