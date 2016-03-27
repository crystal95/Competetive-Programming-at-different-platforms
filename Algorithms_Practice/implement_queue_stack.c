#include<stdio.h>
int main()
{
	int i,b,j,k=0,l,r,t,K,q;
	char imp[100],unimp[100],n,option;
	while(1)
	{
		scanf("%c",&option);

		if(option=='a')
		{
			printf("i m doing queue,enter a no.\n");
			scanf("%c",&n);
			imp[k]=n;
			k++;
		}
		if(option=='b')
		{
			if(imp[0]==NULL)
			{
				printf("sorry");
			}
			else
			{
			k--;
			printf("i m doing dequeue");
			r=0;
			for(t=k;t>0;t--)
			{
				unimp[r]=imp[t];
				r++;
			} 
			r--;
			
			for(t=r;t>=0;t--)
			{
				imp[K]=unimp[t];
				K++;
			}
			k=K;

			}
		}
		if(option=='c')
		{
			printf("i m printing");
			for(q=0;q<k;q++)
			{
				printf("%c",imp[q]);

			}
		}
	}
	return 0;

}
