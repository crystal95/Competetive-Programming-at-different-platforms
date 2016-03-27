using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
int main()
{
	int i,j,k,l,m,n,mine=10000005,x,y,flag=0;
	cin>>n>>m;
	vector<vector<int > > arr(n+1);

	for(i=0;i<m;i++)
	{
		cin>>x>>y;
		arr[x].push_back(y);
		arr[y].push_back(x);
	}
	int sz[n+4];
	for(i=1;i<=n;i++)
	{
		sz[i]=arr[i].size();
	}
	for(i=1;i<=n;i++)
	{
		if(sz[i]>=3)
		{
			for(j=1;j<sz[i];j++)
			{
				for(k=j+1;k<sz[i];k++)
				{
					if(find(arr[arr[i][j]].begin(), arr[arr[i][j]].end(), arr[i][k])!=arr[j].end() &&  find(arr[arr[i][k]].begin(), arr[arr[i][k]].end(), arr[i][j])!=arr[k].end())
					{
						flag=1;
						if(mine>sz[i]+sz[arr[i][j]]+sz[arr[i][k]]-6)
						{
							mine=sz[i]+sz[arr[i][j]]+sz[arr[i][k]]-6;
						}
				}
				}
			}
		}
	}

if(flag==1)
cout<<mine<<endl;
else
cout<<"-1"<<endl;
return 0;
}