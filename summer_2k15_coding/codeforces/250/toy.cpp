
using namespace std;

#include <map>
#include <numeric>
#include <string>
#include <functional>
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <string.h>
#include <math.h>
#include <bits/stdc++.h>

#define fr(i,n) for(i=0;i<n;i++)

typedef vector<int> vi;
typedef vector<long long int > vll;
typedef long long int ll;
typedef vector<unsigned long long int > vull;
typedef unsigned long long int ull;

int main ()
{
	int i,j,k,l,x,n,m,u,v,val,ind,ans=0;
	vector<pair <int ,int> > arr;
	int sum[100005]={0};
	cin>>n>>m;
	vector< vector<int > > grph(n+1);
	for(i=0;i<n;i++)
	{
		cin>>x;
		arr.push_back(make_pair(x,i+1));
	}
	for(i=0;i<m;i++)
	{
		cin>>u>>v;
		grph[u].push_back(v);
		grph[v].push_back(u);
		sum[u]+=arr[v-1].first;
		sum[v]+=arr[u-1].first;
	}
	sort(arr.begin(),arr.end());
	for(i=n-1;i>=0;i--)
	{
		vector<int>::iterator it;
		val=arr[i].first;
		ind=arr[i].second;
		ans+=sum[ind];
		for(it=grph[ind].begin();it!=grph[ind].end();it++)
		{
			sum[*it]-=val;
		}
	}
	cout<<ans<<endl;

	return 0;
}