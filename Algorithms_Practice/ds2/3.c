#include<stdio.h>
#include<stdlib.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int H[1000]={-1};
	int i,j,x,k,l,h1[100],h2[100],m,n;
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
	scanf("%d %d",&h1[i],&h2[i]);
	for(i=0;i<m;i++)
	{
		if(H[h1[i]]==-1)
		{	H[h1[i]]=i;
		continue;
		}
		k=i;
		else if(H[h2[i]]==-1)
		{		H[h2[k]]=i;
			continue;
		}
		
		else if(H[h1[k]]!=-1 && H[h2[k]]!=-1)
		{
			while(H[h1[k]]!=-1 && )
			x=H[h1[k]];
			H[h1[k]]=k;














	}
	return 0;
}

