#include<stdio.h>
int main()
{
	int i,j,k,l;
	FILE *finp;
	char ch;
	FILE *fout;
	finp=fopen("inp.c","r");
	fout=fopen("ou.c","w");
	while((ch=fgetc(finp))!=EOF)
		fputc(ch,fopen);
	fclose(finp);
		fclose(fou);
		return 0;
}



