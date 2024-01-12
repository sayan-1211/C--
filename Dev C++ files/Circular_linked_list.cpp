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
    return 0;
}
void insert_begin()
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
	ptr->next =newnode;
}
void insert_end()
{
	struct Node *newnode;
	newnode=(struct Node*)malloc(sizeof(struct Node));
	cin >> newnode->data;
	if (tail==NULL)
	{
		newnode->next=newnode;
		head=newnode;
		tail=newnode;
	}
	else
	{
	newnode->next=head;
	tail->next=newnode;
	tail=newnode;
    }
}
void delete_begin()
{
	struct Node *ptr=head;
	head=head->next;
	tail->next=head;
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
	free (ptr);
}
void delete_end()
{
	struct Node *ptr=head;
	while (ptr->next!=tail)
	{
		ptr=ptr->next;
	}
	free (tail);
	tail=ptr;
	tail->next=head;
}
void display()
{
	struct Node *ptr=head;
	while (ptr->next!=head)
	{
		cout << ptr->data << " ";
		ptr=ptr->next;
	}
	cout << ptr->data <<endl;
}

