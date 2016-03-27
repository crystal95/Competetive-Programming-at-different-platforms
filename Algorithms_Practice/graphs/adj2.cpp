


#include<iostream>
#include<list>
#include<algorithm>
#include<stdio.h>
using namespace std;
		int *visited;
		int *parent;
class graph
{
	public:
		int V;
		list<int> *adj;
		graph(int ver);
		void addEdge(int ,int );
		void dfs(int V);
		void dfs2(int ,bool[]);
		void bfs(int V);

};
graph::graph(int ver)
{
	V=ver;
	adj=new list<int>[ver];
}
void graph:: addEdge(int u,int v)
{
	adj[u].push_back(v);
	//adj[v].push_back(u);
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
void graph::bfs(int s)
{
	int x,j;
	visited=new int[V+1];
	parent=new int[V+1];
	int *dis=new int[V+1];
	for(j=0;j<V;j++)
	{
		visited[j]=0;
		dis[j]=99999;
		parent[j]=-1;
	}
	visited[s]=1;
	parent[s]=-1;
	dis[s]=0;
	list<int> queue;
	list<int>::iterator i;
	queue.push_back(s);
		while(!queue.empty())
		{
			x=queue.front();
			queue.pop_front();
			for(i=adj[x].begin();i!=adj[x].end();i++)
			{
				if(visited[*i]==0)
				{
					visited[*i]=1;
					queue.push_back(*i);
					dis[*i]=dis[x]+1;
					parent[*i]=x;
				}
			}
			visited[x]=2;
			//cout<<x;
		}

}
void path(graph g,int s,int v)
{
	if(s==v)
	{
		cout<<s;
		return ;
	}
	else if(parent[v]==-1)
		return ;
	else
		path(g,s,parent[v]);
	cout<<v;
}

void print(graph g)
{
	int i;
	list<int>::iterator j;
	for(i=0;i<g.V;i++)
	{
		for(j=g.adj[i].begin();j!=g.adj[i].end();j++)
		{
			cout<<*j<<" ";
		}
		cout<<endl;
	}
}


int main()
{
	int i,j,k;
	graph g(4);
	g.addEdge(0, 1);
	g.addEdge(0, 2);
	g.addEdge(1, 2);
	g.addEdge(2, 0);
	g.addEdge(2, 3);
	g.addEdge(3, 3);
	print(g);
	cout<<endl;
	g.bfs(2);
	path(g,2,0);
	return 0;
}


