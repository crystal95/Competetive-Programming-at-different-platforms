
#include <numeric>
#include <string>
#include <functional>
#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

#define fr(i,n) for(i=0;i<n;i++)

typedef vector<int> vi;
typedef vector<long long int > vll;
typedef long long int ll;
typedef vector<unsigned long long int > vull;
typedef unsigned long long int ull;



ull bsearch(vull &arr)
{
	int i;
	ull  lo = *max_element(arr.begin(),arr.end());
	ull n = arr.size();
	ull hi;
	fr(i,n)
	hi+=arr[i];
    
    //cout<<hi<<endl;
	ull  mid;
	while(lo<hi)
	{
		ll  sum=0;
		mid=lo + (hi-lo)/2;
		for (ull i = 0; i < n; ++i)
		{

			sum+=(mid-arr[i]);
			if(mid<=sum)
				break;
			

		}
		if(mid<=sum)
				hi=mid;

		else 
			lo=mid+1;
		
	}
	return lo;
}



int main ()
{

vull arr;
ull i,j,k,l,n,x;
cin>>n;

fr(i,n)
{
	cin>>x;
	arr.push_back(x);
}

ull ans = bsearch(arr);

cout<<ans<<endl;
 
 return 0;
 } 


