
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
	ll i,j,k,l,flag=0,count=0,n;

	cin>>n;
	ll a[n+1],b[n+1]; 
	fr(i,n)
	{
		cin>>a[i];
		cin>>b[i];
	}
	//fr(i,n)
	//cout<<a[i]<<" ";
	 flag=0;
	 ll flag1=0;
	for(i=1,j=n-2;i<n-1,j>=1;i++,j--)
	{
		if(j-i>1)
		{
			if(a[i]-a[i-1]-1>=b[i])
			{
				
				count++;

			}
			
			else if(a[i+1]-a[i]-1>=b[i] )
			{
				
				a[i]=a[i]+b[i];
				count++;
			}
						

			if(a[j+1]-a[j]-1>=b[j])
			{
				count++;
			}
			else if(a[j]-a[j-1]-1>=b[j])
			{
				flag1=1;
				a[j]=a[j]-b[j];
				count++;
			}
			
			}
		else if(i==j)
		{
			if(a[i+1]-a[i]-1>=b[j] )
			{
				
				count++;
			}
			else if (a[i]-a[i-1]-1>=b[j] )
			{
				count++;
			}


		}
		else if (j-i==1)
		{
			if(a[i]-a[i-1]-1>=b[i] )
			{
							
				count++;
			}

			else if(a[i+1]-a[i]-1>=b[i] )
			{
				
				count++;
			}

			if(a[j+1]-a[j]-1>=b[j])
			{
				count++;
			}
			else if(a[j]-a[j-1]-1>=b[j])
			{
				flag1=1;
				count++;
			}

		}
		else 
			break;
	}

	if(n>1)
	cout<<count+2<<endl;
else cout<<'1'<<endl;
	return 0;

}




