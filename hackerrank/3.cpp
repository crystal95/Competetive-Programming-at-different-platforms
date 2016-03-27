using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
#include <string>
string ans;
int maxe=1;
void call(string &str,int start,int end,string &final,string &ans)
{
	
	
	if(start>end)
	{	
		if(maxe<l)
		{
			maxe=l;
			ans=final;

		}
		return ;
	}
	if(chk1[start])
	if(start==end)
	{
		final.push_back(str[start]);
		 l=final.length();
		if(maxe<l)
		{
			maxe=l;
			ans=final;
		}
		final.erase (final.begin()+l-1);
		return ;
	}
	if(str[start]==str[end])
	{
		final.push_back(str[start]);
		final.push_back(str[start]);
		l=final.length();
		call(str,start+1,end-1,final,ans);
		final.erase (final.begin()+l-1);
		final.erase (final.begin()+l-2);
	}
	else
	{	
		call(str,start+1,end,final,ans);
		call(str,start,end-1,final,ans);	
	}
	int l2=ans.size();
	
	if(l2%2==0)
	chk[start][end]=27;
	else
	chk[start][end]=ans[i]-'a';

}
int main()
{
	int chk1[1000][1000];
	int chk2[1000][1000];
	int T;
	cin>>T;
	while(T--)
	{

		int i;
		string a,b;
		cin>>a>>b;
		int l1=a.length();
		int l2=b.length();
		string final1="",ans1,ans2;
		string final2="";
		call(a,0,l1-1,final1,ans1);
		maxe=-1;
		call(b,0,l2-1,final2,ans2);
		//cout<<ans1<<endl;
		//cout<<ans2<<endl;
		int len1=ans1.length();
		int len2=ans2.length();
		if(len1%2==0 && len2%2==0)
			cout<<len1+len2<<endl;
		else if(len1%2!=0 && len2%2==0)
			cout<<len1+len2<<endl;
		else if(len1%2==0 && len2%2!=0)
			cout<<len1+len2<<endl;
		else
		{
			int flag=0;
			int map1[26]={0};
			int map2[26]={0};
			for(i=0;i<l1;i++)
			{
				map1[ans1[i]-'a']++;
			}
			for(i=0;i<l1;i++)
			{
				map2[ans2[i]-'a']++;
			}
			for(i=0;i<l1;i++)
			{
				if(map1[i]%2!=0 && map2[i])
				{
					cout<<len1+len2<<endl;
					flag=1;
					break;
				}
			}
			if(flag==0)
				cout<<len1+len2-2<<endl;
		}


	}
	return 0;
}