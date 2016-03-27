
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

int main ()
{

	ll i,j,k,l,n,m,x;
	map < ll,ll > mymap;
	set <pair <ll , ll > > s;
	map<ll,ll>::iterator it;
	vll arr;
	//multimap<ll,ll>::reverse_iterator it2;
	set < pair <ll ,ll > > ::const_iterator it1;
	vector <ll>:: iterator it3;
	cin>>n;
	fr(i,n)
	{
		cin>>x;
		mymap[x]++;
	}

	ll count=0;
	for( it = mymap.begin();it!=mymap.end();it++)
	{

		s.insert(make_pair(it->second,it->first));

	}
	/*for(it1=s.begin();it1!=s.end();it1++)
	{
		cout<< (it1)->first<<" "<<(it1)->second<<endl;
	}*/

	
		ll final=0;
		 count= s.size();
		 ll p1,q1,r1,p2,q2,r2;
		  while(count >= 3)
		  {
		  	
			  	it1=s.end();
			  	it1--;
			  	p1 = (it1->first)-1;
			  	p2= (it1->second); 
			  	arr.push_back((it1)->second);
			  	s.erase(it1);count--;

				it1=s.end();
			  	it1--;
				q1 = (it1->first)-1;
			  	q2= (it1->second); 	
			  	arr.push_back((it1)->second);
			  	s.erase(it1);count--;

				it1=s.end();
			  	it1--;
				r1 = (it1->first)-1;
			  	r2= (it1->second); 	
			  	arr.push_back((it1)->second);
			  	s.erase(it1);count--;
			  	
			  	

			  	
			  		if( p1>0 )
			  		{
		  				s.insert(make_pair(p1,p2));
				  		count++;
				  	}
				  	if( q1>0 )
				  	{ 
				  		s.insert(make_pair(q1,q2));
				  		count++;
				  	}
				  	if( r1>0 )
				  	{
				  		s.insert(make_pair(r1,r2));
				  		count++;
				  	}
		  			final++;
	
		  		}
		  	

		 
		  cout<<arr.size()/3<<endl;
		  x=arr.size()/3;
		it3=arr.begin();
		  while(it3!=arr.end())
		  {
		  	//cout<< *it3 <<" ";

		  	sort(it3,it3+3);
		  	cout<<*(it3+2)<<" "<<*(it3+1)<<" "<<(*it3)<<endl;
		  	it3=it3+3;	
		  
		  }
		 
		   	
	return 0;

}
