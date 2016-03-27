#include<iostream>
#include<stdio.h>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
int main()
{
	int i,j,k,l,n,x,h,curr,flag=0;
	cin>>n>>k;
	pair<int, int> sam,sam1,sam2,sam3;
	vector < pair<int ,int > > arr(n);
	vector<int> count(n);
	queue < pair<int,int> > q1(n);
	queue < pair<int,int> > q2(n);
	for(i=0;i<n;i++)
	{
		cin>>x;
		count[x]++;
		sam.first=x;
		sam.second=i;
		q1[i].push(sam);
	}
	if(count[0]>1)
		flag=1;
	for(i=1;i<n;i++)
	{
		if(count[i]>count[i-1]*k)
			flag=1;
	}

	if(flag==0)
	{
		sort(q1.begin(),q1.end());
		sam=q1.front();
		q1.pop();
		q2.push(sam);
		while(!q1.empty())
		{
			sam2=q2.front();
			curr=sam2.first;
			while(!q1.empty() && (q1.front()).first==curr+1)
			{
				sam3=q1.front();
				//for(i=1;i<=k;i++)
				//{
				q2.push_back(sam3);
				h++;
				cout<<sam2.second<<" "<<sam1.front()<<endl;
				if(h==k)
				{
					h=0;
					q2.pop();
					sam2=q2.front();
					curr=sam2.first;
				}

				//}
			}
			q2.popfront();
		}
	}

	if(flag==1)
		cout<<"-1"<<endl;

	/*for(i=0;i<n;i++)
	  {
	  cout<<arr[i].first<<" "<<arr[i].second<<endl;
	  }*/
	return 0;
}


