using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
#include <algorithm>
typedef long long ll;
int main()
{
	ll i,j,k,n,ans,x;
	vector<int> arr;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		if(x==1)
			arr.push_back(i);
	}
	ans=1;
	for(i=1;i<arr.size();i++)
	{
		ans*=arr[i]-arr[i-1];
	}
	if(arr.size()==0)
		cout<<"0"<<endl;
	else if(arr.size()==1)
		cout<<"1"<<endl;
	else
	cout<<ans<<endl;
	return 0;
}