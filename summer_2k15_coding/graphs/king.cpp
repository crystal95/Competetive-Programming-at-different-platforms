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
int *visited;
int *parent;
void bfs(int s,vector<vector<ii> > &adj)
{
	parent=new int[ver+1];
	visited=new int[ver+1];
	int *dis=new int[ver+1];
	for(int j=0;j<ver;j++)
	{
		visited[j]=0;
		dis[j]=99999;
		parent[j]=-1;
	}
	vii::iterator it;
	visited[s]=1;
	parent[s]=-1;
	dis[s]=0;
	list<int> queue;

	queue.push_back(s);
	while(!queue.empty())
	{
		int x=queue.front();
		//cout<<x<<" ";
		queue.pop_front();
		for(it=adj[x].begin();it!=adj[x].end();it++)
			{
				if(visited[it->second]==0)
				{
					visited[it->second]=1;
					queue.push_back(it->second);
					dis[it->second]=dis[x]+1;
					parent[it->second]=x;
				}
			}
			visited[x]=1;
			
	}	
}


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

	ver= 64;
	char ch1,ch2;
	int first,second;
	int a1,b1,a2,b2;
	int i,j,k,l,m,n,u,v,w,start;
	
	vector<string> str;
	D = new int[ver]; 
	
	cin>>ch1>>b1;
	cin>>ch2>>b2;
	b1--;b2--;
	a1=int (ch1-97);a2=int (ch2-97);
	swap(a1,b1);
	swap(a2,b2);
	
	ver= 65;
	vvii arr(ver);
	vvii tmp(ver);
	

	for(i=0;i<8;i++)
	{
		for(j=0;j<8;j++)
		{
			tmp[i*8+j].push_back(ii(i,j));
			
		}
	}
	//for(i=0;i<64;i++)
	//	cout<<tmp[i][0].first<<" "<<tmp[i][0].second<<endl;
	for(i=0;i<8;i++)
	{
		for(j=0;j<8;j++)
		{
			if(i+1<8)
			{
				arr[i*8+j].push_back(ii(1,(i+1)*8+j));
				arr[(i+1)*8+j].push_back(ii(1,(i*8+j)));
			}
			if(j+1<8)
			{
				arr[i*8+j].push_back(ii(1,i*8+j+1));
				arr[i*8+j+1].push_back(ii(1,i*8+j));
			}			
			if(i+1<8 && j+1<8)
			{
				arr[i*8+j].push_back(ii(1,(i+1)*8+j+1));
				arr[(i+1)*8+j+1].push_back(ii(1,(i)*8+j));
			}
			if(j-1>=0 && i+1<8)
			{
				arr[i*8+j].push_back(ii(1,(i+1)*8+j-1));
				arr[(i+1)*8+j-1].push_back(ii(1,(i)*8+j));

			}
		}
	}

	bfs(a1*8+b1,arr);
	//cout<<endl;
	int x=a2*8+b2;
	int count=0;
		
	x=a2*8+b2;
	while(parent[x]!=-1)
	{
		//cout<<parent[x]<<endl;
		int x1=tmp[x][0].first;
		int y1=tmp[x][0].second;
		int x2=tmp[parent[x]][0].first;
		int y2=tmp[parent[x]][0].second;
		if(x2>x1)
		{
			if(y1>y2)
			{
				str.push_back("RD");
				//cout<<"RD"<<endl;

			}
			if(y1==y2)
			{str.push_back("D");
				//cout<<"D"<<endl;
				
			}
			if(y1<y2)
			{str.push_back("LD");
				//cout<<"LD"<<endl;
				
			}
		}
		else if(x1>x2)
		{	
			if(y1>y2)
				{str.push_back("RU");
					//cout<<"RU"<<endl;

				}
				if(y1==y2)
				{str.push_back("U");
					//cout<<"U"<<endl;
					
				}
				if(y1<y2)
				{str.push_back("LU");
					//cout<<"LU"<<endl;
					
				}
		}
		else 
		{
			if(y1<y2) str.push_back("L");
				//cout<<"L"<<endl;
			else str.push_back("R");
				//cout<<"R"<<endl;
		}
		x=parent[x];
		count++;
	}
	cout<<count<<endl;
	for(i=count-1;i>=0;i--)
	{
		cout<<str[i]<<endl;
	}
	
	//printgraph(arr);
	return 0;
}
	


