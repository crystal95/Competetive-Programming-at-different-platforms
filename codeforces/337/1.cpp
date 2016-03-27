using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
typedef long long int  ll;
int main()
{
	ll i,j,k,l,n,min=0,ind=0,maxe=0,cnt=0,x	;
	vector<ll> arr;
	cin>>n;
	vector<ll> dp(n+1,0);
	for(i=0;i<n;i++)
	{
		cin>>x;
		arr.push_back(x);
		if(i==0)
		{
			min=arr[i];
			ind=i;
		}	
		if(min>arr[i])
		{
			min=arr[i];
			ind=i;
		}
	}
	for(i=0;i<n;i++)
	{
		arr[i]=arr[i]-min;
	}
	if(arr[0]!=0)
		dp[0]=1;
	for(i=1;i<n;i++)
	{
		if(arr[i]!=0)
		dp[i]=dp[i-1]+1;

		maxe=max(dp[i],maxe);

	}
	for(i=0;i<n;i++)
	{
		if(arr[i]==0)
			break;
		cnt++;
	}

	cout<<max(maxe,dp[n-1]+cnt)+min*n<<endl;
	return 0;
}