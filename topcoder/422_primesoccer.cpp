#include <iostream>
#include<vector>
using namespace std;
double dp[20][20];
int Isprime(int n)
{
	if(n<2)
		return 0;
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}
vector<double> check(double p)
{
	int i,j;
	for(i=0;i<=18;i++)
	{
		for(j=0;j<=18;j++)
		{
			dp[i][j]= 0;;
		}
	}
	dp[0][0]=1; 
	p=p/100;
	/*for(i=1;i<=18;i++)
	{
		dp[i][0]=(1-p)*dp[i-1][0];
	}*/
	
	for(i=1;i<=18;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(j>0)
			dp[i][j]=(p)*dp[i-1][j-1] +(1-p)*dp[i-1][j];
			else 
				dp[i][j]=(1-p)*dp[i-1][j];

		}

	}
	vector<double> ans;
	for(i=0;i<=18;i++)
	{
		ans.push_back(dp[18][i]);
	}
	return ans;
}



int main()
{
	int i,j,k,l;
	double ans=0 ,x,y ,ans3=0,ans4=0;
	cin>>x>>y;
	vector<double> ans1 = check(x);
	vector<double> ans2 = check(y);
	for(i=1;i<=18;i++)
	{
		if(Isprime(i))
		{
			ans3+=ans1[i];
			ans4+=ans2[i];
		}
	}
	cout<<ans3+ans4-ans3*ans4<<endl;


}