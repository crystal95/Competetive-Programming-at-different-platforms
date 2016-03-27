
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
	int i,j,k,l,n,m,count=0,x=1,flag=0;
	cin>>n>>k;
	int arr[200005];
	for(i=0;i<k;i++)
	{
		cin>>m;
		flag=0;
		for(j=0;j<m;j++)
		{
			cin>>arr[j];
			if(j>0)
			{
				if(arr[j]!=arr[j-1]+1)
				{
					flag=1;
					count++;
				}
				else
				{
					if(arr[0]==1 && flag==0)
					{
						x++;
					}
					else 
						count++;

				}
			}
		}
	}
	cout<<count+(n-x+1-1)<<endl;
	return 0;
}
