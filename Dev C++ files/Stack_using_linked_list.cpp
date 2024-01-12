#include <iostream>
#include <malloc.h>
using namespace std;
struct Node
{
	int data;
	struct Node *next;
};
struct Node *head=NULL;
struct Node *tail=NULL;
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
		newnode->next=NULL;
		head=newnode;
		tail=newnode;
	}
	else
	{
	newnode->next=NULL;
	tail->next=newnode;
	tail=newnode;
    }
}
void stack_pop()
{
	struct Node *ptr=head;
	while (ptr->next!=tail)
	{
		ptr=ptr->next;
	}
	
	if (head!=tail)
	{
		
		free(tail);
	tail=ptr;
	tail->next=NULL;
		
	}
	else
	{
		cout << "No elements left" << endl;
      free(tail);
		head=NULL;
		
    }
}
void display()
{
	struct Node *ptr=head;
	struct Node *cpt=tail;
	struct Node *end=tail;
	while (cpt!=head)
	{
	end=cpt;
	while (ptr!=end)
	{
		cpt=ptr;
		ptr=ptr->next;
	}
	cout << ptr->data<< endl;
	ptr=head;
    }
	cout << head->data << endl;
}
