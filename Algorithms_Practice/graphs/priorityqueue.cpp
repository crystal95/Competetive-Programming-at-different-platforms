#include<iostream>
#include<stdio.h>
#include<vector>
#include<queue>
#include<iomanip>
using namespace std;
class compare{
	public:
		bool operator()(pair<int,int> t1, pair<int ,int> t2)
		{
			if (t1.first > t2.first) return true;
			if(t1.first == t2.first && t1.second > t2.second) return true;
			return false;
		}
};

int main()
{
	int i,j,k,l,x,y,n;
	pair<int ,int> sam;
	cin>>n;
	priority_queue<pair<int,int>,vector< pair<int,int> >,compare> pq;
	for(i=0;i<n;i++)
	{
		cin>>x>>y;
		sam.first=x;
		sam.second=y;
		pq.push(sam);
	}
	while (!pq.empty()) 
	{
		sam=pq.top();
		cout << sam.first<<" "<<sam.second << endl;  // Print highest priority string
		pq.pop();                    // Remmove highest priority string
	}
	return 0;
}


