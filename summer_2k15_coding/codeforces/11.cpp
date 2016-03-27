
using namespace std;

#include <map>
#include <numeric>
#include <string>
#include <functional>
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <string.h>

#define fr(i,n) for(i=0;i<n;i++)

typedef vector<int> vi;
typedef vector<long long int > vll;
typedef long long int ll;
typedef vector<unsigned long long int > vull;
typedef unsigned long long int ull;

int main ()
{
	int i,j,k,l,flag=0;
	char str[100007];
	cin >> str;
	l=strlen(str);
	for(i=0;i<l-3;i++)
	{
		if(str[i]=='A' && str[i+1]=='B')
		{
			for(j=i+2;j<l-1;j++)
			{
				if(str[j]=='B' && str[j+1]=='A')
				{
					flag=1;
					break;
				}
			}
			if(flag==1)
				break;

		}
		if(str[i]=='B' && str[i+1]=='A')
		{
			for(j=i+2;j<l-1;j++)
			{
				if(str[j]=='A' && str[j+1]=='B')
				{
					flag=1;
					break;
				}
			}
			if(flag==1)
				break;

		}

	}
	if(flag==1)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}