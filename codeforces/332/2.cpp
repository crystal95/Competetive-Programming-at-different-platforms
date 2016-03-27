using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>

int main()
{

	int i,j,k,l,n,m,x;
	cin>>n>>m;

	vector<pair<int,int> > chk(100005);

	vector<int> tmp(100005);
	vector<int> ans;
	for(i=1;i<=n;i++)
	{
		chk[i].first=0;
		chk[i].second=0;
	}

	for(i=1;i<=n;i++)
	{
		cin>>x;
		chk[x].first=i;
		chk[x].second=chk[x].second+1;
	}
	int flag=0,flaga=0;
	for(i=1;i<=m;i++)
		cin>>tmp[i];
	for(i=1;i<=m;i++)
	{
		x=tmp[i];
		if(chk[x].second==0)
		{
			cout<<"Impossible";
			flag=1;
			break;
		}	
		if(chk[x].second>1)
		{
			flaga=1;
		}
		ans.push_back(chk[x].first);
	}
	if(flag==0)
	{
		if(flaga==1)
			cout<<"Ambiguity";
		else{
		cout<<"Possible"<<endl;
		for(i=0;i<m;i++)
			cout<<ans[i]<<" ";
	}
	}
	cout<<endl;

	return 0;
}