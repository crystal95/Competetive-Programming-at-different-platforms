#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,k,I,l,m,n,delete,search,x,flag=0,T,index,p;
	int arr[17];
	for(l=0;l<17;l++)
		arr[l]=0;
	while(1)
	{
		flag=0;
		scanf("%d",&T);
		if(T==1)
		{
			scanf("%d",&n);
			I=0;
			index=(n+(I*I))%17;
			while(arr[index]!=0 || arr[index]==-1)
			{
				I++;
				index=(n+(I*I))%17;
			}
			arr[index]=n;
		}
		else if(T==2)
		{
			scanf("%d",&search);

			//x=n%17;
			I=0;
			index=(search+(I*I))%17;
			while(arr[index]!=0)
			{
				if(arr[index]==search)
				{
					printf("found\n");
					flag=1;
					break;
				}
				I++;
				index=(search+(I*I))%17;
			}
			if(flag==0)
				printf("not found\n");
		}
		else if(T==3)
		{
			scanf("%d",&delete);

			I=0;
			index=(delete+(I*I))%17;
			while(arr[index]!=0)
			{
				if(arr[index]==delete)
				{		arr[index]=-1;
						break;
				}
				I++;
				index=(delete+(I*I))%17;
			}
		}
		else if(T==4)
		{
			for(i=0;i<17;i++)
				printf("%d ",arr[i]);
			printf("\n");
			break;
		}

	}
	return 0;
}


