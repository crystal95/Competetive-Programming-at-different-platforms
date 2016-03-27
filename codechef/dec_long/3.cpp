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
typedef long long ll;
int main()
{
	ll T;
	scanf("%lld",&T);
	while(T--)
	{ 
		ll N;
		cin>>N;
		set <double > myset1;
		set <pair<double,double > > myset2;
		double a,b,c;
		ll i ,cnt=0,maxe=0;
		for(i=0;i<N;i++)
		{
			cin>>a>>b>>c;
			if(b==0)
			{
				myset1.insert(-(c/a));
			}
			else
			{
				myset2.insert(make_pair(a/b,c/b));
			}
		}
		//cout<<myset2.size()<<" "<<myset1.size()<<endl;
		set<pair<double,double > >::iterator it,prev;
		prev=myset2.begin();
		for(it=myset2.begin();it!=myset2.end();it++)
		{
			if(it==myset2.begin())
			{
				prev=it;
				cnt=1;
			}
			else
			{
				if(it->first==prev->first)
                   cnt++;
				else
				{
					if(cnt>maxe)
					{
						maxe=cnt;
					}
					cnt=1;
					prev=it;

				}
			}
				
		}
		long long int  x=myset1.size();
		if(cnt>maxe)
		{
						maxe=cnt;
		}
		cout<<max(maxe,(x))<<endl;

	}
	return 0;
}