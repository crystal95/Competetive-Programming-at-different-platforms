#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
int compare (const void * a, const void * b)
{
	return ( *(int*)b - *(int*)a );
}
int maxi(int a,int b)
{
	if(a>b)
		return a;
	else return b;
}
int main()
{
	long long int m,i,ans=0,max,sum[100],j,k,l,arr[100],n,len[100];
	cin>>n>>m>>k;
		for(i=0;i<n;i++)
		{
			sum[i]=0;
			cin>>arr[i];
		}
	for(i=0;i<n;i++)
	{
		if(i==0)
			sum[i]=arr[i];
		else
			sum[i]=maxi(sum[i-1]+arr[i],arr[i]);

	}

	max=0;
	for(i=0;i<n;i++)
	{
		if(sum[i]>max)
			max=sum[i];
	}
	qsort(sum,n,sizeof(long long int),compare);
		for(i=0;i<n;i++)
			ans+=sum[i];
	cout<<ans<<endl;
	return 0;
}
