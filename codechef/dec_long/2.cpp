using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		string str1,str2;
		cin>>str1>>str2;
		int i,j;
		int ans[100][100]={0};
		int l1=str1.length();
		int l2=str2.length();
		for(i=1;i<=l1;i++)
		{
			for(j=1;j<=l2;j++)
			{
				if(str1[i-1]==str2[j-1])
				{
					ans[i][j]=ans[i-1][j-1]+1;
				}
				else
				{
					ans[i][j]=max(ans[i-1][j],ans[i][j-1]);
				}
			}
		}
		i=l1;j=l2;
		while(i>0 && j>0)
		{
			if(ans[i][j]>ans[i-1][j] && ans[i][j]>ans[i][j-1])
			{
				cout<<str1[i-1];
				i--;j--;
			}
			else
			{
				if(ans[i][j]==ans[i-1][j])
				{
					i--;
				}	
				else if(ans[i][j]==ans[i][j-1])
				{
					j--;
				}	
				
			}

		}
		cout<<ans[l1][l2]<<endl;
	}
		return 0;
}

