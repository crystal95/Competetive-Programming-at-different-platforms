
using namespace std;
#include <numeric>
#include <string>
#include <functional>
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <queue> 
#include <list>
#include <algorithm>




#define fr(i,n) for(i=0;i<n;i++)

typedef vector<int> vi;
typedef vector<long long int > vll;
typedef int ll;
typedef vector<unsigned long long int > vull;
typedef unsigned long long int ull;
const long long INF = 12345678987654321LL;

long long int parent[1000000]={-1};
long long int visited[100009]={0};
vector<int> special(100005);
long long int *D;
void di(long long int start, vector<vector< pair<ll,ll > > > &arr,int n)
{
	
	ll  ans=0;
	vector< pair<ll,ll > >::iterator it;
	priority_queue< pair<ll,ll> , vector< pair<ll,ll> >, greater<pair<ll,ll> > > Q;

	D[start]=0;
	Q.push(make_pair(0,start));
	while(!Q.empty())
	{
		pair<ll,ll >top = Q.top();
		Q.pop();
	 	ll v=top.second;
		ll d= top.first;
		if(d<=D[v])
		{
			for(it=arr[v].begin();it!=arr[v].end();it++)
			{

				 ll v2 = it->second;
				 ll cost=it->first;
				visited[v2]=1;
				if(D[v]+cost<D[v2])
				{
					visited[v2]=1;
					D[v2]=D[v]+cost;
					parent[v2]=v;
					Q.push(make_pair(D[v2],v2));
				}
			}

		}
		
	}

}
void print(vector<vector<pair<ll,ll> > > &arr , int n)
{
	vector<pair<ll,ll> > ::iterator it;
	for(ll i=1;i<=n;i++)
	{ 
		for(it=arr[i].begin();it!=arr[i].end();it++)
			cout<<it->second<<" ";
		cout<<endl;

	}
}


int main()
{
	int  i,j,k,l,n,m,u,v,w,x,s;
	long long int ans;
	D = new long long int[n+2]; 
	
	scanf("%d%d",&n,&m);
	D = new long long int[n+2]; 
	vector<vector<pair<ll,ll> > > arr(n+1);
	for(i=0;i<=n;i++)
		special[i]=0;
	
	for(i=1;i<=m;i++)
	{
		scanf("%d%d%d",&u,&v,&w);
		arr[u].push_back(make_pair(w,v));
		arr[v].push_back(make_pair(w,u));
	}
	
	scanf("%d",&s);
	for(i=1;i<=s;i++)
	{
		cin>>x;
		special[x]=1;

	}
	for( i=1;i<=n;i++)
		D[i] = INF;
	for(i=1;i<=n;i++)
	{
		if(special[i]==1)
		{
			di(i,arr,n);
		}
	}

	for(i=1;i<=n;i++)
	{
		
		cout<<D[i]<<endl;
	}
	return 0;
}
