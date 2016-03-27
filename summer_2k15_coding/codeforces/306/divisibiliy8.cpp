
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
	int i,j,k,l,m,n,flag=0,x,y;
	char str[108];
	cin>>str;
	l=strlen(str);
	for(i=0;i<l;i++)
	{
		if((str[i]-48)%8==0)
		{
			x=str[i]-48;
			flag=1;
			break;
		}
		for(j=i+1;j<l;j++)
		{
			if(((str[j]-48)+(str[i]-48)*10)%8 ==0  && i<l-1)
			{
				x=(str[j]-48)+(str[i]-48)*10;
				flag=1;
				break;
			}
			for(k=j+1;k<l;k++)
			{
				x= (str[k]-48)+(str[j]-48)*10+(str[i]-48)*100;
				if(x%8==0 && i<l-2 &&  j< l-1)
				{
					
						flag=1;
						break;
					
				}
			}
			if(flag==1)
			{
				break;
			}
		}
			if(flag==1)
			{
				break;
			}
	}

	
	if(flag==1)
		cout<<"YES"<<endl<<x<<endl;
	else cout<<"NO"<<endl;
	return 0;
}