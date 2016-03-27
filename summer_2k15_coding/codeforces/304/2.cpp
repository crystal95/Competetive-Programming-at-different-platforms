
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
int bsearch(ll x, vll &brr,ll n)
{
	ll mid;
	ll lo=brr[0];
	ll hi=brr[n-1];
	while(lo<hi)
	{
		mid=lo+(hi-lo)/2;
		if(brr[mid]>x)
			lo=mid;
		else
			lo=mid+1;
	}
	return lo;
}
int Issame(vi &arr, vi &brr)
{
	if(arr.size()!=brr.size())
		return 0;
	int x= arr.size();
	for(int i=0;i<x;i++)
	{
		if(arr[i]!=brr[i])
			return 0;

	}
	return 1;
}
int main ()
{
	int i,j,k,l,x,flag1=0,flag2=0,count=0,s1,s2,n,n1,n2;
	vi arr;
	vi brr;
	cin>>n;
	 cin>>n1;
	 fr(i,n1)
	 {
	 	scanf("%d",&x);
	 	arr.push_back(x);

	 }
	 cin>>n2;
	 fr(i,n2)
	 {
	 	scanf("%d",&x);
	 	brr.push_back(x);

	 }
	 vi tmpa(arr);
	 vi tmpb(brr);
	 while(1)
	 {
	 	if(arr[0]>brr[0])
	 	{
	 		arr.push_back(brr[0]);
	 		arr.push_back(arr[0]);
	 		arr.erase(arr.begin());
	 		brr.erase(brr.begin());
	 	}
	 	else
	 	{
	 		brr.push_back(arr[0]);
	 		brr.push_back(brr[0]);
	 		brr.erase(brr.begin());
	 		arr.erase(arr.begin());

	 	}

count++;

	 	if(((Issame(arr,tmpa)||Issame(arr,tmpb))))
	 		{
	 			flag1=1;
	 			break;
	 		}
	 		s1=arr.size();
	 		s2=brr.size();
	 		if(s1==0||s2==0)
	 		{
	 			flag2=1;

	 			break;
	 			
	 		}	
			
	 }
	 if(flag1==1)
	 {
	 	cout<<"-1"<<endl;
	 }
	 else if(flag2==1)
	 	{
	 		cout<<count<<" ";
	 		if(s1==0)
	 		{
	 			cout<<'2'<<endl;
	 		}
	 		else 
	 			cout<<'1'<<endl;
	 	}
	 	return 0;

	}
