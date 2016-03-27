
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

int main ()
{
	ll i,j,k,l,N,n,x1,x2,y1,y2,sum=0,curr=1,x,digit=1,ref=9,ans=0;
	cin>>n;
	N=n;
	if(n<10)
	{
		cout<<n<<endl;
	}
	
	else if(n==10)
		cout<<'2'<<endl;
	else
	{
		while(1)
		{
			x=n%10;
			n=n/10;
			ans+=(ref)*digit;
			ref*=10;
			digit++;
			if(n<10)
			{
				break;
			}
		}

		ref/=9;
		ans+=(N-ref+1)*digit;
		cout<<ans<<endl;
	}
	
	
}