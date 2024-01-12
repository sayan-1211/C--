#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int front=-1,rear=-1,maxsize=3;
int s[10];
void insert();
void deletion();
void display();
int main()
{
	int ch,i=0;
	do
	{
	cout<<"Enter choice";
	cin>>ch;
	switch (ch)
	{
		case 1:
			insert();
			break;
		case 2:
			deletion();
		    break;
		case 3:
			display();
		    break;
		default:
		    cout << "Wrong choice" << endl;
			return 0; 
	}
	}while (i<5);
	return 0;
}
void insert()
{
	int e;
	cout << "Enter the element" << endl;
	cin >> e ;
	if (rear==maxsize-1)
	cout << "Overflow" ;
	else
	{
		rear=rear+1;
		s[rear]=e;
	}
}
void deletion()
{
	if (front==rear)
	cout << "Underflow" ;
	else
	{
		s[front]=NULL;
		front=front+1;
	}
}
void display()
{
	for (int i=front+1;i<=rear;i++)
	cout << s[i] << " " ;
}
