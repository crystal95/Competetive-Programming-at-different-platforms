using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
#include <set>

int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		long long int i,j,t,l,n,m,x,k,ind;
		multiset<long long int> myset;
  		multiset<long long int>::iterator it;
			
		scanf("%lld",&n);
		scanf("%lld",&x);
		myset.insert(x);
		
		for(i=1;i<n;i++)
		{
			scanf("%lld",&x);
			it=myset.upper_bound(x);
			if(it!=myset.end())
			{
				myset.erase(it);
			}	
			myset.insert(x);

		}
		cout<<myset.size();
	 for (it=myset.begin(); it!=myset.end(); ++it)
    	cout << " " << *it;
		
		printf("\n");
	}
	return 0;
}

