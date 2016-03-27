using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
#include <queue>
int bsearch(int find , vector<int> &arr)
{
	int lo=0;
	int hi=arr.size()-1;
	int mid;
	while(lo<=hi)
	{
		mid=lo+(hi-lo)/2;
		
		if(arr[mid]>=find)
		{
			hi=mid;
		}
		else
		{
			lo=mid+1;
		}
	}
	return lo;
}
int main()
{
	int i,j,k,n,x,find;
	cin>>n;
	vector<int> arr;
	for(i=0;i<n;i++)
	{
		cin>>x;
		arr.push_back(x);
	}
	cin>>find;
	k=bsearch(find,arr);
	if(k>=0)
		cout<<k<<endl;
	else
		cout<<"nt found"<<endl;
	return 0;
}