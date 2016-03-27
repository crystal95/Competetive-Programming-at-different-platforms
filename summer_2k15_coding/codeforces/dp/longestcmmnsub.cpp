
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

#define fr(i,n) for(i=0;i<n;i++)

typedef vector<int> vi;
typedef vector<long long int > vll;
typedef long long int ll;
typedef vector<unsigned long long int > vull;
typedef unsigned long long int ull;
int max(int a,int b)
{
	if(a>b)
		return a;
	else 
		return b;
}

int longestcmmnsub(vi &arr,vi &brr)
{
	vi ans(100);
	int j,q,i;
	for ( i = 0; i < n; ++i)
	{
		q=1;
		for ( j = 0; j <i; ++j)
		{
			if(arr[j]<arr[i])
			q=max(q,ans[j]+1);
		}
		ans[i] = q;
	}
	q=-1;
	for(i=0 ;i <n ;i++)
	{
		q=max(q,ans[i]);
	}
	return q;
}

int main ()
{
	int n,ans; 
	vi arr(1000);
	vi brr(1000);
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
		cin>>brr[i]
	}
	ans = longestcmmnsub(n,arr);
	cout<<ans<<endl;
	
}
