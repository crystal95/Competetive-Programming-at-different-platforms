
#include <numeric>
#include <string>
#include <functional>
#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>

using namespace std;

#define fr(i,n) for(i=0;i<n;i++)

typedef vector<int> vi;
typedef vector<long long int > vll;
typedef long long int ll;
typedef vector<unsigned long long int > vull;
typedef unsigned long long int ull;

int main()
{
	ll i,j,k,l,n,m,max=-1,curr,ans,tmp;
	scanf("%lld",&n);
	ll arr[100000]={0};
	ll ref[100000]={0};
	// brr[100000]={0};
	for(i=0;i<n;i++)
	{
		scanf("%lld",&arr[i]);
	}	
	for(i=0;i<n;i++)
	{
		for(k=n-1;k>i;k--)
		{

			tmp=i;curr=k;ans=0;
			while(tmp<curr)
			{
				ans=ans+arr[tmp++]*arr[curr--];
				if(ans>max)
				{
					max=ans;
				}
				if(ans<0)
					break;
			}
			
		}
	}
	cout<<max<<endl;
	return 0;

}