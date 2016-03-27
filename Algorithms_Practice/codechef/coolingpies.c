#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int i,j,temp,count=0;
		int N;
		int wt[100]={0},lmt[100]={0};
		scanf("%d",&N);
		for(i=0;i<N;i++)
			scanf("%d",&wt[i]);
		for(i=0;i<N;i++)
			scanf("%d",&lmt[i]);
		for(i=0;i<N;i++)
		{
			for(j=i+1;j<N;j++)
			{
				if(wt[i]>wt[j])
				{
					temp=wt[i];
					wt[i]=wt[j];
					wt[j]=temp;
				}
			}
		}
		for(i=0;i<N;i++)
		{
			for(j=i+1;j<N;j++)
			{
				if(lmt[i]>lmt[j])
				{
					temp=lmt[i];
					lmt[i]=lmt[j];
					lmt[j]=temp;
				}
			}
		}
		for(i=0;i<N;i++)
		{
			for(j=0;j<N;j++)
			{
				if(wt[i]<=lmt[j])
				{
					count++;
					lmt[j]=0;
					break;
				}
			}
		}
		printf("%d\n",count);
	}
	return 0;
}

