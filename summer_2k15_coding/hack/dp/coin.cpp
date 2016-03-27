
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
	int i,j,k,l;
	int n,m,fib[10000]={0},arr[10000]={0};
	scanf("%d %d",&n,&m);
	fib[0]=1;
	for(i=0;i<m;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=1;i<=n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(arr[j]<=i)
			{
				fib[i]+=fib[i-arr[j]];
			}
		}
	}
	printf("%d\n",fib[n]-(m*(m-1))/2);
	return 0;
}