#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
typedef struct node
{
	int data;
	struct node *next;
}node;
typedef struct Graph
{
	int ver;
	node **arr;
}Graph;
struct node* newnode(int d)
{
	node *x;
	x=(node *)malloc(sizeof(node));
	x->data=d;
	x->next=NULL;
	return x;
}
struct Graph *creategraph(int V)
{
	int i;
	struct Graph * graph=(Graph *)(malloc(sizeof(struct Graph)));
	graph->ver=V;
	graph->arr=(node **)(malloc(sizeof(node)*V));
	for(i=0;i<V;i++)
		graph->arr[i]=NULL;
	return graph;
}
void addEdge(Graph *graph,int src,int dest)
{
	node *x=newnode(dest);
	x->next=graph->arr[src];
	graph->arr[src]=x;

	x=newnode(src);
	x->next=graph->arr[dest];
	graph->arr[dest]=x;

}
void print(Graph *graph)
{
	int i;
	node *x=NULL;
	for(i=0;i<graph->ver;i++)
	{
		x=graph->arr[i];
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
	int i,j,k,V;
	V=5;
	Graph *graph;
	graph=creategraph(V);
	addEdge(graph, 0, 1);
	addEdge(graph, 0, 4);
	addEdge(graph, 1, 2);
	addEdge(graph, 1, 3);
	addEdge(graph, 1, 4);
	addEdge(graph, 2, 3);
	addEdge(graph, 3, 4);
	print(graph);
	return 0;
}












