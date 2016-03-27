using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
int main()
{
	long long int x,n,i,j,k,cnt=0;
	cin>>n>>x;
	k=min(x,n);
	for(i=1;i<=min(x,n);i++)
	{
		if(x%i==0)
		{
			if(x/i<=k)
				cnt++;
		}

	}
	cout<<cnt<<endl;
	return 0;
}