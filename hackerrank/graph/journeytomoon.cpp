using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
#include <queue>
typedef long long int ll;
typedef pair<int,int> ii;


ll dfs(vector<vector<ll> > &adj, ll start,vector<ll> &visited)
{
	ll cnt=0;
	vector<ll>::iterator it;
	visited[start]=1;
	for(it=adj[start].begin();it!=adj[start].end();it++)
	{
			if(visited[*it]==0)
			{

				
				visited[*it]=1;
				cnt+=dfs(adj,*it,visited);
			}
	}
	//cout<<start<<" ";
	return cnt+1;
}
ll choose(ll n)
{
	ll ans=n*(n-1);
	ans=ans/2;
	return ans;
}
int main()
{
	
		ll i,n,m,u,v,s,w,cnt=0,x,j;
		cin>>n>>m;
		vector<vector<ll> > adj(n);
		for(i=0;i<m;i++)
		{
			cin>>u>>v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		vector<ll> visited(n,0);
		vector<ll> tmp;
		for(i=0;i<=n-1;i++)
		{
			if(!visited[i])
			{
				cnt++;
				x=dfs(adj,i,visited);
			//	cout<<x<<" ";
				tmp.push_back(x);
			}
		}
		//cout<<cnt<<endl;
		ll ans=choose(n);
		
		for(j=0;j<cnt;j++)
		{
		//	cout<<choose(j)<<" ";
			ans=ans-choose(tmp[j]);
		}
		cout<<ans<<endl;
		return 0;
}		

	