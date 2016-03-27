
#include <numeric>
#include <string>
#include <functional>
#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>

using namespace std;

#define fr(i,n) for(i=0;i<n;i++)

typedef vector<int> vi;
typedef vector<long long int > vll;
typedef long long int ll;
typedef vector<unsigned long long int > vull;
typedef unsigned long long int ull;
int main ()
{
	int i,j,len,count1=0,count2=0;
	char str[200005];
	cin>>len ;
	cin>>str;
	
	for(i=0;i<len;i++)
	{
		if(str[i]=='0')
			count2++;
		else 
			count1++;
	}
	if(count1<count2)
	{
		cout<<count2-count1<<endl;
	}
	else 
	cout<<count1-count2<<endl;
return 0;
}