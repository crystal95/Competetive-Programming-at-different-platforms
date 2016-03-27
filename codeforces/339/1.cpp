using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
#include <math.h>
typedef unsigned long long int  ll;

int main()
{
	ll l,r,k,cnt=0,flag=0,ans=1;
	cin>>l>>r>>k;
	ll top =1000000000000000000;
	//cout<<top<<endl;
	

	while(1)
	{
		if(ans>=l && ans<=r)
		{
			cout<<ans<<" ";
			flag=1;
			
		}
		
	if(ans>top/k)
				break;
		ans=ans*k;
	//	cout<<ans<<" ";
		if(ans>r)
		break;


	}
	if(flag==0)
		cout<<"-1"<<endl;
	return 0;
}