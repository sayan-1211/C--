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
void queue_insert();
void queue_delete();
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
			queue_insert();
			break;
		case 2:
			queue_delete();
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
void queue_insert()
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
void queue_delete()
{
	struct Node *ptr=head;
	ptr=ptr->next;
	
	free(head);
	head=ptr;
}
void display()
{
	struct Node *ptr=head;
	while (ptr!=tail)
	{
	    cout << ptr->data<< " ";
	    ptr=ptr->next;
    }
	cout << tail->data << endl;
}
