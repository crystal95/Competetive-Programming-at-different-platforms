
#include <numeric>
#include <string>
#include <functional>
#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

#define fr(i,n) for(i=0;i<n;i++)

typedef vector<int> vi;
typedef vector<long long int > vll;
typedef long long int ll;
typedef vector<unsigned long long int > vull;
typedef unsigned long long int ull;



int main ()
{
	int i,j,k,l,m,n,min;
	cin>>n>>m;
	if(n>m)
		min=m;
	else
		min=n;
	if(min%2==0)
		cout<<"Malvika"<<endl;
	else 
		cout<<"Akshat"<<endl;
	return 0;
}