using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
#include <queue>
#include <algorithm>


typedef long long int ll;
typedef pair<int,int> ii;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{	

		int i,n,m,u,v,s,w,start;
		cin>>n;
		vector<int> parent(n+1,0);
		vector<int> arr(n+1,0);
		vector<vector<int> > arr(n+1,vector<int>(n+1,0));
		for(i=1;i<=n;i++)
		{
			cin>>x>>y;
			
			if(y==0)
				root=x;
			arr[i]=x;
			parent[x][0]=y;
		}

		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n-1;j++)
			{
				par[arr[i]][j]=par[par[arr[i]][j-1]][j-1];
			}
		}
		cin>>q;
		while(q--)
		{
			cin>>x;
			if(x==1)
			{
				cin>>oldnode>>newnode;
				for(j=1;j<=n-1;j++)
				{
					parent[newnode][j]=par[par[newnode][j-1]][j-1];
				}
			}
			if(x==2)
			{
				cin>>child>>k;
				int ht=(log(n)/log(2))+1;
				for(i=0;i<ht;i++)
				{
					if(1<<i&k)
					{
						child=parent[child][pow(2,i)];
					}
				}
			}
		}


