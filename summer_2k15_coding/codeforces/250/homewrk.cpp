
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
typedef vector<unsigned long long int > vull;
typedef unsigned long long int ull;

int main ()
{
	int i,j,k,l,ans,flag1=0,flag2=0;
	char str[5][105];
	vector<pair<int ,int > > arr;
	for(i=0;i<4;i++)
	{
		cin>>str[i];
		arr.push_back(make_pair(strlen(str[i])-2,i));
	}
	sort(arr.begin(),arr.end());
	
	if(2*arr[0].first<=arr[1].first  && 2*arr[0].first<=(arr[2].first) && 2*arr[0].first<=arr[3].first)
	{
		flag1=1;
		ans=arr[0].second;
	}
	if(2*arr[0].first<=(arr[3].first)  && 2*arr[1].first<=(arr[3].first) && 2*arr[2].first<=(arr[3].first))
	{
		flag2=1;
		ans=arr[3].second;
	}
	if((flag1^flag2) )
	cout<<char(ans+65)<<endl;
	else
		cout<<'C'<<endl;
	return 0;
}
	
	
	
	


