using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
#include <queue>
#include <math.h> 
int main()
{
	long long int i,j,k,l,m,n,ans=0,flag=0,x,prev;
	 	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		if(i==0)
			ans+=abs(x);
		else
		{
			ans=ans+abs(prev-x);
		}
		prev=x;
	}


	cout<<ans<<endl;
	return 0;
}