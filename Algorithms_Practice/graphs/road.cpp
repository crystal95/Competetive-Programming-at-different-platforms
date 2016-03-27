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
	char str1[100009],str2[100009];
	int i,j,k,n,m,x,flag=0;
	cin>>n>>m;
	graph g(n*m);
	cin>>str1;
	cin>>str2;
	for(i=0;i<n;i++)
	{
		x=str1[i];
		if(x=='>')
		{
			for(j=0;j<m-1;j++)
			{
				g.addEdge(i*m+j,i*m+j+1);
			}
		}
		else
		{
			for(j=m-1;j>0;j--)
			{
				g.addEdge(i*m+j,i*m+j-1);
			}
		}
	}
	for(i=0;i<m;i++)
	{
		x=str2[i];
		if(x=='v')
		{
			for(j=0;j<n-1;j++)
			{
				g.addEdge(j*m+i,j*m+i+m);
			}
		}
		else
		{
			for(j=n-1;j>0;j--)
			{
				g.addEdge(j*m+i,j*m+i-m);
			}
		}
	}
	//print(g);
	for(i=0;i<n*m;i++)
	{
		flag=0;
		g.bfs(i);
		for(j=0;j<n*m;j++)
		{
			if(visited[j]==0)
			{
				flag=1;
				break;
			}

		}
		if(flag==1)
			break;
	}
	if(flag==1)
		cout<<"NO"<<endl;
	else
		cout<<"YES"<<endl;
	return 0;
}


