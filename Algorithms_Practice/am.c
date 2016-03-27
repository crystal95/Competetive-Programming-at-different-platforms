#include<stdio.h>
#include<string.h>
void upper(char str[100])
{
	int i;
	for(i=0;str[i]!=NULL;i++)
	{
		if(str[i]>96 && str[i]<123)
		{
			str[i]=str[i]-32;
		}
	}
		printf("%s",str);
}

int main()
{
	int i,j,k,l,m;
	char str[100];
	printf("enter a string : ");
	gets(str);
	l=strlen(str);
	printf("%d",l);
	upper(str);
	return 0;
}
	
