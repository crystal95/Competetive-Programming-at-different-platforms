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
int d=0;

int dfs(vector<vector<int> > &adj, int start, vector<int> &visited)
{
	visited[start]=1;
	int x,cnt=0;
	vector<int>::iterator it;
	for(it=adj[start].begin();it!=adj[start].end();it++)
	{
		if(visited[*it]==0)
		{
			visited[*it]=1;
			x=dfs(adj,*it,visited);
			if(x==0)
				d++;
			else 
			{
				cnt+=x;
			}
		}
	}
	if((cnt+1)%2==0)
		return 0;
	else
		return (cnt+1);

}
int main()
{
		
		int i,n,m,u,v,s,w,start;
		cin>>n>>m;
		vector<int> visited(n+1,0);
		vector<vector<int > > adj(n+1);
	
		for(i=0;i<m;i++)
		{
			cin>>u>>v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		int y=dfs(adj,1,visited);
		cout<<d<<endl;
	return 0;
}

