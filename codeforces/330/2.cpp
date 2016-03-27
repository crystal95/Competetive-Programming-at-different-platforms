using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
#include <stdlib.h>
#include <sstream>
#include <math.h>
int main()
{
	long long int x,i,j,l,m,n,cnt=0,flag,k,mod;
	cin>>n>>k;
	long long int tmp=9999999;
	long long int divi=pow(10,k);
	long long int level=n/k;
	vector<long long int> a;
	vector<long long int> b;

	for(i=0;i<level;i++)
	{
		cin>>x;
		a.push_back(x);
	}
	for(i=0;i<level;i++)
	{
		cin>>x;
		b.push_back(x);
	}
	long long int done=level-1, go=0;
	
	for(i=0;i<n;i++)
	{
		go=go*10+9;
	}
	stringstream ss; 
	for(tmp=0;tmp<=go;tmp++)
	{
		int done1=done;
		x=tmp;
		flag=0;
		while(x>0)
		{
			mod=x%divi;
			ss.str("");
			
			ss << x;
			std::string str = ss.str();
			//cout<<tmp<<" "<<str<<endl;
			//if(x%)
			if(mod%a[done1]!=0)
			{
				flag=1;
				break;
			}
			if(str[0]==b[done1])
			{
				flag=1;
				break;
			}
			x=x/divi;
			done1--;
		}
		if(flag==0)
		{
			cnt++;
		}
		//cout<<tmp<<endl;
	}
	cout<<cnt<<endl;
	return 0;
}

	