
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
#include <string.h>

#define fr(i,n) for(i=0;i<n;i++)

typedef vector<int> vi;
typedef vector<long long int > vll;
typedef long long int ll;
	typedef unsigned long long int ull;

int main ()
{
	ll i,j,k,l,n,x,m,count=0,ans=0;
	vll arr;
	vll::iterator it;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		arr.push_back(x);
	}
	sort(arr.begin(),arr.end());
	it=arr.begin();
	 while(it!=arr.end())
	{

		if((*it)>=count)
		{
			ans++;
			count+=*it;
			
		}
		it++;
	}
	cout<<ans<<endl;
	return 0;
}