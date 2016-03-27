using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
#include <algorithm>
int main()
{
	long long int i,d,j,k,l,x,maxe=-1,n,y;
	scanf("%lld %lld",&n,&d);
	vector<pair<long long int, long long int> > arr;
	vector<long long int> tmp(n,0);
	for(i=0;i<n;i++)
	{
		scanf("%lld %lld",&x,&y);
		arr.push_back(make_pair(x,y));
	}
	sort(arr.begin(),arr.end());
	reverse(arr.begin(),arr.end());
	tmp[0]=arr[0].second;
	k=0;
	for(i=1;i<n;i++)
	{
		while(abs(arr[i].first-arr[k].first)>=d && k<i)
		{
			k++;
		}
		if(k!=0 && k<i)
		{
			tmp[i]=tmp[i-1]-tmp[k-1]+arr[i].second;
		}
		else if(k==0)
			tmp[i]=tmp[i-1]+arr[i].second;
		else
		{
			tmp[i]=arr[i].second;
			k=i;
		}
	}

	for(i=0;i<n;i++)
	{
		if(tmp[i]>maxe)
			maxe=tmp[i];
	}

	printf("%lld\n",maxe);
	return 0;
}
