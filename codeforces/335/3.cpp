using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>  
#include <bits/stdc++.h>
#include <tr1/unordered_map>
using namespace std::tr1;

int main()
{
	int n,i,j,maxe=1;
		cin>>n;

	vector<int> arr(n);
	vector<int> dp(n,1);
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=1;i<n;i++)
	{
		if(arr[i]>arr[i-1])
		dp[i]=dp[i-1]+1;
		else
		{
			dp[i]=1;
		}
		maxe=max(dp[i],maxe);
	}
	cout<<n-maxe<<endl;
	return 0;
}