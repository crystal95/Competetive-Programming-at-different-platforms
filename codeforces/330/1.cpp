using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
int main()
{
	int i,j,k,l,m,n,cnt=0;
	cin>>n>>m;
	char arr[n+1][2*m+1];

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=2*m;j++)
		{
			cin>>arr[i][j];
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=2*m;j+=2)
		{
			
			if(arr[i][j]=='0' && arr[i][j+1]=='0')
				continue;
			else
				cnt++;
		}
	}
	cout<<cnt<<endl;
	return 0;
}
