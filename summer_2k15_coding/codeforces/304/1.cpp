
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
	ll x,y,z,w,n,i,j,k;
	cin>>k>>n>>w;
	 x=w*(w+1);
	 x=x*k;
	 x=x/2;
	 x=x-n;
	 if(x<0)
	 	cout<<'0'<<endl;
	 else 
	 	cout<<x<<endl;
	 return 0;
}
