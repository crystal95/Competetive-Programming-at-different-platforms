using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
typedef long long int  ll;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		int i,cnt=0,l=str.length();
		int map[26][26]={0};
		for(i=0;i<l-1;i++)
		{
			if(map[str[i]-'A'][str[i+1]-'A']==0)
			{
				map[str[i]-'A'][str[i+1]-'A']=1;
				cnt++;
			}
		}
		cout<<cnt<<endl;
	}
		return 0;

}
