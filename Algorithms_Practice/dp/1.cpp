//max increasing subsequence
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	long long int i,j,n;
	int max,k,l,arr[100005],len[100005];
	cin>>n;
	for(i=0;i<n;i++)
	{
		len[i]=1;
		cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i-1;j>=0;j--)
		{
			if(len[i]<len[j]+1 && arr[j]<arr[i])
				len[i]=len[j]+1;
		}
	}

	max=0;
	for(i=0;i<n;i++)
	{
		if(len[i]>max)
			max=len[i];
	}
	cout<<max<<endl;
	return 0;
}
