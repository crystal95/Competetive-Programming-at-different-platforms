
#include <numeric>
#include <string>
#include <functional>
#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
//#include<pair>

using namespace std;

#define fr(i,n) for(i=0;i<n;i++)

typedef vector<int> vi;
typedef vector<long long int > vll;
typedef long long int ll;
typedef vector<unsigned long long int > vull;
typedef unsigned long long int ull;

struct sort_pred {
    bool operator()(const std::pair<ll,ll> &left, const std::pair<ll,ll> &right) {
    	//if(left.first < right.first)
    		if(left.first == right.first)
    			return left.second > right.second;
    		return left.first < right.first;

    	//else
        //return left.second < right.second;
    }
};
int main ()
{
	ll i,j,k,l,n,x,y;
	cin>>n;
	vector< pair<ll ,ll > > arr;
	vector< pair<ll,ll > > final;
	vector< ll> ans;
	vector< pair<ll,ll> > :: iterator it;
	ll tmp[12]={0};
	vector<ll> :: iterator it1;
 for(i=1;i<=9;i++)
 {
 	
 	cin>>x;
 	arr.push_back(make_pair(x,i));
 }
 	sort(arr.begin(),arr.end(),sort_pred());
 	it = arr.begin();
 	 while(it!=arr.end())
 	{
 		
 		if(tmp[it->first]==0)
 		{
 			tmp[(*it).first]=1;
 			final.push_back(make_pair(it->second,it->first));

 			
 		}
			it++;
  	}
  	if(n<final[0].second)
  	{
  		cout<<"-1";
  	}
else{
 	//for(it=final.begin();it!=final.end();it++)
 	//cout<<it->first<<" "<<it->second<<endl;

 	while(n>0)
 	{
 		n=n-final[0].second;
 		ans.push_back(final[0].first);
 	}
 	x=final.size();
 	for(it1=ans.begin();it1!=ans.end()-1;it1++)
 	{
 		cout<<(*it1);
 	}
 	if(n==0)
 	{
 		cout<<(*it1);
 	}
 	
 	else
 	{
 		n=n+final[0].second;
 		i=0;
 		while(n>final[i].second)
 		{
 			i++;


 		}

 		if(i<x)
 		{
 			cout<<final[i].first;

 		}
 		else
 			cout<<final[x-1].first;
 	}
 }
 	cout<<endl;
 
 return 0;
}