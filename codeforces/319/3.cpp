using namespace std;
#include <iostream>
#include <fstream>
#include <sstream>
 
#include <vector>
#include <set>
#include <bitset>
#include <map>
#include <deque>
#include <string>
 
#include <algorithm>
#include <numeric>
 
#include <cstdio>
#include <cassert>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
int main()
{
	int x,n,i,j,k,cnt=0,y,ans,m;
	cin>>n>>m;
	vector< int > arr(n+1);
	bool parent[n+1];
		bool newparent[n+1];
	
	for(i=0;i<n;i++)
	{
		cin>>arr[i];		
	}

	if(n>m)
		cout<<"YES"<<endl;

	else
	{
		
		for(i=0;i<n;i++)
		{
			parent[i]=false;
			newparent[i]=false;	
			arr[i]=arr[i]%m;	
		}
		
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(parent[j]==true)
			{
				newparent[(j+arr[i])%m]=true;
			}	
			if(parent[0]==true)
			break;			
				
		}
		
		if(parent[0]==true)
		break;
		newparent[arr[i]]=true;
		
		for(j=0;j<m;j++)
			parent[j]=newparent[j];

	}

	if(parent[0]==true)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}



	return 0;
}