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
#include <string.h>

#define fr(i,n) for(i=0;i<n;i++)

typedef vector<int> vi;
typedef vector<long long int > vll;
typedef long long int ll;
typedef vector<unsigned long long int > vull;
typedef unsigned long long int ull;
ll max(ll a, ll b)
{
	if(a>b)
		return a;
	else return b;

}
ll bsearch(ll x, vll &brr,ll n)
{

	ll mid;
	ll lo=0;
	ll hi=max(0,n-1);
	while(lo<hi)
	{
		mid=lo+(hi-lo)/2;
		if(brr[mid]>x)
			hi=mid;
		else
			lo=mid+1;
	}
	return brr[lo];
	//cout<<lo<<" ";
	//return ;

}
int main ()
{
	ll tmp[100005]={0};
	ll x,y,z,w,n,i,j,k,count=0,max=-1,min=100005,ans=0;
	//vll tmp;
	vll arr;
	//vll brr;
	
	cin>>n;


	for(i=0;i<n;i++)
	{
		cin>>x;
		arr.push_back(x);
	}
	sort(arr.begin(),arr.end());
	for(i=1;i<n;i++)
	{
		if(arr[i]==arr[i-1] || arr[i]<arr[i-1])
		{
			x=arr[i];
			arr[i]=arr[i-1]+1;

			//cout<<ans<<" ";
			ans+=arr[i-1]-x+1;
		}
	}
	cout<<ans<<endl;
	return 0;
}



