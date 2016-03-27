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
#define MOD 1000000000
vector< vector<long long> > C(4005,vector<long long> (2005,0));
#include <queue>
 

 
 
void ncr(ll n, ll r)
{
    
 
    for (int i=0; i<=n; i++)
    {
        for (int k=0; k<=r && k<=i; k++)
           {
            if (k==0 || k==i)
                C[i][k] = 1;
            else
                C[i][k] = (C[i-1][k-1] + C[i-1][k])%MOD;
 
        	}
    }
   
}

int main ()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		//vector< vector<long long> > count(4005,vector<long long> (2005,0));
		vector< vector<long long> > arr(4005,vector<long long> (2005,0));
		//vector <ll> cum(2005);

 	int i,j,k,N,M;
 	ll ans;
 
		scanf("%d%d",&N,&M);
		ncr(2*M,M);
		for(j=0;j<=M;j++)
			{
				if(j>0)
				arr[1][j]=(arr[1][j-1]+C[j+M-1][j])%MOD;
				else
					arr[1][j]=C[j+M-1][j];

			}
		for(i=2;i<=N;i++)
		{
			for(j=0;j<=M;j++)
			{
				if(j>0)
				arr[i][j]=arr[i][j-1]+(arr[i-1][j]*C[j+M-1][j])%MOD;
				else 
					arr[i][j]=(arr[i-1][j]*C[j+M-1][j])%MOD;

			}
		}

		
			ans=(arr[N][M])%MOD;
			printf("%lld\n",ans);

		
	}
		


	
	return 0;
}
