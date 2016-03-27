using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
int main()
{
	int i,j,k,l,n,m,flag=0;
	long long int x;
	scanf("%d %d",&n,&m);
		if(n>=m)
		{
			for(i=0;i<n;i++)
		scanf("%lld",&x);
				printf("YES\n");
		}

	else
	{
		vector<long long int>  par(m+1,0),newpar(m+1,0);
		for(i=0;i<n;i++)
		{
			scanf("%lld",&x);
			for(j=0;j<m;j++)
			{
				if(par[j]==1)
				{
					newpar[(j+x)%m]=1;
				}				
			}
			newpar[x%m]=1;
			par=newpar;
			if(par[0]==1)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}

	