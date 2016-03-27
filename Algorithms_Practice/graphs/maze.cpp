#include<iostream>
#include<list>
#include<algorithm>
#include<stdio.h>
using namespace std;
int *visited;
int *parent;
int cnt=0;
int ans;
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
	array=new bool[V];
	for(i=0;i<V;i++)
		array[i]=false;
	dfs2(x,array);
}
void graph::dfs2(int v,bool array[])
{
	if(cnt==ans)
		return;
		cnt++;
	//cout<<v<<" ";
	array[v]=true;
	list<int>::iterator i;
	for(i=adj[v].begin();i!=adj[v].end();i++)
	{
		if(array[*i]==false)
			dfs2(*i,array);
	}
}
void print(graph g)
{
	int i,flag;
	list<int>::iterator j;
	for(i=1;i<=g.V;i++)
	{
		flag=0;
		for(j=g.adj[i].begin();j!=g.adj[i].end();j++)
		{
			if(flag==0)
				cout<<i<<"-->"<<" ";
			cout<<*j<<" ";
		}
		cout<<endl;
	}
}


int main()
{
	int count=0,s=0,i,j,k,n,m,flag=0,x,y;
	cin>>n>>m>>k;
	char  str[n+1][m+1];
	graph g(n*m+1);
	int arr[n+1][m+1];
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			cin>>str[i][j];
			count++;
			if(str[i][j]=='.')
				s++;
			if(flag==0 && str[i][j]=='.')
			{
				flag=1;
				x=i;
				y=j;
			}
			arr[i][j]=count;

		}
	}
	ans=s-k;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(str[i][j]=='.')
			{
				if(str[i+1][j]=='.' && i+1<=n)
				{
					g.addEdge((i-1)*m+j,(i+1-1)*m+j);
				}
				if(str[i-1][j]=='.' && i-1>0)
				{
					g.addEdge((i-1)*m+j,(i-1-1)*m+j);
				}
				if(str[i][j+1]=='.' && j+1<=m)
				{
					g.addEdge((i-1)*m+j,(i-1)*m+j+1);
				}

				if(str[i][j-1]=='.' && j-1>0)
				{
					g.addEdge((i-1)*m+j,(i-1)*m+j-1);
				}
			}
		}
	}
	g.dfs((x-1)*m+y);

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(str[i][j]=='#')
				cout<<'#';
			else if(str[i][j]=='.' && array[(i-1)*m+j]==false)
				cout<<'X';
			else
				cout<<'.';
		}
		cout<<endl;

	}
	return 0;
}
