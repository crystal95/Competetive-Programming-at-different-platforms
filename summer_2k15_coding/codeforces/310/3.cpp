
using namespace std;

#include <map>
#include <numeric>
#include <string>
#include <functional>
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <string.h>
#include<math.h>

#define fr(i,n) for(i=0;i<n;i++)

typedef vector<int> vi;
typedef vector<long long int > vll;
typedef long long int ll;
typedef vector<unsigned long long int > vull;
typedef unsigned long long int ull;

int comp(const void* a, const void* b)
{  return *(int*)a > *(int*)b ; }
 
// Function to count all possible triangles with arr[] elements
int findNumberOfTriangles(int arr[], int n)
{
    // Sort the array elements in non-decreasing order
    qsort(arr, n, sizeof( arr[0] ), comp);
 
    // Initialize count of triangles
    int count = 0;
 
    // Fix the first element.  We need to run till n-3 as the other two elements are
    // selected from arr[i+1...n-1]
    for (int i = 0; i < n-2; ++i)
    {
        // Initialize index of the rightmost third element
        int k = i+2;
 
        // Fix the second element
        for (int j = i+1; j < n; ++j)
        {
             while (k < n && arr[i] + arr[j] > arr[k])
               ++k;
            count += k - j - 1;
        }
    }
 
    return count;
}
int main ()
{
	int i,j,x,y,k,l,n,cnt=0,ans;
	cin>>n;
	vector<pair<int,int> > arrx;
	int smpl[n*n+1];
	for(i=0;i<n;i++)
	{
		cin>>x>>y;
		arrx.push_back(make_pair(x,y));
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i;j<n;j++)
		{
			smpl[cnt]=((arrx[i].first-arrx[j].first)*(arrx[i].first-arrx[j].first) + (arrx[i].second-arrx[j].second)*(arrx[i].second-arrx[j].second));
			cnt++;
		}
	}
	ans=findNumberOfTriangles(smpl,cnt);
	cout<<ans<<endl;
	return 0;
}
