using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
char gen(char a,char b)
{
	char c;
	while(1)
	{
		long long int x=rand()%26;
		c=char(x+'a');
		if(c!=a && c!=b)
			return c;
	}
}

int main()
{
	long long int i, j, k, l,n ,t,cnt=0,x;
	
	cin>>n>>t;
	string str1,str2,final;
	cin>>str1>>str2;
	l=str1.length();

	x=n-t;

	for(i=0;i<n;i++)
	{
		final.push_back('A');
	}
		
		for(i=0;i<n;i++)
		{
			if(x==0)
			break;		
			if(str1[i]==str2[i])
			{
				final[i]=str1[i];
				x--;
			}	
			
		} 
	x=x*2;
	
	for(i=0;i<n;i++)
	{
		if(x==0)
			break;
		if(str1[i]!=str2[i])
		{
			if(x%2==0)
			final[i]=str1[i];
			else
			final[i]=str2[i];
			
			x--;
						
		}
	}
	if(x==0)
	{
			for(i=0;i<n;i++)
			{
				if(final[i]=='A')
					final[i]=gen(str1[i],str2[i]);
			}
			cout<<final<<endl;
	}
	else
		cout<<"-1"<<endl;
return 0;
}

