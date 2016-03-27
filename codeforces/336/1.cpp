using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
int main()
{
	int n,s,i,ans=0,f,t;
	cin>>n>>s;
	vector<int> pass(s+1,0);
	for(i=0;i<n;i++)
	{
		cin>>f>>t;
		if(pass[f]<t)
			pass[f]=t;
	}

	for(i=s;i>0;i--)
	{
		
		if(ans<pass[i])
		{
			ans=ans+pass[i]-ans;
		}
		//cout<<ans<<endl;
		ans++;
	}
	cout<<ans<<endl;
	return 0;
}