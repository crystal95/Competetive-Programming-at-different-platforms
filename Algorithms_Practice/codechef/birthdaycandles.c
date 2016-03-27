#include<stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int i,j,k=0,l,n,temp[10]={0},flag=0,N1,final=0;
		int arr[10]={0};
		int N=0;
		for(i=0;i<10;i++)
		{
			scanf("%d",&arr[i]);
		}
		while(flag==0)
		{
			for(i=0;i<10;i++)
				temp[i]=0;
			N1=N;
			while(N1>0)
			{
				temp[N1%10]++;
				if(arr[N1%10]<temp[N1%10])
				{
					flag=1;
					final=N;
					break;

				}

				N1=N1/10;
			}
			if(flag==1)
				break;
			for(i=0;i<10;i++)
			{
				if(arr[i]<temp[i])
				{
					flag=1;
					final=N;
					break;

				}

			}
			N++;

		}

		printf("%d\n",final);
	}
	return 0;
}




