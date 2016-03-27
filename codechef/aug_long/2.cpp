using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
typedef long long ll;
bool check(char **str, level,type,vector<int> &ans,cnt)
{
	if(level==n && str[type][level]='.')
	ans.push_back(cnt);
	if(str[type][level+1]=='.')
	{
		first=chk(str,level+1,1-type,ans)
	}
	if(str[type+1][level]=='.')
	{
		second=chk(str,level,1-type,ans)
	}
	if(str[type+1][level+1]=='.')
	{
		third=chk(str,level+1,1-type,ans)
	}
}

int main()
{
	ll T;
	scanf("%lld",&T);
	while(T--)
	{
		char str[2][100005];
		cin>>str[0]>>str[1];
		vector<int> ans;
		bool first=false, second=false, third =false;
		if(str[0][0]=='.')
		{

			if(str[type][level+1]=='.')
			{
				first=chk(str,level+1,1-type,ans)
			}
			if(str[type+1][level]=='.')
			{
				second=chk(str,level,1-type,ans)
			}
			if(str[type+1][level+1]=='.')
			{
				third=chk(str,level+1,1-type,ans)
			}
		}
	}
	return 0;
}

