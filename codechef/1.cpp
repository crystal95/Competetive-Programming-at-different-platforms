using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
int bsearch(vector<long long int> & tmp, long long int x)
{
	int mid;
	int lo =0;
	int hi =tmp.size()-1;
	while(lo<hi)
	{
		mid=lo+(hi-lo)/2;
		if(tmp[mid]<=x)
			lo=mid+1;
		else
			hi=mid;
	}
	if(tmp[lo]>x)
		return lo;
	else
		return -1;
}
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		long long int i,j,t,l,n,m,x,k,ans,flag=0;
		scanf("%lld",&n);
		vector<long long int> arr;
		vector<long long int> tmp;
		for(i=0;i<n;i++)
		{
			scanf("%lld",&x);
			arr.push_back(x);
		}
		for(i=n-1;i>0;i--)
		{
			if(arr[i]>arr[i-1])
			{
				ans=arr[i];
				flag=1;
				break;
			}
		}

		if(flag==0)
			ans=arr[0];
		
		sort(arr.begin(),arr.end());
		i=0;
		while(arr[i]<=ans)
		{
			tmp.push_back(arr[i]);
			i++;
		}
		
		n=tmp.size();
		printf("%lld ", n);
		for(i=0;i<n;i++)
			printf("%lld ", tmp[i]);
		
		printf("\n");
	}
	return 0;
}

