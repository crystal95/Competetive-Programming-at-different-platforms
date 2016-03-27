using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
#include <queue>
typedef long long int ll;
typedef pair<int,int> ii;
void bfs(vector<vector<int> > &adj,int s,vector<int> &dis,int n)
{
	vector<int>::iterator it;
	vector<int> visited(n+1,-1);
	queue<int> q;
	q.push(s);
	visited[s]=1;
	while(!q.empty())
	{
		int tmp=q.front();
		q.pop();
		for(it=adj[tmp].begin();it!=adj[tmp].end();it++)
		{
			if(visited[*it]==-1)
			{
				visited[*it]=1;
				q.push(*it);
				dis[*it]=dis[tmp]+6;
			}
		}
	}
}
void dikstra(vector<vector<pair<int,int> > > &adj, int start,vector<int> &dis)
{
	int w,u,v,d;
	
	vector<pair<int,int> >::iterator it;
	priority_queue< ii , vector< ii>, greater<ii> > Q;
	Q.push(make_pair(0,start));
	dis[start]=0;
	while(!Q.empty())
	{
		ii x=Q.top();
		Q.pop();
		d=x.first;
		u=x.second;
		if(d<=dis[u])
		{
			for(it=adj[u].begin();it!=adj[u].end();it++)
			{
				w=it->first;
				v=it->second;
				if(dis[u]+w<dis[v])
				{
					dis[v]=dis[u]+w;
					Q.push(make_pair(dis[v],v));
				}
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
		int i,n,m,u,v,s,w;
		cin>>n>>m;
		vector<vector<pair<int,int> > > adj(n+1);
		for(i=0;i<m;i++)
		{
			cin>>u>>v>>w;
			adj[u].push_back(make_pair(w,v));
			adj[v].push_back(make_pair(w,u));
		}
		cin>>s;
		vector<int> dis(n+1,99999);
		dikstra(adj,s,dis);
		for(i=1;i<=n;i++)
		{
			if(i==s)
				continue;
			else
			{
				if(dis[i]==99999)
					cout<<"-1"<<" ";
				else
				cout<<dis[i]<<" ";
			}
		}
		cout<<endl;
	}
	
return 0;
}

	