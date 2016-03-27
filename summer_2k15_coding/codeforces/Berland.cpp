
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
	int i,j,k,l,n,m,x,brr[1000005]={0},arr[1000006]={0},count=0,max_=0;
	char ch;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>ch;
		cin>>x;
		if(ch=='+')
		{
			arr[x]=1;
			brr[x]=1;
			count++;
			max_=max(count,max_);
		}
		else
		{
			if(arr[x]==0)
			{
				max_++;
			}
			else
			{
				arr[x]=0;
				count--;
				max_=max(count,max_);
			}
		}
		
	}
	cout<<max_<<endl;
	return 0;
}
