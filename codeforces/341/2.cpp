using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
typedef long long int  ll;
int main()
{
	ll n,i,j,k,l,x,y,cnt=0,ans=0,maxx=0,maxy=0;
	cin>>n;
	int arr[1001][1001]={0};
	for(i=0;i<n;i++)
	{
		cin>>x>>y;
		arr[x][y]=1;
		if(x>maxx)
			maxx=x;
		if(y>maxy)
			maxy=y;
	}
	for(i=1;i<=1000;i++)
	{
		cnt=0;
		x=i;y=1;
		while(x<=1000 && y<=1000)
		{
			if(arr[x][y]==1)
				cnt++;
			x++;y++;
		}
		ans+=(cnt*(cnt-1))/2;
		cnt=0;
		x=i;y=1;
		while(x>0 && y<=1000)
		{
			if(arr[x][y]==1)
				cnt++;
			x--;y++;
		}
		
		ans+=(cnt*(cnt-1))/2;
	}
	//cout<<ans<<endl;
	for(i=2;i<=1000;i++)
	{
		cnt=0;
		x=1;y=i;
		while(x<=1000 && y<=1000)
		{
			if(arr[x][y]==1)
				cnt++;
			x++;y++;
		}
		//cout<<cnt<<" ";
		ans+=(cnt*(cnt-1))/2;

		cnt=0;
		x=1000;y=i;
		int t=x;int o=y;
		while(x>0 && y<=1000)
		{
			if(arr[x][y]==1)
				cnt++;
			x--;y++;
		}
		
		ans+=(cnt*(cnt-1))/2;
	}
	cout<<ans<<endl;
	return 0;
}

