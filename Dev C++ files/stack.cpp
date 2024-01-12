#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int top=-1,m=5;
int s[10];
void push();
void pop();
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
			push();
			break;
		case 2:
			pop();
		    break;
		case 3:
			display();
		    break;
		default:
		    cout << "Wrong choice" << endl; 
	}
	}while (i<5);
	return 0;
}
void push()
{
	int e;
	cout << "Enter the element" << endl;
	cin >> e ;
	if (top==m-1)
	cout << "Overflow" ;
	else
	{
		top=top+1;
		s[top]=e;
	}
}
void pop()
{
	
}
void display()
{
	
}
