using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
#include <map>
int main()
{
	int mp1[100005]={0};
	int mp[100005]={0};
	 	int end,i,j,x,k,l,n,t,s,q,start,count=1;
	cin>>n;
	vector<int> arr;
	vector<int> tmp;
	for(i=0;i<n;i++)
	{
		cin>>x;
		arr.push_back(x);
		mp[x]=1;
	}
	for(i=0;i<n;i++)
	{
		if(mp[i+1]==0)
		{
			tmp.push_back(i+1);
		}
	}

	for(i=0;i<n;i++)
	{
		if(mp1[arr[i]]==1 || arr[i]>n)
		{

			arr[i]= tmp.back();
			tmp.pop_back();
		}
		else
		{
			mp1[arr[i]]=1;
		}
		
	}
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}


