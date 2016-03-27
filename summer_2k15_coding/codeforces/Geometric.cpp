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
#include<map>

#define fr(i,n) for(i=0;i<n;i++)


typedef long long int ll;
int main ()
{
	ll i,j,k,l,n,x,ans=0;
	map<ll,ll> mp1,mp2;
	cin>>n>>k;
	for(i=0;i<n;i++)
	{
		cin>>x;
		if(x%(k*k)==0)
		{
			ans+=mp2[x/k];
		}
		mp1[x]++;

		mp2[x]+=mp1[x/k];
	}
	cout<<ans<<endl;
	return 0;
}