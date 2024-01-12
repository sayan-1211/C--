#include <iostream>
#include <malloc.h>
using namespace std;
struct Node
{
	int data;
	struct Node *next;
};
struct Node *bottom=NULL;
struct Node *top=NULL;
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
	struct Node *ptr;
	newnode=(struct Node*)malloc(sizeof(struct Node));
	cin >> newnode->data;
	if (bottom==NULL)
	{
		newnode->next=NULL;
		bottom=newnode;
		top=newnode;
	}
	else
	{
		newnode->next=top;
		top=newnode;
    }
}
void stack_pop()
{
	struct Node *ptr=top;
	if (ptr==bottom)
	{
		cout << "No elements left, nothing to display !!" << endl;
        top=NULL;
		bottom=NULL;
	}
	else
	{
		ptr=ptr->next;
	    free(top);
	    top=ptr;
	}
}
void display()
{
	struct Node *ptr=top;
	while (ptr!=bottom)
	{
	    cout << ptr->data<< endl;
	    ptr=ptr->next;
    }
	cout << bottom->data << endl;
}
