
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

int main ()
{
	int T;
	char str[100007];
	cin>>T;
	while(T--)
	{
		int i,l,x,j,b,flag1=0,maxval=-1;
		int max;
		string str;
		char final[100005];
		cin>>str;
		l=str.length();
		b=ceil(double(l)/2);
		//cout<<b<<endl;
		int arr[28]={0};
		for(i=0;i<l;i++)
		{
			arr[str[i]-96]++;
			if(arr[str[i]-96] > b)
			{
				flag1=1;
				break;

			}
			if(maxval <= arr[str[i]-96])
			{
				maxval=arr[str[i]-96];
				max = str[i]-96;
			}
		}
				int ind=1;

		if(flag1==1)
		{
			cout<<"-1"<<endl;
		}
		else
		{
			for(i=0;i<l;i=i+2)
			{
				if(maxval>0)
				{
					final[i]=char(max+96);
					maxval--;
					arr[max]--;
				}
				else if(arr[ind]!=0)
				{
					arr[ind]--;

					final[i]=char( ind+96);
				}
				else {

					while(1)
					{
						ind=ind+1;
					if(ind==27)
						ind=1;
					if(arr[ind]!=0)
						break;
					}
					arr[ind]--;
					final[i]=char( ind+96);
					
				}

			}

			
			for(i=1;i<l;i+=2)
			{
				if(arr[ind]!=0)
				{
					arr[ind]--;

					final[i]=char( ind+96);
				}
				else {
					while(1)
					{
						ind=ind+1;
					if(ind==27)
						ind=1;
					if(arr[ind]!=0)
						break;
					}
					arr[ind]--;
					final[i]=char( ind+96);
				}
			}
			final[l]='\0';
			cout<<final<<endl;

			}
		}
		
return 0;
}