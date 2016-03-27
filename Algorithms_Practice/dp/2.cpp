//max increasing continuous sub
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int i,max,j,k,l,arr[100],n,x,len[100];
	cin>>n;
	for(i=0;i<n;i++)
	{
		len[i]=1;
		cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			len[i]=1;
		}
		else
		{
			if(arr[i]>arr[i-1])
			{
				len[i]=len[i-1]+1;
				
			}
		}
	}

	max=0;
	for(i=0;i<n;i++)
	{
		if(len[i]>max)
		{
			max=len[i];
			x=i;
		}
	}
cout<<max<<endl;
	for(i=max;i>0;i--)
	{
		cout<<arr[x--]<<" ";
	}
	return 0;
}
