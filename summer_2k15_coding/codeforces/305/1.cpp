
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
#include <stdio.h>      /* printf */
#include <math.h> 
#include <string.h>

#define fr(i,n) for(i=0;i<n;i++)

typedef vector<int> vi;
typedef vector<long long int > vll;
typedef long long int ll;
typedef vector<unsigned long long int > vull;
typedef unsigned long long int ull;
char str[10005];
int ispalindrome(int x,int y)
{
	for(int i=x;i<=x+(y-x)/2;i++)
	{ 
		if(str[i]!=str[(y-i+x)])
			return 0;

	}
	return 1;
}
int main ()
{
	int i,j,k,l,len,x,flag=0,count=0;
	cin>>str;
	cin>>k;
	len =strlen(str);
	i=0;
	double y= double(len)/ double(k);
	if(floor(y)==y)
	{
		x=int (y);
		for(i=0;i<len;i=i+x)
	{
		if(!ispalindrome(i,i+x-1))
		{
			flag=1;
			break;
		}
	}
	}
	else
		flag=1;

	
	/*while(i<len)
	{
		flag=0;
		for(j=i+1;j<len;j++)
		{
			flag=0;
			if(str[i]==str[j])
			{
				if(ispalindrome(i,j))
				{
					count++;
					i=j+1;
					flag=1;
					break;
				}
			
				
			}
		}
		if(flag==0)
			i++;

	}*/

	if( flag==0)
	{
		cout<<"YES"<<endl;
	}
	else 
		cout<<"NO"<<endl;
	return 0;
}
	
