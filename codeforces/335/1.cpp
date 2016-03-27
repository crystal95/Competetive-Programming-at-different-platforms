using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>  
#include <bits/stdc++.h>
#include <tr1/unordered_map>
using namespace std::tr1;

int main()
{
	int i,j,k,n,m,a,b,c,x,y,z,pos=0,neg=0;
	cin>>a>>b>>c;
	cin>>x>>y>>z;
	if(a>x)
	pos+=(a-x)/2;
	else
	neg+=a-x;

	if(b>y)
	pos+=(b-y)/2;
	else
	neg+=b-y;

	if(c>z)
	pos+=(c-z)/2;
	else
	neg+=c-z;

	if(pos>=abs(neg))
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
	return 0;
}