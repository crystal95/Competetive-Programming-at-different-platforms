#include<iostream>
#include<list>
#include<algorithm>
#include<stdio.h>
typedef long long int ll;
using namespace std;
typedef struct node 
{
	int nmbr;
	ll val;
}node;
ll mi=999999;
list<node> *adj;
int ver;
int visited[1005]={0};
int *parent;
int *ref;
void  addEdge(int u,node info)
{
	adj[u].push_back(info);
	//adj[v].push_back(u);
}

void print()
{
	int i;
	list<node>::iterator j;
	for(i=0;i<ver;i++)
	{
		for(j=adj[i].begin();j!=adj[i].end();j++)
		{
			
			cout<<(j)-> nmbr<<" ";
		}
		cout<<endl;
	}

}
//int *array;

int  dfs(int s ,int p)
{
	int ans;
	
	//parent[s]=p;
	list<node>::iterator i;
	visited[s]=1;
	for(i=adj[s].begin();i!=adj[s].end();i++)
	{
		if(visited[i->nmbr]==0)
			{
				if(mi>i->val)
				mi=i->val;
				return dfs(i->nmbr,s);
			}
	}
	
	return s;
}



int main()
{
	int i,j,k,l,n,m,p,a,b,ans,d,maxver=0;
	
	cin>>n>>m>>s;
	/ver=n;
	adj = new list<node>[ver+1];
	for(i=1;i<=m;i++)
	{
		cin>>u>>v>>w;
		node info;
		info.nmbr=b;
		info.val=d;
		addEdge(a,info);
	}
	
	