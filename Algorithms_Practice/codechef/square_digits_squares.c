#include<stdio.h>
#include<math.h>
int main()
{
	long long int flag=0,count=0,temp;
	long long int k,m,n,Z,K,k1;
	for(k1=0;k1<=10000000000;k1++)
	{
		k=k1;
		flag=0;
		K=sqrt(k);
		Z=K*K;
		if(Z==k)
		{
			while(k>0)
			{
				temp=k%10;
				if(temp!=0 && temp!=1 && temp!=4 && temp!=9)
				{	flag=1;
					break;
				}
				k=k/10;
			}
			if(flag==0)
			{
				count++;
				printf("%lld ",k1);


			}

		}
	}
	printf("%lld\n",count);


	return 0;
}


