
#include <numeric>
#include <string>
#include <functional>
#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

#define fr(i,n) for(i=0;i<n;i++)

typedef vector<int> vi;
typedef vector<long long int > vll;
typedef long long int ll;
typedef vector<unsigned long long int > vull;
typedef unsigned long long int ull;
int bsearch(ll x, vector<long long int> &arr)
{
	int lo=0;
	int hi= arr.size()-1;
	while(lo<hi)
	{
		int mid=lo + (hi-lo)/2;
		if(arr[mid]>=x)
		{
			hi=mid;
		}
		else
		{
			lo=mid+1;
		}
	}
	return lo;
}
int main ()
{
	int i,j,k,l,m,n;
	long long int ans,q,inp,x;
	vll arr;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&x);
		arr.push_back(x);
	}
	sort(arr.begin(),arr.end());
	scanf("%lld",&q);
	while(q--)
	{
		scanf("%lld",&inp);
		if(inp>arr[n-1])
			ans=n;
		else 
		ans=bsearch(inp,arr);
		printf("%lld\n",ans);
	}
	return 0;
}
