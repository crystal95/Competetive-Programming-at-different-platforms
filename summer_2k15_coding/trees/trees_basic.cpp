
#include <numeric>
#include <string>
#include <functional>
#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

#define fr(i,n) for(i=0;i<n;i++)

typedef vector<int> vi;
typedef vector<long long int > vll;
typedef long long int ll;
typedef vector<unsigned long long int > vull;
typedef unsigned long long int ull;

typedef struct node 
{
	int data ;
	struct node *left;
	struct node *right;
}node;
node *new_node(int data)
{
	node *temp=(node *)(malloc(sizeof(node)));
	temp->data=data;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
node *insert(node *root, int x)
{
	if(root==NULL)
		root=new_node(x);
	else if(root->data<x)
		root->right=insert(root->right,x);
	else if(root->data>x)
		root->left=insert(root->left,x);
	return root ;
}
node *search(node *root, int x)
{
	if(root==NULL || root->data == x)
		return root;
	else if(root->data<x)
		return search(root->right,x);
	else if(root->data>x)
		return search(root->left,x);
	
}
node *find_min(node *root)
{
	while(root->left!=NULL)
	{
		root=root->left;
	}
	return root;
}
node *delete_node(node *root, int x)
{
	node *temp;
	if(root==NULL)
		return root;
	else if(root->data<x)
	{
		root->right=delete_node(root->right,x);
	}
	else if(root->data>x)
	{
		root->left=delete_node(root->left,x);
	}
	else 
	{
		if(root->left==NULL)
		{
			temp=root->right;
			free(root);
			return temp;
		}
		else if(root->right==NULL)
		{
			temp=root->left;
			free(root);
			return temp;
		}
		else
		{
			temp=find_min(root->right);
			root->data=temp->data;
			root->right=delete_node(root->right,temp->data);
			return root ;
		}
	}
	return root;

}
void print_inorder(node *root)
{
	if(root==NULL)
		return ;
	print_inorder(root->left);
	cout<<root->data<<" ";
	print_inorder(root->right);
}
int main ()
{	
	int i,j,k,l,n,x;
	cin>>n;
	node *root=NULL;
	for(i=0;i<n;i++)
	{
		cin>>x;
		root=insert(root,x);
	}
	print_inorder(root);cout<<endl;
	cin>>n;
	while(n--)
	{
		cin>>x;
		root=delete_node(root,x);
		print_inorder(root);cout<<endl;	
	}
	
	

	return 0;
}



