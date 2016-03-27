
using namespace std;

#include <map>
#include <numeric>
#include <string>
#include <functional>
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <string.h>
#include <math.h>

#define fr(i,n) for(i=0;i<n;i++)

typedef vector<int> vi;
typedef vector<long long int > vll;
typedef long long int ll;
typedef vector<unsigned long long int > vull;
typedef unsigned long long int ull;
int max(int a,int b)
{
	if(a>b)
		return a;
	else 
		return b;
}
int main()
{
	int i,j,k,l,n,m,a,b,fst=0,sec=0,N,min=99999,sum=0,ans=0;
	cin>>N;
	vi dp1;
	vi dp2;
	
	
	for(i=0;i<N;i++)
	{
		cin>>a>>b;
		if (a==1)
		{
			dp1.push_back(b);
		}
		else 
		{
			dp2.push_back(b);
		}
	}
	

	
	sort(dp1.rbegin(),dp1.rend());
	sort(dp2.rbegin(),dp2.rend());
	//dp1.push_back(0);
	//dp2.push_back(0);

	int size1=dp1.size();
	int size2=dp2.size();
	ans=0;
	sum=0;
	for(m=0;m<=size1;m++)
	{
		for(n=0;n<=size2;n++)
		{
			sum=0;
			for(j=size1-1;j>=m;j--)
			{
				sum+=dp1[j];
			}
			for(j=size2-1;j>=n;j--)
			{
				sum+=dp2[j];
			}
			ans=((m)+2*(n));
			if((sum<=ans) && (ans<=min) )
			{
				min=ans;
			}
		}
	}
	cout<<min<<endl;
	return 0;
}


