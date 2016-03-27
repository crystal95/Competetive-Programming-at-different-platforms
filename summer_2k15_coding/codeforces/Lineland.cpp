
using namespace std;

#include <map>
#include <numeric>
#include <string>
#include <functional>
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>

#define fr(i,n) for(i=0;i<n;i++)


typedef vector<int> vi;
typedef vector<long long int > vll;
typedef long long int ll;
typedef vector<unsigned long long int > vull;
typedef unsigned long long int ull;
int main ()
{
	int i,j,k,l,m,n,x;
	vector<int> arr;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		arr.push_back(x);
	}
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			cout<<arr[i+1]-arr[0]<<" "<<arr[n-1]-arr[0]<<endl;
		}
		else if(i==n-1)
		{
			cout<<arr[i]-arr[i-1]<<" "<<arr[n-1]-arr[0]<<endl;
		}
		else 
		{
			cout<<min(abs(arr[i]-arr[i+1]),abs(arr[i]-arr[i-1]))<<" "<<max(abs(arr[i]-arr[0]),abs(arr[i]-arr[n-1]))<<endl;
		}
	}
	return 0;
}
