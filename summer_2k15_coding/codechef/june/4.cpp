
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
	ll T;
	cin>>T;
	while(T--)
	{
		int N,i,j,k,l,sumx=0,sumy=0,minx,maxx,x,y,M,miny,maxy,flag=0,ans; 
		int count[100009]={0};
		vector<pair<int,int> > Ans;
		cin>>N;
		for(i=0;i<N;i++)
		{
			ans= (-1*99999);
			cin>>M;
			for(j=0;j<M;j++)
			{

				cin>>x>>y;
					if(x>ans)				
					ans=x;
				
			}
			
			Ans.push_back(make_pair(ans,i));
			//cout<<ans<<" ";
					
		}
	sort(Ans.begin(),Ans.end());
	for(i=0;i<N;i++)
		{

//				cout<<Ans[i].first<<endl;
			count[Ans[i].second]=i;
		}
		for(i=0;i<N;i++)
		{
			cout<<count[i]<<" ";
		}
		cout<<endl;
		
	}
	return 0;
}