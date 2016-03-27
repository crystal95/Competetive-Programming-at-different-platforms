
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
#include <math.h>

#define fr(i,n) for(i=0;i<n;i++)

typedef vector<int> vi;
typedef vector<long long int > vll;
typedef long long int ll;
typedef vector<unsigned long long int > vull;
typedef unsigned long long int ull;
int max(int a,int b)
{
	if(a>b)
		return a;
	else 
		return b;
}
int bin2dec(char* str) {
 int n = 0;
 int size = strlen(str)-1;
        int count = 0;
 while ( *str != NULL ) {
  if ( *str == '1' ) 
      n = n + pow(10,count);
  count++; 
  str++;
 }
 return n;
}


int main ()
{
	
	int i,j,k,l,m,n,x,count,N,max=-1,tmp;
	cin>>N;
	n=N;
	//cout<<bin2dec("01")<<endl;
	while(N>0)
	{
		x=N%10;
		if(x>max)
			max=x;
	
		
		N=N/10;
	}
	cout<<max<<endl;
	while(n>0)
	{
		char str[100005]={'\0'};
		tmp=n;
		count=0;
		while(tmp>0)
		{

			if(tmp%10>0)
			{
				str[count]='1';
				//cout<<'1';
			}
			else 
			{ // cout<<'0';
				str[count]='0';
				
			}
			tmp=tmp/10;
			count++;
		}
		str[count]=NULL;
		m=bin2dec(str);
		n=n-m;
		cout<<m<<" ";
		//cout<<" ";
	}
	cout<<endl;
	

	return 0;
}
	//sort(arr.begin(), arr.end());

	