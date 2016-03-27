
#include <numeric>
#include <string>
#include <functional>
#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>

using namespace std;

#define fr(i,n) for(i=0;i<n;i++)

typedef vector<int> vi;
typedef vector<long long int > vll;
typedef long long int ll;
typedef vector<unsigned long long int > vull;
typedef unsigned long long int ull;
int main ()
{
	int i,j,n,len,count1=0,count2=0,flag=0,curr;
	cin>>n;
	int arr[n+1];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	curr=n-arr[0];
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			if((curr+arr[i])%n!=i)
			{
				flag=1;
				break;
			}
		}
		else if((arr[i]-curr+n)%n!=i)
			{
				flag=1;
				break;
			}
	}
	if(flag==1)
	{
		cout<<"No"<<endl;

	}
	else 
		cout<<"Yes"<<endl;
	return 0;
}