using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
typedef long long ll;
bool all2(ll a)
{
	ll m=1;
	while(m<=a)
	{
		if(m==a)
			return true;
		m=m*2;

	}
	return false;
}

int main()
{
	ll T;
	scanf("%lld",&T);
	while(T--)
	{
		ll a,b,cnt=0;
		cin>>a>>b;
		while(1)
		{
			if(all2(a) && a<=b)
			{
				break;
			}
			else
			{
				a=a/2;
				cnt++;
			}
		}
		while(a!=b && a<=b)
		{
			a=a*2;
			cnt++;
		}
		cout<<cnt<<endl;
	}

	return 0;
}