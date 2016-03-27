#include<stdio.h>
#include<iostream>
using namespace std;
int maxi(int a,int b)
{
	if(a>b)
		return a;
	else return b;
}
int main()
{
	int i,max,sum[100],j,k,l,arr[100],n,len[100];
	cin>>n;
	for(i=1;i<=n;i++)
	{
	sum[i]=0;
		cin>>arr[i];
	}
	for(i=1;i<=n;i++)
	{
		sum[i]=maxi(sum[i-1]+arr[i],arr[i]);

	}

	max=0;
	for(i=1;i<=n;i++)
	{
		if(sum[i]>max)
			max=sum[i];
	}
	cout<<max<<endl;
	return 0;
}
