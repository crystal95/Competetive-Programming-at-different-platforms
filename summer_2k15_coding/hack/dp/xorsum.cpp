
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
	int T;
	cin>>T;
	while(T--)
	{
		int i,j,k,l,m,n,dp[100005][2],arr[100005];
		cin>>n;
		for(i=1;i<=n;i++)
		{
			scanf("%d",&arr[i]);
		}
		dp[1][0]=0;
		dp[1][1]=0;
		for(i=2;i<=n;i++)
		{
			dp[i][0]=max(dp[i-1][0],dp[i-1][1]+abs(arr[i-1]-1));
			dp[i][1]=max(dp[i-1][0]+abs(arr[i]-1),dp[i-1][1]+abs(arr[i-1]-arr[i]));
		}
		cout<<max(dp[n][0],dp[n][1])<<endl;

	}
	return 0;
}

