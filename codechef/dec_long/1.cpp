using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		long long int n1,n2,i,m;
		cin>>n1>>n2>>m;
		long long int sum = (m*(m+1))/2;
		if(n1>=sum && n2>=sum)
			cout<<(n1+n2-2*sum)<<endl;
		else 
		{
			long long int mine=min(n1,n2);
			long long int maxe = max(n1,n2);
			cout<<maxe-mine<<endl;

		}
	}
		return 0;
}

