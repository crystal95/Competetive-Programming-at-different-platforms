#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

#define fr(i,n) for(i=0;i<n;i++)

typedef vector<int> vi;
typedef vector<long long int > vll;
typedef long long int ll;


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

	vll arr;
	ll i,j,k,l,n,t,sum=0,x,count=0;
	cin>>n>>t;
	fr(i,n)
	{
		cin>>x;
		sum+=x;
		arr.push_back(sum);
	}

	fr(i,n)
	{
		if(arr[i]<=t)
			{
				if(i+1>count)
				count=i+1;
			}
		else
		{
			for (int j = i-1 ; j >=0 ;j--)
			{
				if(arr[i]-arr[j]<=t)
				{
					if((i-j)>count)
						{
							count=i-j;
							break;
						}

					
				}
				
			}
		}
	}

	cout<<count<<endl;
	return 0;
}



