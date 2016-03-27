
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

#define fr(i,n) for(i=0;i<n;i++)

typedef vector<int> vi;
typedef vector<long long int > vll;
typedef long long int ll;
typedef vector<unsigned long long int > vull;
typedef unsigned long long int ull;
vll bike,man;

ll min(ll a, ll b)
{
	if(a>b)
		return b;
	else 
		return a;

}
ll dep;
//ll count =0  ;
ll m;
ll amount;
ll issatisfied(ll lo , ll hi)
{
	ll i ;
	ll count=0 ;
	ll x=0;
	amount=0;
	for(i=lo;i<=hi;i++)
	{	

			//if(dep==0)
			//	return -1;
			while(bike[x]>man[i]+dep && x< m)
			{
				x++;

			}
			if( x<m && bike[x]<=man[i]+dep  )
			{ 
				if(man[i]>= bike[x])
				{
				
					amount=amount+(bike[x]);
						x++;

				}
				else
				{
					dep=dep-(bike[x]-man[i]);
					x++;
					amount=amount+(man[i]);


				}
				count++;
		}
	}

	if(count==hi-lo+1 )
		{
			
			if (dep>=0)
			return 2; 

		}
	else 
		return -1;
}

int main ()
{
	ll mid;

	ll i,j,k,x,ans=0,depend,l,n,ind;
	
	cin>>n>>m>>depend;
	fr(i,n)
	{
		cin>>x;
		man.push_back(x);
	}
	fr(i,m)
	{
		cin>>x;
		bike.push_back(x);
	}

	sort(man.begin(), man.end());
	sort(bike.begin(), bike.end());

	ind=0;
	ll lo =0 ;
	ll hi = min(n,m);
	ll amnt;
	//ll acthi = hi ;
	while(lo<hi)
	{
		 mid = lo+(hi-lo+1)/2;
		dep=depend;
		ll ans = issatisfied(n-1-mid +1 , n-1);

		//cout<<ans<<endl;


		/*if( ans == 1)
		{
			lo = mid ;
			break ;
		}*/
		 if(ans == -1)
		{
			hi = mid-1;
			
		}
		else if(ans == 2)
		{
			lo = mid ;
		}

	}
	amount=0;
	dep=depend;
	x=0;
	for(i=n-lo;i<=n-1;i++)
	{


				if(man[i]>= bike[x])
				{
				
					amount=amount+(bike[x]);
						x++;

				}
				else
				{
					dep=dep-(bike[x]-man[i]);
					x++;
					amount=amount+(man[i]);


				}
	}

	if (dep>0)
		amount=amount-dep;
	if(amount<0)
		amount=0;
	
	
	cout<<lo<< " "<< amount<<endl;
	return 0;
}

	