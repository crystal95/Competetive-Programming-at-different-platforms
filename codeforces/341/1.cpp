using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
typedef long long int  ll;
int main()
{
	
	ll i,j,k,odd=0,even=0,x,n,mine=1000000009,sum=0;
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cin>>x;
		if(x%2!=0)
		{
			if(x<mine)
			{
				mine=x;
			}
		}
		sum+=x;
	}
	if(sum%2==0)
		cout<<sum<<endl;
	else
		cout<<sum-mine<<endl;
	return 0;
}
