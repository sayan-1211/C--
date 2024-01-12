#include <iostream>
#include <malloc.h>
using namespace std;
struct Node
{
	int data;
	struct Node *next;
};
struct Node *head=NULL;
void stack_push();
void stack_pop();
void display();
int main()
{
	int ch;
	while (1)
	{
	cout << "Insert choice" << endl;
	cin >> ch;
	switch (ch)
	{
		case 1:
			stack_push();
			break;
		case 2:
			stack_pop();
			break;
		case 3:
		    display();
			break;
		default:
		    cout<< "Wrong output"<< endl;
			return 0;		
	}
    }
    return 0;
}
void stack_push()
{
	struct Node *newnode;
	newnode=(struct Node*)malloc(sizeof(struct Node));
	cin >> newnode->data;
	if (head==NULL)
	{
		newnode->next=newnode;
		head=newnode;
		tail=newnode;
	}
	else
	{
	newnode->next=head;
	tail->next=newnode;
	head=newnode;
    }
}
