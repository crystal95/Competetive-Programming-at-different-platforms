using namespace std; 
#include <iostream>
#include <list>
#include <algorithm>
#include <stdio.h>
#include <vector> 
#include <queue> 

typedef pair<long long int ,long long int> ii;
typedef vector<long long int > vi;
typedef vector<ii> vii;
typedef vector<vii> vvii;
long long int *D;
long long int ver,edges;
long long int parent[1000000]={-1};
long long int visited[100009]={0};
//const unsigned long long INF=1000*1000*1000*1;
const long long INF = 12345678987654321LL;
void di(long long int start, vector<vector<ii> > &arr)
{
	vii::iterator it;
priority_queue< ii , vector< ii>, greater<ii> > Q;
	D[start]=0;
	parent[start]=-1;
	visited[start]=1;
	Q.push(ii(0,start));
	while(!Q.empty())
	{
		ii top = Q.top();
		Q.pop();
		long long int v=top.second;
		long long int d= top.first;
		if(d<=D[v])////////////////////////////////////////////////////////////this to avoid the repetition .......... ////verrrrrry veryyyy importatn step
		{
			for(it=arr[v].begin();it!=arr[v].end();it++)
			{

				long long int v2 = it->second;
				long long int cost=it->first;
				visited[v2]=1;
				if(D[v]+cost<D[v2])
				{
					visited[v2]=1;
					D[v2]=D[v]+cost;
					parent[v2]=v;
					Q.push(ii(D[v2],v2));
				}
			}

		}
	}
}
void printgraph(vector< vector <ii> > &arr)
{
	vii::iterator it;
	for(long long int i=1;i<=ver;i++)
	{
		for(it=arr[i].begin();it!=arr[i].end();it++)
		{
			cout<<i<<" "<<it->second<<" "<<it->first<<endl;
		}
	}
}
int main()
{

	long long int i,j,k,l,m,n,u,v,w,start,x;
	cin>>ver>>edges;
	vvii arr(ver+2);
	vi ans;
	D = new long long int[ver+2]; 
	//vii arr[ver];
	for(i=1;i<=edges;i++)
	{
		cin>>u>>v>>w;
		arr[u].push_back(ii(w,v));
		arr[v].push_back(ii(w,u));
		
		
	}

	for(i=1;i<=ver;i++)
		D[i] = INF;
	
//cout<<endl;
	//printgraph( arr);
	di(1,arr);
	
	if(D[ver]==INF)
		cout<<"-1"<<endl;
	else
	{
		x=ver;
		
	while(parent[x]!=-1)
	{
		ans.push_back(x);
		//cout<<x<<" ";
		x=parent[x];
		
	}
	ans.push_back(x);
	vector<long long int>::reverse_iterator it;
	for(it=ans.rbegin();it!=ans.rend();it++)
	{
		cout<<*it<<" ";

	}

		cout<<endl;
	
	}
	

	return 0;
}