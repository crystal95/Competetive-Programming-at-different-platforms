using namespace std; 
#include <iostream>
#include <list>
#include <algorithm>
#include <stdio.h>
#include <vector> 
#include <queue> 

typedef pair<int ,int> ii;
typedef vector<long long int > vi;
typedef vector<ii> vii;
typedef vector<vii> vvii;
void dfs(vector<vector< pair<int,int> > > &adj,int curr,vector<int> &visited)
{
	cout<<curr<<" ";
	visited[curr]=1;
	vector< pair<int,int> >::iterator it;
	for(it=adj[curr].begin();it!=adj[curr].end();it++)
	{
		if(visited[it->first]==-1)
		{
			dfs(adj,it->first,visited);
		}
	}

}
void bfs(vector<vector< pair<int,int> > > &adj,int curr,vector<int> &visited)
{
	vector< pair<int,int> >::iterator it;
	queue<int> myqueue;
	visited[curr]=1;
	myqueue.push(curr);
	while(!myqueue.empty())
	{

		int tmp=myqueue.front();
		
		cout<<tmp<<" ";
		myqueue.pop();
		for(it=adj[tmp].begin();it!=adj[tmp].end();it++)
		{
			if(!visited[it->first])
			{
				visited[it->first]=1;
				myqueue.push(it->first);
			}
		}

	}
}
	vector< pair<int,int> >::iterator it;void print_graph(vector< vector< pair<int,int> > > &adj)
{
	
	int ver=adj.size()-1;
	int i;
	cout<<ver;
	vector< pair<int,int> >::iterator it;

	for(i=1;i<=ver;i++)
	{
		cout<<i<<" ";
		for(it=(adj[i]).begin();it!=(adj[i]).end();it++)
		{
			cout<<it->first<<" "<<it->second<<"   ";
		}
		cout<<endl;
	}
}

int main()
{
	int i,j,k,n,m,edges,u,v,ver,w;
	cin>>edges>>ver;
	vector<vector< pair<int,int> > > adj(ver+1);
	vector<int> visited(ver+1,0);
	for(i=0;i<edges;i++)
	{
		cin>>u>>v>>w;
		adj[u].push_back(make_pair(v,w));
		adj[v].push_back(make_pair(u,w));
	}
	bfs(adj,1,visited);
	//dfs(adj,1,visited);
	//print_graph(adj);
	return 0;
}