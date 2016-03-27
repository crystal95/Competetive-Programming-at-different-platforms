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
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		ll n;
		ll cnt=0,i,j;
		cin>>n;

		long long int arr[51]={0};
		long long int sum[51]={0};
		long long int pro[51]={1};
		for(i=1;i<=n;i++)
		{
			cin>>arr[i];
			sum[i]=sum[i-1]+arr[i];
			pro[i]=pro[i-1]*arr[i];
		}
		for(i=0;i<=n;i++)
		{
			for(j=i+1;j<=n;j++)
			{
				if(sum[j]-sum[i]==pro[j]/pro[i])
				{
					cnt++;
				}
			}
		}
		cout<<cnt<<endl;
		
	}
return 0;
}