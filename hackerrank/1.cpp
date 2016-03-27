using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
typedef long long int ll;
int main()
{
	ll T;
	cin>>T;
	while(T--)
	{
		ll i,j,n,k,l,flag=0,x,y;
		cin>>n;
		vector<int> arr;
		vector<int> brr;
		for(i=0;i<n;i++)
		{
			cin>>x;
			arr.push_back(x);
		}
	
		for(i=0;i<n;i++)
		{
			cin>>x;
			brr.push_back(x);
		}
		int prev=min(arr[0],brr[0]);
		for(i=0;i<n;i++)
		{
			x=min(arr[i],brr[i]);
			y=max(arr[i],brr[i]);
			if(y<prev)
			{	
				flag=1;
				break;
			}
			else
			{
				if(x>=prev)
				prev=x;
				else
				prev=y;
			}

		}
		if(flag==1)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	}
	return 0;
}
	
