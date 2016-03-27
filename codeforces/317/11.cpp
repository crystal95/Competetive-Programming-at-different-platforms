using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
#include <map>
uint32_t reverseBits(uint32_t n) {
        uint32_t ans=0;
        while(n>0)
        {
            ans=ans*2+n%2;
            n=n/2;
        }
        return ans;
        
    }
int main()
{
	uint32_t x;
	cin>>x;
	cout<<chk(x)<<endl;
	return 0;
}
	