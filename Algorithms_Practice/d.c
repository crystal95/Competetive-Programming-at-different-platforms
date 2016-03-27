#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int b,n,t,N,p=0,i,j,k,l;
	double ans=0,y;
	int pro=1;
	scanf("%s",a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{

		if(a[i]=='.')
		break;
	}
	for(j=i-1;j>=0;j--)
	{
		ans=ans+(a[j]-'0')*pro;
		pro=pro*10;
	}
	y=(double)1/10;
	double c;
	c=0;
	for(k=i+1;k<l;k++)
	{
		c=(double)(a[k]-'0')*y;
		ans=ans+c;
		y=y/10;
	
	//printf("%lf %lf ",c,y);
	}
	printf("%lf\n",ans);
	return 0;
}
