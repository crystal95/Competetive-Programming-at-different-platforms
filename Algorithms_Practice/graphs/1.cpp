#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
typedef struct node
{
	int data;
	struct node *next;
}node;
node *createnode(int data)
{
	node *x=(node *)malloc(sizeof(node));
	x->data=data;
	x->next=NULL;
	return x;
}
typedef struct graph
{
	int ver;
	node **arr;
}graph;
graph *creategraph(int V)
{
	int i;
	graph *g = (graph *)(malloc(sizeof(graph)));
	g->ver=V;
	g->arr=(node **)malloc(sizeof(node)*V);

	for(i=0;i<V;i++)
		g->arr[i]=NULL;

			return g;
}
void insert(graph *g,int src,int dest)
{
	node *a=createnode(dest);
	a->next=g->arr[src];
	g->arr[src]=a;
	node *b=createnode(src);
	b->next=g->arr[dest];
	g->arr[dest]=b;
}
void print(graph *g)
{
	node *x;
	int i;
	for(i=0;i<(g->ver);i++)
	{
		x=g->arr[i];
		while(x!=NULL)
		{
			cout<<x->data<<" ";
			x=x->next;
		}
		cout<<endl;
	}
}
int main()
{
	int i,j,k,l;
	int n,V;
	cin>>V;
	graph *g;
	g=creategraph(V);
	insert(g,0,1);
	insert(g,0,3);
	insert(g,0,2);
	insert(g,1,2);
	insert(g,3,2);
	insert(g,3,4);
	print(g);
	return 0;
}





