using namespace std;
#include <map>
#include <numeric>
#include <string>
#include <functional>
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>
#include <math.h>
#include <set>
#include <string.h>

#define fr(i,n) for(i=0;i<n;i++)

typedef vector<int> vi;
typedef vector<long long int > vll;
typedef long long int ll;
typedef vector<unsigned long long int > vull;
typedef unsigned long long int ull;


char str[100005];
int arrone[100005]={0};
int arrzero[100005]={0};
int max(int a , int b)
{
	if(a>b)
		return a;
	else return b;

}
int min(int a , int b)
{
	if(a<b)
		return a;
	else return b;

}

void chck(int x,int y)
{
	for(int i=x;i<=y;i++)
	{

		if(str[i]=='1')
		{
			arrone[i]=arrone[max(i-1,0)]+1;
			arrzero[i]=0;
		}
		else
		{
			arrzero[i]=arrzero[max(i-1,0)]+1;
			arrone[i]=0;
		}
	}
}
int main()
{

int T;
cin>>T;
while(T--)
{
int i,j,k,l,m,n;
	for(i=0;i<100005;i++)
	{
		arrone[i]=0;
		arrzero[i]=0;
		str[i]='\0';
	}
		
	cin>>l>>k;
	cin>>str;
	
	for(i=0;i<l;i++)
	{	
		if(str[i]=='1')
		{
			arrone[i]=arrone[max(i-1,0)]+1;
			arrzero[i]=0;
		}
		else
		{
			arrzero[i]=arrzero[max(i-1,0)]+1;
			arrone[i]=0;
			
		}
	}
	int count=0;
	for(i=0;i<l;i++)
	{
		if(arrzero[i]>k)
		{
			count++;
			arrzero[i]=0;
			arrone[i]=1;
			chck(min(i+1,l-1),l-1);
				str[i]='1';
		}
		else if(arrone[i]>k)
		{
			count++;
			arrzero[i]=1;
			arrone[i]=0;
			chck(min(i+1,l-1),l-1);
			str[i]='0';
		}
	}
	cout<<count<<endl;
	cout<<str<<endl;
}
return 0;
}

