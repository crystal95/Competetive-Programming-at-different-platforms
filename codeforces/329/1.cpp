using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
int main()
{
	string str;
	int flag=0,tmp1=0,tmp2=0,i,j,n;
	char ch1,ch2;
	int cnt[26][26]={0};
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>str;
		flag=0;tmp1=0;tmp2=0;
		for(j=0;j<str.size();j++)
		{
			if(tmp1==0)
			{
				ch1=str[j];
				tmp1=1;
			}
			else if(tmp2==0 && ch1!=str[j])
			{
				ch2=str[j];
				tmp2=1;
			}
			else if(tmp1==1 && tmp2==1 && ch1!=str[j] && ch2!=str[j])
			{
				flag=1;
				break;
			}
		}

		if(flag==0 && tmp1==1 && tmp2==1)
		{
			cnt[ch1-'a'][ch2-'a']+=str.size();
			cnt[ch2-'a'][ch1-'a']+=str.size();
		}

		if(flag==0 && tmp1==1 && tmp2==0)
		{
			cnt[ch1-'a'][ch1-'a']+=str.size();
			
		}

	}
	int max=-1;
	for(i=0;i<26;i++)
	{
		for(j=0;j<26;j++)
		{
			if(max<(cnt[i][j]))
				max=cnt[i][j];
		}
	}
	for(i=0;i<26;i++)
	{
		for(j=i+1;j<26;j++)
		{
			if(max<cnt[i][i]+cnt[j][j]+cnt[i][j])
				max=cnt[i][i]+cnt[j][j]+cnt[i][j];
		}
	}
	cout<<max<<endl;

	return 0;
}

	