
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

	long long int i,j,k,l,n,m,min1,min2,min3,max1,max2,max3,ans1,ans2,ans3,tmp=0;
	cin>>n;
	cin>>min1>>max1>>min2>>max2>>min3>>max3;
	tmp=min1+min2+min3;ans1=min1;ans2=min2;ans3=min3;

	if(tmp<n)
	{
		if(tmp-min1+max1<=n)
		{
			tmp=tmp-min1+max1;
			ans1=max1;
		}
		else 
		{
			tmp=tmp-min1;
			ans1=n-tmp;
			tmp+=n-tmp;		
			
		}
	}
	if(tmp<n)
	{
		if(tmp-min2+max2<=n)
		{
			tmp=tmp-min2+max2;
			ans2=max2;
		}
		else 
		{
			tmp=tmp-min2;
			ans2=n-tmp;
			tmp+=n-tmp;		
		
		}
	}
	if(tmp<n)
	{
		if(tmp-min3+max3<=n)
		{
			tmp=tmp-min3+max3;

			ans3=max3;
		}
		else 
		{
			tmp=tmp-min3;
			ans3=n-tmp;
			tmp+=n-tmp;			
			
		}
	}
	cout<<ans1<<" "<<ans2<<" "<<ans3<<endl;


return 0;
}