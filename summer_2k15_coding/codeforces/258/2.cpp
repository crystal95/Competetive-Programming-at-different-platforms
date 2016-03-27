
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
	int i,j,k,l,m,n,min,flag=0,flag2=0,x,end,start,cnt;
	vi arr;
	vi brr;
	cin>>n;
	end=n-1;start=n-1;
	for(i=0;i<n;i++)
	{
		cin>>x;
		arr.push_back(x);
		brr.push_back(x);
	}
	sort(arr.begin(),arr.end());
	for(i=0;i<n;i++)
	{
		if(arr[i]!=brr[i] && flag==0)
		{
			flag=1;
			start=i;
			cnt=i;
		}
		else if(arr[i]!=brr[i] && flag==1)
		{
			if(brr[i]>brr[i-1])
			{
				flag2=1;
				break;
			}
			if(cnt+1!=i)
			{
				flag2=1;
				break;
			}
			else
			{end=i;
			cnt++;}
		}

	}
	if(flag2==0)
	{
		cout<<"yes"<<endl<<start+1<<" "<<end+1<<endl;

	}
	else 
		cout<<"no"<<endl;

	return 0;
}