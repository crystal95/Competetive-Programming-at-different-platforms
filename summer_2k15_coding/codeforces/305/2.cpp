
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
	int i,j,k,l,n,m,q;
	cin>>n>>m>>q;
	
	int arr[505][505], brr[505][505],max[505],ans=-1,x,y;

	for(i=0;i<=n;i++)
	{
		brr[i][0]=0;
		max[i]=-1;
	}

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			cin>>x;
			arr[i][j]=x;
			if(x==1)
			{
				if(arr[i][j-1]==1)
				{
					brr[i][j]=brr[i][j-1]+1;
					if(brr[i][j]>max[i])
					{
						max[i]=brr[i][j];
					}
				}
				else 
				{
					brr[i][j]=1;
					if(brr[i][j]>max[i])
					{
						max[i]=brr[i][j];
					}

				}
			}

		}
		if(ans>max[i])
			ans=max[i];
	}
	
	while(q--)
	{
		cin>>x>>y;
		arr[x][y]=1-arr[x][y];
		max[x]=-1;
		
		i=x;
			for(j=1;j<=m;j++)
			{
				if(arr[x][j]==1)
				{
					if(arr[i][j-1]==1)
					{
						brr[i][j]=brr[i][j-1]+1;
						if(brr[i][j]>max[i])
						{
							max[i]=brr[i][j];
						}
					}
					else 
					{
						brr[i][j]=1;
						if(brr[i][j]>max[i])
						{
							max[i]=brr[i][j];
						}

					}
				}
			}

ans=-1;
		for(i=1;i<=n;i++)
		{
		if(ans<max[i])
		ans=max[i];
		}

		if(ans>0)
		cout<<ans<<endl;
	else cout<<'0'<<endl;
	}

	return 0;
}

