#include <numeric>
#include <string>
#include <functional>
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <math.h>

using namespace std;
#define mod 1000000007
#define fr(i,n) for(i=0;i<n;i++)

typedef vector<int> vi;
typedef vector<long long int > vll;
typedef long long int ll;
typedef vector<unsigned long long int > vull;
typedef unsigned long long int ull;

int main ()
{
	 ll arr[200005];
	int i,j,k,l,n,m,val,q,y,t,cnt=0,tmp=0,x;
	scanf("%d%d",&n,&q);
	ll ans=0;
	 for(i=0;i<=n;i++)
	 	arr[i]=0;
   
     while(q--)
    {	
			//cin>>t>>x>>y;
			scanf("%d%d%d",&t,&x,&y);
			ans=0;
			if(t==1)
			{
				
				cnt=1;
				for(i=x;i<=y;i++)
				{
										
						arr[i]=(arr[i]+(cnt*(cnt+1)))%mod;
						cnt++;
						
				}
			}
			else if(t==2)
			{
				for(i=x;i<=y;i++)
				{
					ans=(ans+(arr[i]))%mod;
				}
				printf("%lld\n",ans);
			}
			//for(i=0;i<n;i++)
			//	cout<<arr[i]<<" ";
			//cout<<endl;

	}
	
   
  
    return 0;
}





