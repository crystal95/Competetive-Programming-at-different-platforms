using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
int main()
{
	int n,i,j,k,l,x,maxe=-1;
	cin>>n;
	vector<int> arr;
	vector<int> dp(n+1,1);
	for(i=0;i<n;i++)
	{
		cin>>x;
		arr.push_back(x);
	}
	
	for(i=1;i<n;i++)
	{
		for(j=i;j>=0;j--)
		{
			if(arr[i]>arr[j])
			{
				dp[i]=max(dp[i],dp[j]+1);
			}

		}
		maxe=max(maxe,dp[i]);
	}

	


	cout<<maxe<<endl;
	return 0;
}