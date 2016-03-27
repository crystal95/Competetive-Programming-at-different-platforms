#include<iostream>
#include<list>
#include<algorithm>
#include<stdio.h>
using namespace std;
list<int> *adj;
int ver;
int *visited;
int *parent;
void  addEdge(int u,int v)
{
	adj[u].push_back(v);
	//adj[v].push_back(u);
}
void print()
{
	int i;
	list<int>::iterator j;
	for(i=1;i<=ver;i++)
	{
		for(j=adj[i].begin();j!=adj[i].end();j++)
		{
			cout<<*j<<" ";
		}
		cout<<endl;
	}

}

void dfs2(int s,int p , int *array)
{
	cout<<s<<" ";
	parent[s]=p;
	list<int>::iterator i;
	array[s]=1;
	for(i=adj[s].begin();i!=adj[s].end();i++)
	{
		if(array[*i]==0)
			{

				dfs2(*i,s,array);
			}
	}
}
void dfs(int s)
{	
	int *array = new int[ver+1];
	for(int i=0;i<ver+1;i++)
		array[i]=0;
	parent=new int[ver+1];
	
	dfs2(s,-1,array);
}

void bfs(int s)
{
	parent=new int[ver+1];
	visited=new int[ver+1];
	int *dis=new int[ver+1];
	for(int j=1;j<=ver;j++)
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
		int x=queue.front();
	//	cout<<x<<" ";
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
			
	}	
}

int main()
{
	int i,j,k,y,t,x,n,m;
	char ch ;
	char srr[105][105];
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>ch;
			if(ch=='.')
			{
				if(i%2==0)
				{
					if(j%2==0)
					{
						srr[i][j]='B';
					}
					else
					{
						srr[i][j]='W';
					}
				}
				else 
				{
					if(j%2==0)
					{
						srr[i][j]='W';
					}
					else
					{
						srr[i][j]='B';
					}
				}
			}
			else
			{
				srr[i][j]=ch;
			}

		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cout<<srr[i][j];
		}
		cout<<endl;
	}
	return 0;
}


