#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int compare(const void *a,const void *b)
{
	return ( *(char *)a-*(char *)b);
}
void swap(char *a,char *b)
{
	char t;
	t=*a;
	*a=*b;
	*b=t;
}
int findceil(char str[],char first,int l,int h)
{
	int i;
	int ceilindex=l;
	for(i=l+1;i<=h;i++)
	{
		if(str[i]>first && str[i]<str[ceilindex])
			ceilindex=i;
	}
		return ceilindex;
}
void print(char str[])
{
	int i,l;
	l=strlen(str);
	qsort(str,l,sizeof(str[0]),compare);
	bool isfinished=false;
	while(isfinished!=true)
	{
		cout<<str<<endl;
		int i;
		for(i=l-2;i>=0;i--)
		{
			if(str[i]<str[i+1])
			break;
		}
		if(i==-1)
			isfinished=1;
		else
		{
			int ceil=findceil(str,str[i],i+1,l-1);
			swap(&str[i],&str[ceil]);
			qsort(str+i+1,l-i-1,sizeof(str[0]),compare);

		}
	}
}
int main()
{
	int i,j,k,l;
	char str[100];
	cin>>str;
	print(str);
	return 0;
}
	
