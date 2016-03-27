#include <iostream>
#include <list>
#include <algorithm>
#include <stdio.h>
#include <string.h>
typedef long long int ll;
using namespace std;
typedef struct node 
{
	int val;
	struct node *children[26];
}node;

node *getnode()
{
	node *tmp = (node *)malloc(sizeof(node));
	
	for(int i=0;i<26;i++)
	{
		tmp->children[i]=NULL;
	}
	return tmp;
}
void add_word(char *key,node **root,int index)
{
	node *trie =*root; 
	int l= strlen(key);
	int level;
	for(level=0;level<l;level++)
	{
		if(trie->children[key[level]-'a']==NULL)
		{
			node *tmp=getnode();
			trie->children[key[level]-'a']=tmp;
		}
		trie=trie->children[key[level]-'a'];
	}
	trie->val=index;
}
int search(char *key , node **root)
{
	node *trie =*root; 
	int l= strlen(key);
	int level,flag=0;
	for(level=0;level<l;level++)
	{
		if(trie->children[key[level]-'a']!=NULL)
		{
			trie=trie->children[key[level]-'a'];
		}
		else
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
		return -1;
	else 
		return trie->val;
}
int main()
{
	int i,j,k,l;
	int n;
	node *root=(node *)malloc(sizeof(node));
	root->val=0;
	for(i=0;i<26;i++)
	{
		root->children[i]=NULL;
	}
	char str[10][100],inp[100];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>str[i];
		add_word(str[i],&root,i);
	}
	cin>>inp; 
	int ans=search(inp , &root);
	if(ans==-1)
	{
		cout<<"sorry, string not found"<<endl;
	}
	else 
	{
		cout<<"found with index  "<<ans<<endl;
	}
	return 0;
}

		

