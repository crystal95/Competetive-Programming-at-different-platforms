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
	ll x,y,z,w,n,i,j,k,count=0,max=-1,min=100005,ans;
	//vll tmp;
	vll arr;
	vll brr;
	
	cin>>n;


	for(i=0;i<n;i++)
	{
		cin>>x;
		if(x>max)
			max=x;
		if(x<min)
			min=x;//cout<<"hi";

		arr.push_back(x);
		tmp[x]=1;
	}
	max++;
	///cout<<"hi";
	for(i=1;i<=n;i++)
	{
		

		if(tmp[i]==0)
		{
			brr.push_back(i);
			count++;

		}
		tmp[i]=0;
	}
	sort(brr.begin(),brr.end());
	sort(arr.begin(),arr.end());
	for(i=0;i<n;i++)
	{
		if(tmp[arr[i]]==0)
		{
			tmp[arr[i]]=1;
		}
		else
		{
			k=bsearch(arr[i],brr,count);
			if(k<max   && k>arr[i])
			{
				ans=ans+(k-arr[i]);
				brr.erase(std::remove(brr.begin(), brr.end(), k), brr.end()); 
			}
			else
			{
				ans=ans+(max+1-arr[i]);
				max++;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}
