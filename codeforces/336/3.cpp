using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>  
#include <bits/stdc++.h>
#include <tr1/unordered_map>
using namespace std::tr1;
long long int max_(long long a,long long b)
{
	if(a>b)
		return a;
	else
		return b;
}
int main()
{
	long long int i,n,a,b,maxe=0;
	cin>>n;
	int mymap[1000001]={0};
	for(i=0;i<n;i++)
	{
		cin>>a>>b;
		mymap[a]=b;
	}
	vector<long long int> alive(1000001,-1);
	
	if(mymap[0]!=0)
	alive[0]=1;
	else
	alive[0]=0;
	//it=mymap.begin();
	
	for(i=1;i<=1000000;i++)
	{
		//it=mymap.find(i);
		if(mymap[i]!=0)
		{
			if((i-mymap[i]-1)>=0)
			alive[i]=(1+alive[i-mymap[i]-1]);
			else
			alive[i]=1;

		}
		else
		alive[i]=alive[i-1];

	}
	for(i=0;i<=1000000;i++)
	{
		if(maxe<alive[i])
			maxe=alive[i];
	}
	
	 cout<<n-maxe<<endl;
	 return 0;
}
