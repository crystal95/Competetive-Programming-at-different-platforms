#include<stdio.h>
#include<string.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int flag=0;
		int i,j,k,l,m;
		int arr1[26]={0},arr2[26]={0},arr[26]={0};
		char str[1000]="";
		scanf("%s",str);
		l=strlen(str);
		for(i=0;i<l/2;i++)
		{
			arr1[str[i]-97]++;

		}
		if(l%2==0)
		{
		for(i=l/2;i<l;i++)
		{
			arr2[str[i]-97]++;
		}
		}
		else
		for(i=l/2+1;i<l;i++)
		{
			arr2[str[i]-97]++;
		}
		/*for(i=0;i<26;i++)
		{
			printf("%d ",arr2[i]);
		}

			printf("\n");
	*/
		for(i=0;i<26;i++)
		{
			arr[i]=arr1[i]-arr2[i];
			if(arr[i]!=0)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
			printf("NO\n");
		else
			printf("YES\n");
	}
	return 0;
}

		

