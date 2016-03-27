using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
#include <algorithm>
int main()
{
	long long int i,d,j,k,l,x,ans=-1,n,y,flag=0,tmp;
	scanf("%lld %lld",&n,&d);
	vector<pair<long long int, long long int> > arr;
	
	for(i=0;i<n;i++)
	{
		scanf("%lld %lld",&x,&y);
		arr.push_back(make_pair(x,y));
	}
	sort(arr.begin(),arr.end());
	j=0;
	tmp=arr[0].second;
	ans=max(ans,tmp);
	for(i=1;i<n;i++)
	{
		tmp=tmp+arr[i].second;
		while(abs(arr[i].first-arr[j].first)>=d)
		{
			tmp=tmp-arr[j].second;			
			j++;
		}

		ans=max(ans,tmp);
		
	}
	
	printf("%lld\n",ans);
	return 0;
}
