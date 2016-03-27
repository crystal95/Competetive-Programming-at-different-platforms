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
long long int flag1[1000005]={0};
long long int dist[1000005]={0};
long long int max(long long int a ,long long int b)
{
	if(a>b)
		return a;
	else 
		return b;
}

long long int danish=0;
vii rel;
vii info;
//const unsigned long long INF=1000*1000*1000*1;
const long long INF = 12345678987654321LL;
void di(long long int start, vector<vector<ii> > &arr)
{
	queue<int> rex;
	vii::iterator it;
priority_queue< ii , vector< ii>, greater<ii> > Q;
	D[start]=0;
	parent[start]=-1;
	//visited[start]=1;
	
	Q.push(ii(0,start));
	rex.push(-1);
	while(!Q.empty())
	{

		ii top = Q.top();
		Q.pop();
		int t= rex.front();
		rex.pop();
		long long int v=top.second;
		long long int d= top.first;
		if(d<=D[v] && ((D[v]-D[(max(t,0))]) <= dist[v]) && visited[v]==0)////////////////////////////////////////////////////////////this to avoid the repetition .......... ////verrrrrry veryyyy importatn step
		{
			visited[v]=1;
			danish+=(D[v]-D[(max(t,0))]);
			if(parent[v]!=-1)
			rel.push_back(ii(t,v));
			for(it=arr[v].begin();it!=arr[v].end();it++)
			{

				long long int v2 = it->second;
				long long int cost=it->first;
				//visited[v2]=1;
				if(D[v]+cost<=D[v2])
				{
				
					//flag2[v2]++;
					//visited[v2]=1;
					D[v2]=D[v]+cost;
					parent[v2]=v;
					Q.push(ii(D[v2],v2));
					rex.push(v);

						if((D[v2]-D[(max(parent[v2],0))])<dist[v2])
							dist[v2]=(D[v2]-D[(max(parent[v2],0))]);
					
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
		info.push_back(ii(u,v));
		arr[u].push_back(ii(w,v));
		arr[v].push_back(ii(w,u));
		
		
	}
	cin>>start;

	for(i=1;i<=ver;i++)
	{
		D[i] = INF;
		flag1[i]=1;
		dist[i]=INF;

	}	
	D[0]=0;
	

	di(start,arr);
	
	
	vii::iterator it;
	cout<<danish<<endl;

	for(it=rel.begin();it!=rel.end();it++)
	{
		for(i=0;i<info.size();i++)
		{
			if((info[i].first==it->first && info[i].second==it->second)|| (info[i].first==it->second && info[i].second==it->first))
			{
				ans.push_back(i);
				break;
			}

		}

	}
	vector<long long int>::iterator it3;
	sort(ans.begin(),ans.end());

	for(it3=ans.begin();it3!=ans.end();it3++)
	cout<<(*it3+1)<<" ";
	cout<<endl;


	

	return 0;
}