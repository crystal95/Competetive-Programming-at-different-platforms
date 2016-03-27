using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
#include <queue>
#include <algorithm>
#include <unordered_set>


typedef long long int ll;
typedef pair<int,int> ii;
void bfs(vector<vector<int> > &adj,int s,vector<int> &dis,int n)
{
		int i ;

	unordered_set<int> unvisited;
	for(i=1;i<=n;i++)
	unvisited.insert(i);
	queue<int> q;
	q.push(s);
	unvisited.erase(s);
	while(!q.empty())
	{
		int tmp=q.front();
		q.pop();
		for(auto it=unvisited.begin();it!=unvisited.end();++it)
		{
			if(find(adj[tmp].begin(),adj[tmp].end(),*it)==adj[tmp].end())
			{
				
					q.push(*it);
					dis[*it]=dis[tmp]+1;
					unvisited.erase(*it);
			}
		}
		
	}
}

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int i,n,m,u,v,s,w,start;
		cin>>n>>m;
		vector<vector<int > > adj(n+1);
		vector<int> dis(n+1,0);
		for(i=0;i<m;i++)
		{
			cin>>u>>v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		cin>>start;
		bfs(adj,start,dis,n);
		for(i=1;i<=n;i++)
		{
			if(start!=i)
				cout<<dis[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

