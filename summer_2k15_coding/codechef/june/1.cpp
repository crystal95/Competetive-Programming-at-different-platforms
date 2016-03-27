
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

int main ()
{
	ll T;
	cin>>T;
	while(T--)
	{
		ll i,j,k,l,m,n,N,ans=0,curr=0,x;
		cin>>N;
		for(i=0;i<N;i++)
		{
			cin>>x;
			if(x>curr)
			{
				ans=ans+(x-curr);		
			}
			curr=x;
			
		}
		cout<<ans<<endl;
		
	}
	return 0;
}