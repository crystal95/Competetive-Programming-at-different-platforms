using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
int main()
{
	int i,j,k,l,m,n,x,v=0;
	 std::map<int ,pair<int,int> >::iterator it;
 	vector<int> arr;	
	pair<int,int> tmp;
	map<int, pair<int ,int > > mymap;
	cin>>n;
	int stat[2*n+1];
	int ans[2*n+1];
		for(i=0;i<=2*n;i++)
		{
			stat[i]=0;
			ans[i]=0;
		}

	for(i=2;i<=2*n;i++)
	{
		for(j=1;j<i;j++)
		{
			cin>>x;
			arr.push_back(x);
			tmp.first=i;
			tmp.second=j;
			mymap[x]=tmp;
			v++;
		}
	}
	
	sort(arr.begin(),arr.end());
	reverse(arr.begin(),arr.end());
	/*for(i=0;i<arr.size();i++)
		cout<<arr[i]<< " ";*/
	for(i=0;i<v;i++)
	{
		it=mymap.find(arr[i]);
		if(stat[it->second.first]==0 && stat[it->second.second]==0 )
			{
				ans[it->second.first]=it->second.second;
				ans[it->second.second]=it->second.first;
				stat[it->second.first]=1;
				stat[it->second.second]=1;
			}
	}
	for(i=1;i<=2*n;i++)
	{
		cout<<ans[i]<<" ";
	}
	cout<<endl;
	return 0;
}