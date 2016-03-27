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
	int i,j,k,prev,l,x,y=0,n,curr,cnt=0,flag=0;
	pair<int ,int> sam,ref,out;

	cin>>n>>k;
	vector<int> count(n);
	vector< pair<int,int> > ans;
	vector< pair <int ,int> >::iterator w;
	priority_queue<pair<int,int>,vector< pair<int,int> >,compare> pq1;
	priority_queue<pair<int,int>,vector< pair<int,int> >,compare> pq2;
	for(i=0;i<n;i++)
	{
		cin>>x;
		count[x]++;
		sam.first=x;
		sam.second=i;
		pq1.push(sam);
	}
	/*while (!pq1.empty()) 
	{
		sam=pq1.top();
		cout << sam.first<<" "<<sam.second << endl;  // Print highest priority string
		pq1.pop();                    // Remmove highest priority string
	}*/
	if(count[0]>1)
		flag=1;
	for(i=1;i<n;i++)
	{
		if(count[i]>count[i-1]*k)
			flag=1;
	}
	if(flag==0)
	{
			sam=pq1.top();
			pq1.pop(); 
			pq2.push(sam);
			curr=(sam).first;
			pq2.pop();
		while (!pq1.empty()) 
		{
			for(i=0;i<count[curr+1];i++)
			{

				ref=pq1.top();
				pq1.pop(); 
				pq2.push(ref);
				out.first=sam.second;
				out.second=ref.second;
				ans.push_back(out);
				y++;
				cnt++;
				if(cnt==k)
				{
					cnt=0;
					sam=pq2.top();
					pq2.pop(); 
				}

			}
			prev=curr;
			while((pq2.top()).first!=curr+1)
			{
				pq2.pop();
			}
			sam=pq2.top();
			curr=curr+1;
		}
		cout<<y<<endl;
		for(w=ans.begin();w!=ans.end();w++)
		{
			cout<<(*w).first+1<<" "<<(*w).second+1<<endl;
		}

	}

	else 
		cout<<"-1"<<endl;
	return 0;
}

