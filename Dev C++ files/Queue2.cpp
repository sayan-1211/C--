#include <bits/stdc++.h>
#include<iostream>
using namespace std;
void printQueue(queue<int> Q)
{
	while (!Q.empty())
	{
		cout << " " << Q.front();
		Q.pop();
	}
	cout << endl;
}
void explainQueue()
{
	queue <int> q;
	q.push(1);
	q.push(2);
	q.push(4);
	printQueue(q);
	q.back()+=5;
	cout << q.back() << endl;
	cout << q.front() << endl;
	q.pop();
	cout << q.front() << endl;
}

int main()
{
	explainQueue();
	return 0;
}
