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
	void bfs(int);

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
void graph::bfs(int s)
{
	int flag=0;
	int i;
	int tmp=0;
	queue<int> q;
	list<int>:: iterator j;
	q.push(s);
	while(!q.empty())
	{
		tmp=q.front();
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
		}
		visited[tmp]=1;
	}
}
void print(graph g)
{
	int i;
	list<int>:: iterator j;
	for(i=0;i<g.ver;i++)
	{
		for(j=g.adj[i].begin();j!=g.adj[i].end();j++)
		{
			cout<<*j<<" ";
		}
		cout<<endl;
	}
	return;
}

int main()
{
	int i,j,l;
	int n,m,k,p,q,r,s,flag=0,ind,count=0;
	cin>>n>>m;
	char arr[n][m];
	// str[n+1][m+1];
	int ver=m*n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>arr[i][j];
			if(arr[i][j]=='.')
			{
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
	color.resize(ver+2);parent.resize(ver+2);visited.resize(ver+2);
	for(i=0;i<n*m;i++)
	{
		color[i]=0;
		visited[i]=0;
		parent[i]=-1;
	}
//	print(g);
	g.bfs(ind);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(visited[i*m+j]==0 && ind!=i*m+j)
				g.bfs(i*m+j);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(arr[i][j]=='-')
			{
				cout<<'-';
			}
			else
			{	if(color[i*m+j]==0)
				cout<<'B';
				else if(color[i*m+j]==1)
					cout<<'W';
			}
		}
		cout<<endl;
	}


	return 0;
}

