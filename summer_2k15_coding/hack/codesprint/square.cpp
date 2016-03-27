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

ll seq[100005]={0};
void updatevalue(ll *st,ll ss,ll se,ll x,ll y,ll index)
{
	if(x>se || y<ss)
		return ;
	else if(x>=ss  && y<= se )
	{
		st[index]=(st[index]%mod+seq[y-x]%mod)%mod;
	}
	else if(y>=se && x>=ss)
	{
		
		st[index]=(st[index]%mod+seq[se-x]%mod)%mod;
	}
	else if(se>=y && x<=ss)
	{
		if(ss-1-x>=0)
		st[index]=(st[index]%mod+(seq[y-x]-(seq[ss-1-x]))%mod)%mod;
		else
		st[index]=(st[index]%mod+seq[y-x]%mod)%mod;
	}
	else if(ss>=x && se<=y)
	{
		if(ss-x-1>=0)
		st[index]=(st[index]%mod+(seq[se-x]-seq[ss-x-1])%mod)%mod;
		else
			st[index]=(st[index]%mod+(seq[se-x])%mod)%mod;
	}
	//st[index]=st[index]+diff;
	if(se==ss)return;
	ll mid = (ss+se)/2;
	updatevalue(st,ss,mid,x,y,2*index+1);
	updatevalue(st,mid+1,se,x,y,2*index+2);	
}

ll getsum(ll *st, ll ss,ll se, ll qs,ll qe,ll index)
{
	if(qs<=ss && qe>=se)
		return st[index]%mod;
	if(qs>se || qe<ss)
		return 0 ;
	ll mid = (ss+se)/2;
	return ((getsum(st,ss,mid,qs,qe,2*index+1))%mod + (getsum(st,mid+1,se,qs,qe,2*index+2))%mod)%mod;
}
/*int constructST(int arr[],int ss,int se,int *st ,int si)
{
	if(ss==se)
	 {
	 	st[si]=arr[ss];
	 	return st[si];
	 }

	int mid = (ss+se)/2;
	st[si]=constructST(arr, ss, mid, st, 2*si+1) + constructST(arr, mid+1, se , st, 2*si+2);
	return st[si];
}*/
int main ()
{
	ll i,j,k,l,n,m,val,q,y,t;
	scanf("%lld%lld",&n,&q);
	ll x = (ll)(ceil(log2(n)));
    ll max_size = 2*(ll)pow(2, x) - 1; 
    ll *st = new ll[max_size];
    seq[0]=2;
    for(i=1;i<n;i++)
    {
    	seq[i]=((seq[i-1])%mod+(((i+1)%mod)*(i+2)%mod)%mod)%mod;	
    }
    //for(i=0;i<n;i++)
    //	cout<<seq[i]<<" ";
  
    for(i=0;i<max_size;i++)
    {
    	st[i]=0;
    }
    while(q--)
    {	
			cin>>t>>x>>y;
			x--;
			y--;
			if(t==1)
			{
				//int diff=val-arr[i];
			 	updatevalue(st,0,n-1,x,y,0);
			}
			else if(t==2)
			{
				  ll ans = (getsum(st,0,n-1,x,y,0))%mod;
				  printf("%lld\n",ans);
			}

	}
	
   
  
    return 0;
}





