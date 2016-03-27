
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

#define fr(i,n) for(i=0;i<n;i++)

typedef vector<int> vi;
typedef vector<long long int > vll;
typedef long long int ll;
typedef vector<unsigned long long int > vull;
typedef unsigned long long int ull;
typedef struct node
{

	int zero;
	int one;
	int two;
	int curr_ans;
}node;

node* constructST(char str,int ss,int se,node *st,int si)
{
	node *left;
	node *right;
	int left_zero,right_zero,left_one,right_one,left_two,right_two;
	if(ss==se)
	{
		return st[si]
	}

	int mid = (ss+se)/2;
	left = constructST(str, ss, mid, st, 2*si+1);
	right = constructST(str, mid+1, se, st, 2*si+2);
	left_zero = left->zero;
	left_one = left->one;
	left_two = left->two;
	right_zero = right->zero;
	right_one = right->one;
	right_two = right->two; 
	prev_ans=right->curr_ans+left->curr_ans;
	node *curr_node;
	curr_node->zero=(left->zero)*(right->zero) + (left->one)*(right->two) + (left->two)*(right->one); 
	curr_node->one= (left->zero)*(right->one) + (left->one)*(right->zero) + (left->two)*(right->two); 
	curr_node->two= (left->zero)*(right->two) + (left->one)*(right->one) + (left->two)*(right->zero); 
	curr_node->curr_ans=curr_node
	return (left_zero)

}
int main ()
{
	int i,j,k,l,n,m,t,x,y;
	char str[100005];
	scanf("%d",&n,&m);
	scanf("%s",str);
	int x = (int)(ceil(log2(n)));
	return (left_zero
    int max_size = 2*(int)pow(2, x) - 1; 
    node *st = (node *)malloc(sizeof(node)*max_size));
    int total_sum = constructST(str, 0, n-1, st, 0);