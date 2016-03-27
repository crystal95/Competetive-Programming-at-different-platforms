using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
int main()
{
	long long int i,j,k,l,m,n,x,y,z,ans=999999999;
	cin>>x>>y>>z;
	ans=min(ans,2*(x+y));
	ans=min(ans,2*(x+z));
	ans=min(ans,2*(z+y));
	ans=min(ans,(x+y+z));

	cout<<ans<<endl;
	return 0;
}