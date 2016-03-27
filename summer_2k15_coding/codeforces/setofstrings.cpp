
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
	int i,j,k,l;
	int n,arr[27],tmp[105]={0};
	char str[100005],count;
	cin>>n;
	cin>>str;
	l=strlen(str);
	for(i=0;i<l;i++)
	{
		if(arr[str[i]-96]==0)
		{
			tmp[i]=1;
		}
		arr[str[i]-96]++;
	}
	for(i=1;i<=26;i++)
	{
		if(arr[i]>0)
			count++;
	}
	int flag=0;

	if(count>=n)
	{
		cout<<"YES";
		for(i=0;i<l;i++)
		{
			if(tmp[i]==1 && n>1)
			{
				cout<<endl<<str[i];
				n--;
				//tmp[i]=0;
			}
			else if(tmp[i]==1 && n==1)
			{
					cout<<endl<<str[i];
					n--;
								
			}
			else if(tmp[i]==0 && n==1)
			{
					cout<<str[i];
									
			}
			else if(tmp[i]==0 || n==0)
			{
				cout<<str[i];
			}
			

		}
		cout<<endl;
	}
	else 
		cout<<"NO"<<endl;
	return 0;
}



