
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

#define fr(i,n) for(i=0;i<n;i++)

typedef vector<int> vi;
typedef vector<long long int > vll;
typedef long long int ll;
typedef vector<unsigned long long int > vull;
typedef unsigned long long int ull;
const long long mod = 1000000000 + 7;
int max(int a,int b)
{
	if(a>b)
		return a;
	else 
		return b;
}
ll arr[100005]={0};
ll sum[100005]={0};

long long pow(long long a, long long b)
{
	long long ret = 1;
	while (b)
	{
		if (b & 1)
			ret = (ret * a) % mod;
		a = (a * a) % mod;
		b >>= 1;
	}
	return ret;
}


int main ()
{
	sum[0]=0;
	ll T,k,i;
	cin>>T>>k;
	
		
		arr[0]=1;
		sum[0]=1;
	for(i=1;i<=100000;i++)
	{
		arr[i]=(arr[i-1]%mod+(i-k>=0 ? arr[i-k]:0)%mod)%mod;
		sum[i]=(sum[i-1]%mod+arr[i]%mod)%mod;
	}
	while(T--)
	{
		ll j,k,l,m,n,x,a,b;
			cin>>a>>b;
			cout<<((sum[b]-sum[a-1]+mod))%mod<<endl;
	}
	return 0;
}
		

	