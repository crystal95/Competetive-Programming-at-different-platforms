using namespace std;
#include <map>
#include <numeric>
#include <string>
#include <functional>
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>
#include<math.h>
#include<set>


#define fr(i,n) for(i=0;i<n;i++)

typedef vector<int> vi;
typedef vector<long long int > vll;
typedef long long int ll;
typedef vector<unsigned long long int > vull;
typedef unsigned long long int ull;


long long int gcd(long long int a,long long int b)
{
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}
int check(ll a , ll b)
{
	ll x=gcd(a,b);
	if(b==1)
		return 1;

	
	else if(x==1)
		return 0;
	else  
		return check(a,b/x);
}
int main()
{

int T;
cin>>T;
while(T--)
{
	ll i,j,k,l,n,m,a,b,x;
	cin>>a>>b;
	
		if(check(a,b))
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}
	

}
return 0;
}