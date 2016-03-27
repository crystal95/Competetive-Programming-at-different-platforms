#include<stdio.h>
#include<stdlib.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int i,j,k,l,n;
		long long arr[100000],min=1000000000;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%lld",&arr[i]);
		}
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
					if(abs(arr[i]-arr[j])<min)
						min=abs(arr[i]-arr[j]);
			}
		}
		printf("%lld\n",min);
	}
	return 0;
}



