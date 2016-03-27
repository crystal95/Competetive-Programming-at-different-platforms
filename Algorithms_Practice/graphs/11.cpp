#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<stdlib.h>
#include<list>
#include<vector>
#include<queue>
using namespace std;
vector<int> dis;
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
	adj[des].push_back(src);
}
graph::graph(int V)
{
	ver=V;
	adj=new list<int>[ver];
}
void graph::bfs(int s)
{
	int i;
	int tmp=0;
	dis.resize(ver+2);parent.resize(ver+2);visited.resize(ver+2);
	//fill(dis.begin(),dis.end(),0);fill(parent.begin(),parent.end(),-1);fill(dis.begin(),visited.end(),0);
	queue<int> q;
	for(i=0;i<ver;i++)
	{
		dis[i]=0;
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
				dis[*j]=dis[tmp]+1;
				parent[*j]=tmp;
				visited[*j]=1;
			}
		}
		visited[tmp]=1;
	}
	cout<<endl;
}

void find_path(graph g,int src,int des)
{
	if(src==des)
	{
		cout<<src<<" ";
		return;
	}
	else
		find_path(g,src,parent[des]);
	cout<<des<<" ";
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
void graph::dfs(int x)
{
	int i;
	bool *array;
	array=new bool[V];
	for(i=0;i<V;i++)
		array[i]=false;
	dfs2(x,array);
}
void graph::dfs2(int v,bool array[])
{
	cout<<v<<" ";
	array[v]=true;
	list<int>::iterator i;
	for(i=adj[v].begin();i!=adj[v].end();i++)
	{
		if(array[*i]==false)
			dfs2(*i,array);
	}
}

int main()
{
	int i,j,k,l;
	int n;
	cin>>n;
	graph g(n);

	g.add_edge(0,3);
	g.add_edge(0,1);
	g.add_edge(0,2);
	g.add_edge(1,2);
	g.add_edge(3,2);
	g.add_edge(3,4);
	print(g);
	g.bfs(0);

	find_path(g,0,2);
	return 0;
}
