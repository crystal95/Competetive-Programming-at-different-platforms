#include<iostream>
#include<list>
#include<algorithm>
#include<stdio.h>
#include<vector>
using namespace std;
int *visited;
int *parent;
	bool *array;
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
	adj=new list<int>[ver+1];
}
void graph:: addEdge(int u,int v)
{
	adj[u].push_back(v);
	//adj[v].push_back(u);
}
void graph::dfs(int x)
{
	int i;
	array=new bool[V+1];
	for(i=1;i<=V;i++)
		array[i]=false;
	dfs2(x,array);
}
void graph::dfs2(int v,bool array[])
{
	//cout<<v<<" ";
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
	for(i=1;i<=g.V;i++)
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
	int n,t;
	cin>>n>>t;
	graph g(n);
	vector<int> arr(100008);
	for(i=1;i<n;i++)
		cin>>arr[i];
	for(i=1;i<n;i++)
		g.addEdge(i,i+arr[i]);
	g.dfs(1);
	if(array[t]==true)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}


