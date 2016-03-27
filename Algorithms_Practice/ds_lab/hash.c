#include<stdio.h>
int main()
{
	int i,j,k,l,m,n,delete,search,x,flag=0,T,index,p;
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
//	x=n%17;
		index=(n)%17;
		while(arr[index]!=0 || arr[index]==-1)
		{
			index++;
		}
		arr[index]=n;
	}
	else if(T==2)
	{
		scanf("%d",&search);

	//x=n%17;
		index=(search)%17;
		while(arr[index]!=0)
		{
			if(arr[index]==search)
				printf("found\n");
			flag=1;
			break;
			index=(index+1)%17;
		}
		if(flag==0)
		printf("not found\n");
	}
	else if(T==3)
	{
		scanf("%d",&delete);

	//x=n%17;
		index=(delete)%17;
		while(arr[index]!=0)
		{
			if(arr[i]==delete)
		arr[i]=-1;
			index=(index+1)%17;
		}
	}
	else if(T==4)
	{
		for(i=0;i<17;i++)
			printf("%d ",arr[i]);
		printf("\n");
	}

	}
	return 0;
}


