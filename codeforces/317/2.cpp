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
	int i,j,ans=0,k,l,m,n,s,cntb=0,cnts=0,cnt=0,a,b,flag;
	char ch;
	cin>>n>>s;
	vector< pair<int ,int> > brr;
	vector< pair<int ,int> > srr;
	vector< pair<int ,int> > tmp;
	for(i=0;i<n;i++)
	{
		cin>>ch>>a>>b;
		if(ch=='S')
		{
			brr.push_back(make_pair(a,b));
			cntb++;
		}
		else
		{
			srr.push_back(make_pair(a,b));
			cnts++;
		}
	}
	sort(brr.begin(),brr.end());
flag=0;
	for(i=0;i<cntb-1;i++)
	{
		
		if(brr[i].first==brr[i+1].first)
		{
			cnt+=brr[i].second;
			flag=1;
		}
		else
		{
			//cout<<'B'<<" "<<arr[i].first<<cnt<<endl;
			if(flag!=0)
			tmp.push_back(make_pair(brr[i].first,cnt+brr[i].second));
		else
			tmp.push_back(make_pair(brr[i].first,brr[i].second));
			flag=0;
			ans++;
			cnt=0;
		}
		if(ans>=s)
		{
			break;
		}

	}
	if(ans<s && cntb>0)
	{
		//cout<<'B'<<" "<<brr[cntb-1].first<<cnt<<endl;
		if(flag==1)
		tmp.push_back(make_pair(brr[cntb-1].first,cnt+brr[cntb-1].second));
	else
		tmp.push_back(make_pair(brr[cntb-1].first,brr[cntb-1].second));

	}
	reverse(tmp.begin(),tmp.end());
	vector<pair<int ,int> > ::iterator it;
	for(it=tmp.begin();it!=tmp.end();it++)
	{
		cout<<'S'<<" "<<it->first<<" "<<it->second<<endl;
	}

	cnt=0;flag=0;ans=0;
	sort(srr.rbegin(),srr.rend());
	for(i=0;i<cnts-1;i++)
	{
		
		if(srr[i].first==srr[i+1].first)
		{
			cnt+=srr[i].second;
			flag=1;
		}
		else
		{
			if(flag!=0)
			cout<<'B'<<" "<<srr[i].first<<" "<< cnt+srr[i].second<<endl;
			else
			cout<<'B'<<" "<<srr[i].first<<" "<< srr[i].second<<endl;
			//tmp.push_back(make_pair(arr[i].first,cnt));
			flag=0;
			ans++;
			cnt=0;
		}
		if(ans>=s)
		{
			break;
		}

	}
	if(ans<s && cnts>0)
	{
		if(flag==1)
		cout<<'B'<<" "<<srr[cnts-1].first<<" "<<cnt+srr[cnts-1].second<<endl;
		else
		cout<<'B'<<" "<<srr[cnts-1].first<<" "<<srr[cnts-1].second<<endl;
	
	}
	
	return 0;
}
