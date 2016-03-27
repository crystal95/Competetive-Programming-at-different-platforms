using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
int main()
{
	int end,i,j,k,l,n,t,s,q,start,count=1;
	cin>>t>>s>>q;
	start=s;
	end=start;
	int re=0;
	while(1)
	{
		end=end+q-1;
		if(end>=t)
			break;
		re=re+q;
		if(re>=end)
		{
			count++;
			re=0;
		}
		
		
	}
	cout<<count<<endl;
	return 0;
}



