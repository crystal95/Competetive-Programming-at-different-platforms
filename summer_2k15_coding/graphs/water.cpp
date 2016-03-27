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
	
	cin>>n>>p;
	ver=n;

	adj = new list<node>[ver+1];
	ref = new int[ver+1] ;
	for(i=0;i<ver+1;i++)
		ref[i]=0;

	for(i=1;i<=p;i++)
	{
		
		cin>>a>>b>>d;
		if(maxver<a)
		{
			maxver=a;

		}
		if(maxver<b)
			maxver=b;
		ref[b]=1;
		node info;
		info.nmbr=b;
		info.val=d;
		addEdge(a,info);

	}
	
	if(p==0)
		cout<<'0'<<endl;
	else 
	{
	int count=0;
	for(i=1;i<=maxver;i++)
		{
			if(ref[i]==0)
			count++;
		}
		cout<<count<<endl;
	for(i=1;i<=maxver;i++)
	{
		if(visited[i]==0 && ref[i]==0)
		{
			ans=dfs(i,-1);
			cout<<i<<" "<<ans<<" "<<mi<<endl;
		}
		mi=999999;
	}
}

return 0;
	
}


