
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
#include <math.h>
#include <bits/stdc++.h>

#define fr(i,n) for(i=0;i<n;i++)

typedef vector<int> vi;
typedef vector<long long int > vll;
typedef long long int ll;
typedef vector<unsigned long long int > vull;
typedef unsigned long long int ull;
int lowbit(int n)
{
	int i=0;
	while(!(n&(1<<i)))
	{
		i++;
	}
	return pow(2,i);
}
int main ()
{
	int i,j,k,l,sum,limit,x;
	vector<int> arr;
	cin>>sum>>limit;
	vector<int>::iterator it; 
	for(i=limit;i>=1;i--)
	{
		x=lowbit(i);
		if(sum>=x)
		{
			sum=sum-x;
			arr.push_back(i);
		}
		
	}
	if(sum==0)
	{
		cout<<arr.size()<<endl;
		for(it=arr.begin();it!=arr.end();it++)
		{
			cout<<*it<<" ";
		}
		cout<<endl;
	}
	else 
		cout<<"-1"<<endl;
	return 0;	
}