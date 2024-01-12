#include <bits/stdc++.h>
using namespace std;

//function to print the queue
void printQueue(queue<int> q)
{
	//printing content of queue 
	while (!q.empty()){
		cout<<" "<<q.front();
		q.pop();
	}
	cout<<endl;
}

//Main fubction
int main()
{
	// declaring an empty queue
	queue<int> Q;

	//inserting elements
	Q.push(10);
	Q.push(20);
	Q.push(30);
	cout<<"Queue size before printing the elements: "<<Q.size()<<endl;
	cout<<"Queue element are... "<<endl;
	printQueue(Q);
	cout<<"Queue size after printing the elements: "<<Q.size()<<endl;

	return 0;
}
