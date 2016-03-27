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
typedef long long ll;
int main()
{
	int i ,j,k,l,m,n;
	cin>>n;
	int ans=0,cnt=0;
	char arr[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			cin>>arr[i][j];
	}
	for(i=0;i<n;i++)
	{
		cnt=0;
		for(j=0;j<n;j++)
		{
			if(arr[i][j]=='C')
			{
				cnt++;
			}
		}
		//cout<<cnt<<" ";
		ans+=cnt*(cnt-1)/2;
	}
	for(i=0;i<n;i++)
	{
		cnt=0;
		for(j=0;j<n;j++)
		{
			if(arr[j][i]=='C')
			{
				cnt++;
			}
		}
		ans+=cnt*(cnt-1)/2;
	}

	cout<<ans<<endl;
	return 0;
}