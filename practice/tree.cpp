using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
#include <queue>
typedef struct node
{
	int val;
	struct node* left;
	struct node* right;

}node;
node *new_node(int x)
{
	node *tmp=(node *)malloc(sizeof(node));
	tmp->left=NULL;
	tmp->right=NULL;
	tmp->val=x;
	return tmp;
}
node *insert(node *root,int x)
{
	if(root==NULL)
	{
		root=new_node(x);
		return root;
	}
	else if(root->val>x)
		root->left=insert(root->left,x);
	else if(root->val<x)
		root->right=insert(root->right,x);
	return root;
}
void print(node *root)
{
	if(root==NULL)
	{
		return;
	}
	print(root->left);
	cout<<root->val<<" ";
	print(root->right);
}
int main()
{
	int n,i,j,x;
	cin>>n;
	node *root=NULL;
	for(i=0;i<n;i++)
	{
		cin>>x;
		root=insert(root,x);
	}
	print(root);
	vector<vector<int> > ans;
       queue<node> q;
       vector<int> res;
       q.push(*root);
      //  callback(root);
      while(!q.empty())
      {
          node tmp=q.top();
          q.pop();
          if(tmp.val==-1)
          {
              ans.push_back(res);
              vector<int> res;
              q.push(tmp);
              continue;
          }
          else
          {
              res.push_back(tmp.val);
              q.push(*(tmp.left));
              q.push(*(tmp.right));
          }
      }










	return 0;
}