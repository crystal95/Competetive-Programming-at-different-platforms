
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

int main()
{
	int i,j,k,l,N,m,ind1=0,ind2=0,count=1,x,n,y,curr_x,curr_y,curr_ind;
	vector<pair<int ,int> > arr;
	cin>>n;
	int col[n][2];
	for(i=0;i<n;i++)
	{
		cin>>x>>y;
		arr.push_back(make_pair(y,x));
	}
	sort(arr.begin(),arr.end());
	col[0][0]=0;
	col[0][1]=0;
	curr_y=arr[0].first;
	curr_x=arr[0].second;
	for(i=1;i<n;i++)
	{
		if(arr[i].second>curr_x && arr[i].first!=curr_y)
		{	count++;
			col[i][0]=curr_x;
			col[i][1]=curr_y;
			curr_y=arr[i].first;
			curr_x=arr[i].second;
			curr_ind=i;

		}
		else if(arr[i].second<curr_x && arr[i].second>col[curr_ind][0])
		{
			col[i][0]=col[curr_ind][0];
			col[i][1]=col[curr_ind][1];
			curr_y=arr[i].first;
			curr_x=arr[i].second;
			curr_ind=i;

		}
	}
	cout<<count<<endl;
	return 0;
}
