#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k,l,N;
	char str[1000],out[100];
	scanf("%d",&N);
	while(N--)
	
	{
		l=0;
	scanf("%s",str);
	l=strlen(str);
	if(l>10)
	{
		if(l-2>9)
		{
		out[0]=str[0];
		out[3]=str[l-1];
		out[1]=48+(l-2)/10;
		out[2]=48+(l-2)%10;

	for(i=0;i<4;i++)
		printf("%c",out[i]);
		}
		else{
		out[0]=str[0];
		out[2]=str[l-1];
		out[1]=48+(l-2)%10;
		
	for(i=0;i<3;i++)
		printf("%c",out[i]);
		}
	printf("\n");
	}
	else{
		printf("%s\n",str);
	}
	}
	return 0;
}
