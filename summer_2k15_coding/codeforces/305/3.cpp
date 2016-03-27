
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
ll visited2[1000006]={0};
ll visited1[1000006]={0};
ll max(ll a,ll b)
{
	if(a>b)
		return a;
	else return b;
}

int main ()
{

	ll i,j,k,l,a1,a2,x1,x2,h1,h2,y1,y2,mod,curr,fst,sec,flag1=0,flag2=0,ans1,ans2;
	cin>>mod;
	cin>>h1>>a1>>x1>>y1>>h2>>a2>>x2>>y2;


	
	ll prev=h1;
	for(i=1;i<mod;i++)
	{
		curr= ((x1*prev)%mod+(y1)%mod)%mod;
		prev=curr;
		if(curr==a1)
		{
			flag1=1;
			ans1=i;
			break;
		}

	}
	prev=h2;
	for(i=1;i<mod;i++)
	{
		//if(arr[i])
		curr= ((x2*prev)%mod+(y2)%mod)%mod;
		if(curr=a2)
		{
			flag2=1;
			ans2=i;
			break;
		}
		//if(visited2[curr]!=0)
		//	break;
		//else 
		//	visited2[curr]= i;
		prev=curr;
	}

		
	if(flag1&&flag2 )
	{
		cout<<max(ans1,ans2)<<endl;
	}
	else 
		cout<<"-1"<<endl;
}