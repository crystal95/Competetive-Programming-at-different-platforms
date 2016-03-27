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
int *D;
int ver,edges;
void di(int start, vector<vector<ii> > &arr)
{
	vii::iterator it;
priority_queue< ii , vector< ii>, greater<ii> > Q;
	D[start]=0;
	Q.push(ii(0,start));
	while(!Q.empty())
	{
		ii top = Q.top();
		Q.pop();
		int v=top.second;
		int d= top.first;
		if(d<=D[v])////////////////////////////////////////////////////////////this to avoid the repetition .......... ////verrrrrry veryyyy importatn step
		{
			for(it=arr[v].begin();it!=arr[v].end();it++)
			{
				int v2 = it->first, cost=it->second;
				if(D[v]+cost<D[v2])
				{
					D[v2]=D[v]+cost;
					Q.push(ii(D[v2],v2));
				}
			}

		}
	}
}
void printgraph(vector< vector <ii> > &arr)
{
	vii::iterator it;
	for(int i=0;i<ver;i++)
	{
		for(it=arr[i].begin();it!=arr[i].end();it++)
		{
			cout<<i<<" "<<it->first<<" "<<it->second<<endl;
		}
	}
}
int main()
{

	int i,j,k,l,m,n,u,v,w,start;
	cin>>ver>>edges;
	vvii arr(ver);
	D = new int[ver*ver]; cout<<endl;
	//vii arr[ver];
	for(i=0;i<edges;i++)
	{
		cin>>u>>v>>w;
		arr[u].push_back(ii(w,v));
		arr[v].push_back(ii(w,u));
		D[i] = 99999;
	}
	

	printgraph( arr);
	cin>>start;
	di(start,arr);
	
	for(i=0;i<ver;i++)
		cout<<D[i]<<" ";
	cout<<endl;


	return 0;
}

