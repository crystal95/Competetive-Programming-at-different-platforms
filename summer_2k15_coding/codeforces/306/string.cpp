
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
	int i,j,k,l,n,m,flag1=0,flag2=0,flag3=0,flag4=0,flag5=0,ind1,ind2,ind3,ind4;
	char str[100008];
	cin>>str;
	l=strlen(str);
	for(i=0,j=l-1;i<l-1,j>=0;i++,j--)
	{
		if(i+1<j-1)
		{
			if(str[i]=='A' && str[i+1]=='B' && flag1==0)
			{
				flag1=1;
				ind1=i;
				//ind=i+1
			}
			else if(str[i]=='B' && str[i+1]=='A' && flag2==0)
			{
				flag2=1;
				ind2=i;
				//ind=i+1;
			}
			if(str[j]=='A' && str[j-1]=='B' && flag3==0)
			{
				flag3=1;
				ind3=j;
			}
			else if(str[j]=='B' && str[j-1]=='A' && flag4==0)
			{
				flag4=1;
				ind4=j;
			}
			if((flag1==1 && flag3==1) || (flag2==1 && flag4==1)|| (flag1==1 && flag2==1 && ((ind1+1<ind2) || ind2+1<ind1)) || (flag4==1 && flag3==1 && ((ind3-1>ind4) || ind4-1>ind3)))
				{	flag5=1;
					break;
				}
		}

	}
	if(flag5==1)
		cout<<"YES"<<endl;
	else 
		cout<<"NO"<<endl;
	return 0;
}