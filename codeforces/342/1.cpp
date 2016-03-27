using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
typedef long long int  ll;
int main()
{
	int n,k,i,j,cnt=1,ans=0;
	cin>>n>>k;
	int arr[n+1][n+1];
	for(i=1;i<=n;i++)
	{
		for(j=1;j<k;j++)
		{
			arr[i][j]=cnt++;
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=k;j<=n;j++)
		{
			if(j==k)
				ans+=cnt;
			arr[i][j]=cnt++;
		}
	}
	cout<<ans<<endl;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}