
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
ll maximise(vi &arr,ll x )
{

	ll i;
	vll ans(x+2);
	ans[1]=arr[1];
	ans[0]=0;
	for(i=2;i<=x;i++)
	{
		ans[i] = max(ans[i-1],ans[i-2]+i*arr[i]);
	}
	return ans[x]; 

}

int main ()
{
	vi arr(100005);
	ll i,j,k,l,m,n,x,count=-1,N;
	cin>>N;
	for (i = 0; i < N; ++i)
	{
		cin>>x;
		arr[x]++;
		if(count<x)
			count=x;
	}
	ll ans = maximise(arr,count);
	cout<<ans<<endl;
	return 0;
}
	//sort(arr.begin(), arr.end());

	