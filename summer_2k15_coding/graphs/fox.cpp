#include<iostream>
#include<list>
#include<algorithm>
#include<stdio.h>
using namespace std;
list<int> *adj;
int ver;
int *visited;
int *parent;
char *ref;
char tt;
void  addEdge(int u,int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}
void print()
{
	int i;
	list<int>::iterator j;
	for(i=0;i<ver;i++)
	{
		for(j=adj[i].begin();j!=adj[i].end();j++)
		{
			cout<<*j<<" ";
		}
		cout<<endl;
	}

}
int *array;

int  dfs(int s ,int p)
{
	int ans;
	//cout<<s<<" ";
	//parent[s]=p;
	list<int>::iterator i;
	array[s]=1;
	for(i=adj[s].begin();i!=adj[s].end();i++)
	{
		if(ref[*i]==tt)
			{
				if(array[*i]==0 )
				 ans= dfs(*i,s);
				else if ((array[*i]==1 && *i!=p))
				{
					return -1;
				}
			
				 
			}
			if(ans==-1)
				break;
	}
	return ans;
}



int main()
{
	int i,j,k,y,t,x,n,m,flag=0;
	char ch ;
	char str[55][55];
	int arr[55][55];
	cin>>n>>m;
	ver=n*m;
	adj = new list<int>[ver+1];
	ref = new char[ver+1];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>str[i][j];
			arr[i][j]=i*m+j;
			ref[i*m+j]=str[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			//cout<<arr[i][j];
			if(i+1<n)
			addEdge(arr[i][j],arr[i+1][j]);
			if(j+1<m)
			addEdge(arr[i][j],arr[i][j+1]);
			
		}
		//cout<<endl;
	}
int ans;
array = new int[ver+1];
for(int i=0;i<ver+1;i++)
		array[i]=0;
	//print();
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			tt=str[i][j];
			if(array[i*m+j]==0)
			ans=dfs(i*m+j,-1);
			if(ans==-1)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
			break;
	}

	if(flag==1)
		cout<<"Yes"<<endl;
	else 
		cout<<"No"<<endl;
	return 0;
}


