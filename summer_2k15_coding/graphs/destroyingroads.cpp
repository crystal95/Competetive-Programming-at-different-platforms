using namespace std; 
#include <iostream>
#include <list>
#include <algorithm>
#include <stdio.h>
#include <vector> 
#include <queue> 

typedef pair<int ,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vii> vvii;
int *dis;
int *parent;
int *visited;
int *dis1;
int *dis2;

int ver,edges;


int bfs(int s,int *dis,vector< vector <ii> > &arr,int t)
{
	int flag=0;
	parent=new int[ver+1];
	visited=new int[ver+1];
	int count=0;
	
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
	vector<pair<int,int> >::iterator i,j;
	queue.push_back(s);
	while(!queue.empty())
	{
		
		int x=queue.front();
		//cout<<x<<" ";
		queue.pop_front();
		for(i=arr[x].begin();i!=arr[x].end();i++)
			{
				if(visited[i->second]==0)
				{
					count++;
					visited[i->second]=1;
					queue.push_back(i->second);
					dis[i->second]=dis[x]+1;
					parent[i->second]=x;
					if(i->first==0 && flag==0)
					{
							if(i->second==t)
								flag=1; 

							i->first=-1;
							for(j=arr[i->second].begin();j!=arr[i->second].end();j++)
							{
								if(j->second==x)
								{

									j->first=-1;
								}

							}
					}


				}
			}
			visited[x]=2;
			
	}	
	return count;
}



void printgraph(vector< vector <ii> > &arr)
{
	vii::iterator it;
	for(int i=0;i<=ver;i++)
	{
		for(it=arr[i].begin();it!=arr[i].end();it++)
		{
			cout<<i<<" "<<it->first<<" "<<it->second<<endl;
		}
	}
}
int main()
{

	int i,j,k,l,m,n,u,v,w,start,s1,s2,l1,l2,t1,t2,count=0;
	int *dis1;
	int *dis2;
	dis1=new int[ver+1];
	dis2=new int[ver+1];
	cin>>ver>>edges;
	vvii arr(ver+1);
	for(i=0;i<edges;i++)
	{
		cin>>u>>v;
		arr[u].push_back(ii(0,v));
		arr[v].push_back(ii(0,u));
	}
	
	cin>>s1>>t1>>l1;
	
	int ans1=bfs(s1,dis1,arr,t1);
	//printgraph( arr);
	cin>>s2>>t2>>l2;
	int ans2=bfs(s2,dis2,arr,t2);
	//printgraph( arr);
	vii::iterator it;
	/*for(i=1;i<=ver;i++)
		cout<<dis1[i]<<" ";
	cout<<endl;
	for(i=1;i<=ver;i++)
		cout<<dis2[i]<<" ";
	cout<<endl;*/
	for( i=1;i<=ver;i++)
	{
		for(it=arr[i].begin();it!=arr[i].end();it++)
		{
			if(it->first==-1)
				count++;
		}
	}
	count=count/2;
	//cout<<count<<endl;
	if(dis1[t1]>l1 || dis2[t2]>l2)
		cout<<"-1"<<endl;
	else
	cout<<dis1[t1]+dis2[t2]-count<<endl;
	return 0;
}

