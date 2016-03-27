#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

#define fr(i,n) for(i=0;i<n;i++)

typedef vector<int> vi;


int bsearch(vi &arr, int target )
{
	int lo=0;
	int hi=arr.size()-1;
	int mid;
	while(lo<=hi)
	{
		mid=lo + (hi-lo)/2;
		if(arr[mid]==target)
			return mid;
		else if(arr[mid]<target)
			lo=mid+1;
		else
			hi=mid-1;
	}
	return -1;
}



int main ()
{
	long long int i,j,k,l,x,n,target,flag1=0,flag2=0,prev;
	vector<long long int> arr;
	cin>>n>>l;
	double max=-1;
	fr(i,n)
	{
		cin>>x;
		arr.push_back(x);
	}



	sort(arr.begin(),arr.end());
	
	
	for ( i = 0; i < n ; ++i)
	{
		
		if(max < arr[i]-prev)
		{
			max=arr[i]-prev;
			
		
		}
		prev = arr[i];
	
	}
	max/=2;
	if(arr[0]>0)
	{
		if(max<arr[0])
			max=arr[0];
	}
	if(arr[n-1]!=l)
	{
		if(max<l-arr[n-1])
			max=l-arr[n-1];
	}

	printf("%.9f\n",max);
	return 0;

}