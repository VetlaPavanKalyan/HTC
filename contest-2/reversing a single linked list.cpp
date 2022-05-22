#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct node
{
	int x;
	struct node *n;
}*head=NULL;
void ins(int a)
{
	struct node *n=(struct node *)malloc(sizeof(struct node));
	n->x=a;
	n->n=NULL;
	if(head)
	{
	struct node *t=head;
	while(t->n)	
	{
		t=t->n;
	}
	t->n=n;
	}
	else
	head=n;
}
void dis()
{
	struct node *t=head;
	while(t)	
	{
		cout<<t->x<<" ";
		t=t->n;
	}
	cout<<"\n";
}

int main()
{
int n,i,j,k,x;
	cout<<"Enter no of values to enter\n";
	cin>>n;
	cout<<"Enter values\n";
	while(n--)
	{
		cin>>i;
		ins(i);
	}
	cout<<"Before reversing\n";
	dis();
	struct node *t=head,*t1=head,*t2=NULL;
	while(t1)
	{
		t=t1;
		t1=t1->n;
		t->n=t2;
		t2=t;
	}
	head=t2;
	cout<<"After reversing\n";
	dis();
}
