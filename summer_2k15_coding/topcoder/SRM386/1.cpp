#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

class TrophyShelf {
public:
	vector <int> countVisible(vector <int>);
};

vector <int> TrophyShelf::countVisible(vector <int> arr) {
	int  i,count1=0,count2=0;
	vector <int > ans;
	for(i=0;i<arr.size()-1;i++)
	{
		if(arr[i]< arr[i+1])	
		{
			count1++;
		}	
		else 
		{
		break;
		}
	}
	for(i=arr.size();i>0;i++)
	{
		if(arr[i]<arr[i-1])	
		{
			count2++;
		}
		else 
		{
		break;
		}
	}
	ans.push_back(count1);
	ans.push_back(count2);
	return ans;
	
}

