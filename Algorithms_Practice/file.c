#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *finp,*fout;
	char a[100],b[100],c;
	finp=fopen("test.c","r");
	fout=fopen("ans3.c","w");
	while((c=fgetc(finp))!=EOF)

	{	fputc(c,fout);
		//putchar(c);
	}
    
	fclose(finp);
	fclose(fout);
	return 0;
}
