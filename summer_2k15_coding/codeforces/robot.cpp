
#include<string.h>
#include <numeric>
#include <string>
#include <functional>
#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include <math.h>   

using namespace std;

#define fr(i,n) for(i=0;i<n;i++)

typedef vector<int> vi;
typedef vector<long long int > vll;
typedef long long int ll;
typedef vector<unsigned long long int > vull;
typedef unsigned long long int ull;



ull bsearch(vull &arr)
{
	int i;
	ull  lo = *max_element(arr.begin(),arr.end());
	ull n = arr.size();
	ull hi;
	fr(i,n)
	hi+=arr[i];
    
    //cout<<hi<<endl;
	ull  mid;
	while(lo<hi)
	{
		ll  sum=0;
		mid=lo + (hi-lo)/2;
		for (ull i = 0; i < n; ++i)
		{

			sum+=(mid-arr[i]);
			if(mid<=sum)
				break;
			

		}
		if(mid<=sum)
				hi=mid;

		else 
			lo=mid+1;
		
	}
	return lo;
}


int isinteger(double z)
{
	if(floor(z)==z)
		return 1;
	else 
		return 0;
}

int main ()
{
	ll a,b;
	ll flag=0,i,j,k,l,xtmp=0,ytmp=0,x[101],y[101];
	char str[101];
	cin>>a>>b;
	cin>>str;
	l=strlen(str);
	for(i=0;i<l;i++)
	{
		if(str[i]=='U')
		{
			ytmp++;
			x[i]=xtmp;
			y[i]=ytmp;
			
		}
		if(str[i]=='D')
		{
			ytmp--;
			x[i]=xtmp;
			y[i]=ytmp;
		}
		if(str[i]=='L')
		{
			xtmp--;
			x[i]=xtmp;
			y[i]=ytmp;
			
		}
		if(str[i]=='R')
		{
			xtmp++;
			x[i]=xtmp;
			y[i]=ytmp;
		}
	}


		//fr(i,l)
		//cout<<x[i]<<" "<<y[i]<<endl;


double p,zy,zx,z,xfinal,yfinal;
ll m,n,ydest,xdest;
	xfinal=xtmp;
	yfinal=ytmp;
	if(a==0 & b==0)
		flag=1;
	fr(i,l)
	{
		
		if(a==x[i] && b==y[i])
			{
				flag=1;
				break;
			}

		 if (xfinal==0 && yfinal==0)
			{
				if(a==x[i] && b==y[i])
				{
					flag=1;
					break;
				}
			} 

		else if(xfinal==0)
		{
			zy=double(b-y[i])/yfinal ;
			n=isinteger(zy);
			if(n==1)
			{
				flag=1;
				break;
			}
		}
		else if(yfinal==0)
		{
			zx=double(a-x[i])/xfinal ;
			m=isinteger(zx);
			if(m==1)
			{
				flag=1;
				break;
			}
		}
		else 
		{
		
				zx=double(a-x[i])/xfinal ;
				m=isinteger(zx);
				zy=double(b-y[i])/yfinal ;
				n=isinteger(zy);
				if(n==1 & m==1)
				{
					if(zx==zy && zx>0 && zy>0)
					{
						flag=1;
						break;
					}
				}

			}
	}

	if(flag==1)
		cout<<"Yes"<<endl;

	else 
		cout<<"No"<<endl;
	

return 0;

 } 


