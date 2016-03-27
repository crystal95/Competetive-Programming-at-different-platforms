
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
	int T;
		scanf("%d",&T);
	while(T--)
	{
		int i,j,k,l,n;
		ll x,maxe=-1;
		scanf("%d%d",&n,&k);
		for(i=0;i<n;i++)
		{
			scanf("%lld",&x);
			if(x>maxe)
			{
				maxe=x;
			}
		}	
		if(maxe%2==0)
		{
			if(k%2==0)
			{
				cout<<"even"<<endl;
			}
			else
				cout<<"odd"<<endl;
		}
		else 
		{

			if(k%2!=0)
			{
				cout<<"even"<<endl;
			}
			else
				cout<<"odd"<<endl;

		}
		
	}
	return 0;
}


			

