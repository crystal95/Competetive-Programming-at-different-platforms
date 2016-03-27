#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("yes");
	if(i==1)
		continue;
	printf("%d",i);
	}
	return 0;
}
