#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<stdlib.h>
#include<list>
#include<vector>
#include<queue>
using namespace std;
vector<int> color;
vector<int> parent;
vector<int> visited;
class graph
{	public:
	int ver;
	list<int> *adj;
	graph(int );
	void add_edge(int,int);
	int bfs(int);

};
void graph::add_edge(int src,int des)
{
	adj[src].push_back(des);
}
graph::graph(int V)
{
	ver=V;
	adj=new list<int>[ver];
}
int graph::bfs(int s)
{
	int flag=0;
	int i;
	int tmp=0;
	color.resize(ver+2);parent.resize(ver+2);visited.resize(ver+2);
	queue<int> q;
	for(i=0;i<ver;i++)
	{
		color[i]=-1;
		visited[i]=0;
		parent[i]=-1;
	}
	list<int>:: iterator j;
	q.push(s);
	while(!q.empty())
	{
		tmp=q.front();
		cout<<tmp<<" ";
		q.pop();
		for(j=adj[tmp].begin();j!=adj[tmp].end();j++)
		{
			if(visited[*j]==0)
			{

				q.push(*j);
				parent[*j]=tmp;
				visited[*j]=1;
				color[*j]=1-color[tmp];
			}
			else if(color[*j]==color[tmp])
			{
				flag=1;
				break;
			}
		}
		visited[tmp]=1;
		if(flag==1)
			break;
		visited[tmp]=1;
	}
	if(flag==1)
		return 0;
	else return 1;
}
int main()
{
	int i,j,l;
	int n,m,k,p,q,r,s,flag=0,ind,count=0;
	cin>>n>>m>>k;
	char arr[n][m];
	// str[n+1][m+1];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>arr[i][j];
			if(arr[i][j]=='.')
			{
				count++;
				if(flag==0)
				{
					ind=i*m+j;
					flag=1;
				}
			}
		}
	}
	graph g(n*m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(arr[i][j]=='.')
			{
				if(i-1>=0)
				{
					if(arr[i-1][j]=='.')
						g.add_edge(i*m+j,(i-1)*m+j);
				}
				if(i+1<m)
				{
					if(arr[i+1][j]=='.')
						g.add_edge(i*m+j,(i+1)*m+j);
				}
				if(j+1<m)
				{
					if(arr[i][j+1]=='.')
						g.add_edge(i*m+j,(i)*m+j+1);
				}
				if(j-1>=0)
				{
					if(arr[i][j-1]=='.')
						g.add_edge(i*m+j,(i)*m+j-1);
				}
			}
		}
	}
	dfs()
	return 0;
}

