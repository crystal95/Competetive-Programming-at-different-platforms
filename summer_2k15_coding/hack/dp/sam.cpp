
#include <numeric>
#include <string.h>
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
#define mod 1000000007
int main ()
{
	ll i,j,k,l,ans=0;
	char str[200005];
	ll dp[200005]={0};
	scanf("%s",str);
	l=strlen(str);

	dp[0]=str[0]-48;
	ans+=str[0]-48;
	for(i=1;i<l;i++)
	{
		dp[i]=(((dp[i-1])%mod*10)%mod+((str[i]-48)*(i+1)))%mod ;
		ans=(ans+dp[i])%mod;
		
	}

	cout<<ans<<endl;
	return 0;
}