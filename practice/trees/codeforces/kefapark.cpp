#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
#include <map>
#include <queue>
using namespace std;
vector<int> leaf(200007,0);
int cnt=0;int m;vector<int> cat(200005,0);
void dfs(vector<vector<int> > &arr, vector<int> &visited, int start,int tillnow,int prev)
{
	if(prev==1)
	{
		if(cat[start]==1)
		tillnow++;
		else
		{
			prev=1;
			tillnow=0;
		}	
	}
	else
	{
		tillnow=0;
		prev=1;
	}	

	if(tillnow>m)
		return ;
	if(leaf[start]==1 && start!=1)
	{
		cnt++;
		//if(start!=1)
		return ;
	}	
	visited[start]=1;
	vector<int>::iterator it;
	for(it=arr[start].begin();it!=arr[start].end();it++)
	{
		if(visited[*it]==0)
		{
			visited[*it]=1;
			//if(prev==0)
			dfs(arr,visited,*it,tillnow,prev);	
			//else
			//dfs(arr,visited,*it,tillnow,1);	

			
		}
	}
	//cout<<start<<" ";
	
}
void bfs(vector<vector<int> > &arr,int start)
{
	vector<int> parent(arr.size(),-1);
	vector<int> visited(arr.size(),0);
	queue<int> q;
	vector<int>::iterator it;
	q.push(start);
	parent[start]=-1;
	visited[start]=1;
	while(!q.empty())
	{
		int curr=q.front();q.pop();
		cout<<curr<<" ";
		for(it=arr[curr].begin();it!=arr[curr].end();it++)
		{
			if(visited[*it]==0)
			{
				visited[*it]=1;
				//cout<<*it<<" ";
				q.push(*it);
			}
			
		}	
	}
	return ;
}
int main()
{
	int i,j,k,u,v,n,x;

	cin>>n>>m;

	vector< vector<int> > arr(n+1);
	vector<int> visited(n+1,0);
	
	

	for(i=1;i<=n;i++)
	{
		cin>>x;
		cat[i]=x;
	}

	
	for(i=1;i<=n-1;i++)
	{
		cin>>u>>v;
		arr[u].push_back(v);
		arr[v].push_back(u);
	}
	for(i=1;i<=n;i++)
	{
		if(arr[i].size()==1)
			leaf[i]=1;
	}

//dfs(arr,visited,1);
	
	
	dfs(arr,visited,1,0,1);


	cout<<cnt<<endl;
	return 0;
}
