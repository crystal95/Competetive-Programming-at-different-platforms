
#include <numeric>
#include <string>
#include <functional>
#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

#define fr(i,n) for(i=0;i<n;i++)

typedef vector<int> vi;
typedef vector<long long int > vll;
typedef long long int ll;
typedef vector<unsigned long long int > vull;
typedef unsigned long long int ull;

int main ()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int i,j,k,l,n,count=0,ans=0,expen=0,final=0;
		scanf("%d",&n);
		int arr[100005];
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
		arr[n]=-1;
		for(i=0;i<n;i++)
		{
			
				if(arr[i]<arr[i+1])
				{
					count++;
					expen+=arr[i];
				}
				else 
					{
						ans=(count)*arr[i];
						final=final+ans-expen;
						ans=0;
						expen=0;
						count=0; 
					}
		}
		cout<<final<<endl;
	}
}

