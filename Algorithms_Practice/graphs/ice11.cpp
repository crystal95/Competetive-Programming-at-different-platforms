#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<stdlib.h>
#include<list>
#include<vector>
#include<queue>
using namespace std;
int main()
{
	int i,j,k,l,m;
	int n,count=0,x,y,max=-1;
	cin>>n;
	vector<pair <int,int> > p(n);
	for(i=0;i<n;i++)
	{
		cin>>x>>y;
		x--;y--;
		p[i].first=x;
		p[i].second=y;
	}
	int visited[100000]={0};
	count=n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(p[j].second!=p[i].second && p[j].first==p[i].first)
			{
				if(((visited[(p[i].first*n)+p[j].second]) & ( visited[p[i].first*n+p[i].second]))==0) 
				{
					count--;
					visited[(p[i].first*n)+p[j].second]=1;
					visited[p[i].first*n+p[i].second]=1;
				}
			}
		}
		for(j=0;j<n;j++)
		{
			if( p[j].first!= p[i].first && p[i].second==p[j].second)
			{
				if(((visited[(p[j].first*n)+p[i].second]) & (visited[p[i].first*n+p[i].second] ))==0) 
				{
					count--;
					visited[(p[j].first*n)+p[i].second]=1;
					visited[p[i].first*n+p[i].second]=1;
				}
			}
		}
		visited[p[i].first*n+p[i].second]=1;
	}
	cout<<count-1<<endl;
	return 0;
}
