
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
 

int main()
{
	
	long long int i,mod,j,k,l,flag=0,n,r,xx,sum=0,count=0,m,minx,maxx,x,cv;
	cin>>n>>l>>r>>xx;
	vll arr;
	//arr.push_back
	for(i=0;i<n;i++)
	{
		cin>>x;
		arr.push_back(x);
	}
	sort(arr.begin(),arr.end());
	x=pow(2,n);
	for(i=0;i<x;i++)
	{
		vi b;
		m=i;sum=0;cv=0;maxx=0;minx=999999;
		for(j=0;j<n;j++)
		{

			mod=m%2;
			
			if(mod!=0)
			{
				cv++;
				sum+=arr[j];
				
				if(maxx<arr[j])
					maxx=arr[j];
				if(minx>arr[j])
					minx=arr[j];
			}
			
			
			m=m/2;
		}
		
		if(maxx-minx>=xx && sum>=l && sum<=r && cv>=2)
			{
				count++;
				
			}


	}
	cout<<count<<endl;
return 0;

}
	