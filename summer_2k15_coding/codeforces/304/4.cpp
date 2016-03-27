
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
map<ll,ll> m ;


ll seive[5000007]={0};
ll final[5000007]={0};
ll visited[5000007]={0};

void makeseive()
{
	final[1]=0;
seive[1]=0;
for(int  i=2;i<=5000001;i++)
{
	if(visited[i]==0)
	{
		for(int j=1;i*j<=5000000;j++)
		{
			int t=i*j;
			visited[t]=1;
			while(t%i==0)
			{
				seive[i*j]++;
				t=t/i;
			}
		}
		
	}
}

for(int i=2;i<=5000001;i++)
{
	final[i]=final[i-1]+seive[i];
}
return ;
}
int main ()
{
	int T,x;
	scanf("%d",&T);
	makeseive();
	
	while(T--)
	{
		
		int a,b,ans;
		scanf("%d %d",&a,&b);
		ans=final[a]-final[b];
		printf("%d\n",ans );
	}

return 0;
}