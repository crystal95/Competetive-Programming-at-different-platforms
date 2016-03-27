using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>

bool chk(char *a , char *b, char *c)
{
	bool tmp1=false,tmp2=false;

	if((*a=='\0') && (*b=='\0') && (*c=='\0') )
		return true;
	
	if(*c=='\0')
		return false;

	if((*a==*c))
		tmp1=chk(a+1,b,c+1);
	if((*b==*c))
		tmp2=chk(a,b+1,c+1);

		return tmp1||tmp2;


}
int main()
{
	int i ,j;
	char a[100], b[100] , c[100];
	cin>>a>>b>>c;
	int l1=strlen(a);
	int l2=strlen(b);
	int l3=strlen(c);
	
	bool x=false,y=false;
	bool dp[l1+1][l2+1];
		for(i=0;i<l1;i++)
		{
			for(j=0;j<l2;j++)
			{
				dp[i][j]=false;
			}
		}
	
	if(l1+l2!=l3)
		cout<<"-1"<<endl;
	else
	{
		for(i=0;i<l1;i++)
		{
			for(j=0;j<l2;j++)
			{
				x=false,y=false;
				if(a[i]==c[i+j+1])
				{
					if(i==0)
					x=true;
					else
					x=dp[i-1][j];
				}
				if(b[j]==c[i+j+1])
				{
					if(j==0)
					y=true;
					else
					y=dp[i][j-1];
				}
			dp[i][j]= x||y;

			}
		}
		if(dp[l1-1][l2-1])
			cout<<"Yes"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;

}