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
void dikstra(vector<vector<pair<ll,ll> > > &adj, ll start,vector<ll> &dis,ll n)
{
	ll w,u,v,d;
	vector<ll> visited(n+1,0);
	vector<pair<ll,ll> >::iterator it;
	priority_queue< ii , vector< ii>, greater<ii> > Q;
	Q.push(make_pair(0,start));
	dis[start]=0;
	visited[start]=1;
	while(!Q.empty())
	{
		ii x=Q.top();
		Q.pop();
		d=x.first;
		u=x.second;
		visited[u]=1;
		if(d<=dis[u])
		{
					

			for(it=adj[u].begin();it!=adj[u].end();it++)
			{
				w=it->first;
				v=it->second;
				ll y=w-dis[u];
				y=max(y,0ll);
				if(dis[u]+y<dis[v] && visited[v]==0)
				{
					dis[v]=dis[u]+y;
					Q.push(make_pair(dis[v],v));
				}
			}
		}
	}
}
int main()
{
		ll i,n,m,u,v,s,w;
		cin>>n>>m;
		vector<vector<pair<ll,ll> > > adj(n+1);
		for(i=0;i<m;i++)
		{
			cin>>u>>v>>w;
			adj[u].push_back(make_pair(w,v));
			adj[v].push_back(make_pair(w,u));
		}
		
		vector<ll> dis(n+1,99999999);
		dikstra(adj,1,dis,n);
		if(dis[n]==-1)
			cout<<"NO PATH EXISTS"<<endl;
		else
		cout<<dis[n]<<endl;
	
return 0;
}

	