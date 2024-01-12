#include <iostream>
#include <malloc.h>
using namespace std;
struct Node
{
	struct Node *prev;
	int data;
	struct Node *next;
};
struct Node *head=NULL;
void insert_begin();
void insert_middle();
void insert_end();
void delete_begin();
void delete_middle();
void delete_end();
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
			insert_begin();
			break;
		case 2:
			insert_middle();
			break;
		case 3:
			insert_end();
			break;
		case 4:
			delete_begin();
			break;
		case 5:
			delete_middle();
			break;
		case 6:
			delete_end();
			break;
			
		case 7:
		    display();
			break;	
		default:
		    cout<< "Wrong output"<< endl;
			return 0;		
	}
    }
}
void insert_begin()
{
	struct Node *newnode;
	newnode=(struct Node*)malloc(sizeof(struct Node));
	cin >> newnode->data;
	if (head==NULL)
	{
		newnode->prev=head;
		newnode->next=head;
		head=newnode;
	}
	else
	{
	newnode->next=head;
	head->prev=newnode;
	newnode->prev=NULL;
	head=newnode;
    }
}
void insert_middle()
{
	int item;
	cout << "Insert value after" <<endl;
	cin >> item;
	struct Node *ptr=head;
	struct Node *newnode;
	newnode=(struct Node*)malloc(sizeof(struct Node));
	cin >> newnode->data;
	while (ptr->data!=item)
	{
		ptr=ptr->next;
	}
	newnode->next=ptr->next;
	ptr->next->prev=newnode;
	ptr->next=newnode;
	newnode->prev=ptr;
}
void insert_end()
{
	struct Node *ptr=head;
	struct Node *newnode;
	newnode=(struct Node*)malloc(sizeof(struct Node));
	cin >> newnode->data;
	if(head==NULL)
	{
		newnode->next=head;
		newnode->prev=NULL;
		head=newnode;
	}
	else
	{
	while (ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	ptr->next=newnode;
	newnode->prev=ptr;
	newnode->next=NULL;
    }
}
void delete_begin()
{
	struct Node *ptr=head;
	head=head->next;
	head->prev=NULL;
	free (ptr);
}
void delete_middle()
{
	int item;
	cout << "Delete which value ?" <<endl;
	cin >> item;
	struct Node *ptr=head;
	struct Node *cpt=head;
	while (ptr->data!=item)
	{
		cpt=ptr;
		ptr=ptr->next;
	}
	cpt->next=ptr->next;
	ptr->next->prev=cpt;
	free (ptr);
}
void delete_end()
{
	struct Node *ptr=head;
	struct Node *cpt=head;
	while (ptr->next!=NULL)
	{
		cpt=ptr;
		ptr=ptr->next;
	}
	free (ptr);
	cpt->next=NULL;
}
void display()
{
	struct Node *ptr=head;
	struct Node *cpt;
	while (ptr->next!=NULL)
	{
		cout << ptr->data << " ";
		ptr=ptr->next;
	}
	while (ptr->prev!=NULL)
	{
		cout << ptr->data << " ";
		ptr=ptr->prev;
	}
	
	cout << ptr->data << endl;
}
