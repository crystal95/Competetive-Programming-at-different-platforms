
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
	int i,j,k,l,count=0;
char str1[100005];
char str2[100005],str3[100005];
cin>>str1>>str2;
l=strlen(str1);
for(i=0;i<l;i++)
{
	if(str1[i]=='0' && str2[i]=='0')
	{
		str3[i]='0';
	}
	if(str1[i]=='0' && str2[i]=='1')
	{
		str3[i]='1';
	}
	if(str1[i]=='1' && str2[i]=='0')
	{
		str3[i]='1';
	}
	if(str1[i]=='1' && str2[i]=='1')
	{
		str3[i]='0';

	}
	if(str3[i]=='1')
	{
		count++;
	}


}
if(count%2!=0)
{
	cout<<"impossible"<<endl;
}
else
{
	count==0;
	for(i=0;i<l;i++)
	{
		if(str3[i]=='0')
			cout<<str3[i];
		if(str3[i]=='1')
		{
			count++;
			     if(count%2==0)
			     {
			     	cout<<str1[i];
			     }
			     else
			     {
			     	if(str1[i]=='0')
			     		cout<<'1';
			     	else
			     		cout<<'0';
			     }
				
		}
	}
	cout<<endl;

}
return 0;
}