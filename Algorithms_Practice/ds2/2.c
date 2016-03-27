#include<stdio.h>
int main()
{int T;
	scanf("%d",&T);
	while(T--)
	{
		int i,j,k,l,N,A,B,a=0,b=0;
		int arA[10000]={0};
		int arB[10000]={0};
		int flag=0;

		scanf("%d %d %d",&N,&A,&B);
		for(i=A;i>0;i=k)
		{
			arA[a++]=i;
			k=i/2;
		}

		for(i=B;i>0;i=k)
		{

			arB[b++]=i;
			k=i/2;
		}
			for(j=0;j<b;j++)
			{
				for(k=0;k<a;k++)
				{		
				if(arB[j]==arA[k])
				{	flag=1;
					break;
				}
				}
				if(flag==1)
					break;
			}
			printf("%d\n",arB[j]);
		
	}
	return 0;
}


