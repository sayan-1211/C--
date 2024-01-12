#include<iostream>
using namespace std;
int main()
{
	int n,i=0,S=0;
	float avg;
	cout<< "Enter the  numbers"<<endl;
	do
	{
		cin>> n;
		S+=n;
		i++;
	}while (i<5);
	avg=(float)S/5;
	cout<< "Average is"<<avg;
	return 0;
}
