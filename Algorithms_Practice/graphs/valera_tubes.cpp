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
	void dfs(int,int);
	void dfs2(int ,bool *,int);


};
void graph::add_edge(int src,int des)
{
	adj[src].push_back(des);
//	adj[des].push_back(src);
}
graph::graph(int V)
{
	ver=V;
	adj=new list<int>[ver];
}
bool *array;
void graph::dfs(int x,int cmp) 
{
	int i;
	array=new bool[ver+1];
	for(i=0;i<ver;i++)
		array[i]=false;
	dfs2(x,array,cmp);
}
int cnt=0;
void graph::dfs2(int v,bool array[],int cmp)
{
	if(cnt<cmp)
	{
		//cout<<v<< " ";
		cnt++;
		array[v]=true;

	}
	if(cnt==cmp)
		return ;
	list<int>::iterator i;
	for(i=adj[v].begin();i!=adj[v].end();i++)
	{
		if(array[*i]==false)
			dfs2(*i,array,cmp);
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
	cin>>n>>m>>k;
	char arr[n][m];
	// str[n+1][m+1];
	graph g(n*m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(i-1>=0)
			{
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
	g.dfs(ind,);
	return 0;
}

