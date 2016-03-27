using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
typedef struct node 
{
	int data ;
	struct node *left ;
	struct node *right ;
}node;

node *new_node(int data )
{
	node *tmp=(node *)malloc(sizeof(node));
	tmp->data=data;
	tmp->left=NULL;
	tmp->right=NULL;
	return tmp;
}
node *insert_tree(node *root, int data)
{
	if(root==NULL)
	{
		root=new_node(data);
		return root;
	}
	if(root->data>=data)
		root->left=insert_tree(root->left,data);
	if(root->data<data)
		root->right=insert_tree(root->right,data);
	return root;
}
void print_tree(node *root)
{
	if(root==NULL)
		return ;
	print_tree(root->left);
	cout<<root->data<<" ";
	print_tree(root->right);
}
bool find(node *root , int test)
{
	bool x,y;
	if(root==NULL)
		return false;
	if(root->data==test)
		return true;
	else 
	{
		x=find(root->left, test);
		y=find(root->right, test);
		if(x==true || y==true)
			return true;
		else 
			return false ;
	}
}
int size_tree(node *root)
{
	int x=0,y=0;
	if(root->left==NULL && root->right==NULL)
		return 1;
	if(root->left!=NULL)
		x=size_tree(root->left);
	if(root->right!=NULL)
		y=size_tree(root->right);
	return x+y+1;
}
int size_tree_tmp(node *root)
{
	if(root==NULL)
		return 0 ;
	return size_tree_tmp(root->left)+1+size_tree_tmp(root->right);
}
int max_height(node *root)
{
	int x=0,y=0;
	if(root->left==NULL && root->right==NULL)
		return 1;
	if(root->left!=NULL)
		x=max_height(root->left);
	if(root->right!=NULL)
		y=max_height(root->right);
	return max(x,y)+1;

}
void delete_tree(node *root)
{


	if(root==NULL)
		return ;
	delete_tree(root->left);
	delete_tree(root->right);
	cout<<"deleting rooot with data as "<< root->data<<endl;
	free(root);
	/*if(root->left==NULL && root->right==NULL)
	{
		cout<<"deleting rooot with data as "<< root->data<<endl;
		free(root);
	}	
	if(root->left!=NULL)
		delete_tree(root->left);
	if(root->right!=NULL)
		delete_tree(root->right);
	root=NULL;*/
}

void levelorder(node *root)
{
	if(root==NULL)
		return ;
	
}
int main()
{
	int i,j,k,l,m,n,x,test;
	cin>>n;
	node *root=NULL;
	for(i=0;i<n;i++)
	{
		cin>>x;
		root=insert_tree(root,x);
	}

	print_tree(root);cout<<endl;
	//cout<<max_height(root)<<endl;
	delete_tree(root);
	return 0;

}