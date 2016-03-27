
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
	ull A,B,N,i,j,k,l;
	cin>>A>>B>>N;
	vector<ll> arr(N+1);
	arr[0]=A;
	arr[1]=B;
	for(i=2;i<N;i++)
	{
		arr[i]=arr[i-1]*arr[i-1]+arr[i-2];
	}

	cout<<arr[N-1];
	return 0;
}