using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>

bool chk(char *a , char *b, char *c)
{
	bool tmp1=false,tmp2=false;

	if((*a=='\0') && (*b=='\0') && (*c=='\0') )
		return true;
	
	if(*c=='\0')
		return false;

	if((*a==*c))
		tmp1=chk(a+1,b,c+1);
	if((*b==*c))
		tmp2=chk(a,b+1,c+1);

		return tmp1||tmp2;


}
int main()
{
	char a[100], b[100] , c[100];
	cin>>a>>b>>c;
	int l1=strlen(a);
	int l2=strlen(b);
	int l3=strlen(c);
	
	
	if(l1+l2!=l3)
		cout<<"-1"<<endl;
	else
	if(chk(a,b,c))
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
	return 0;
}