#include<stdio.h>
#include <math.h>
int main()
{
	int n;
	char ch;
	printf ("Enter a charecter");
	scanf("%c",&ch);
	n=(int)ch;
	if (n>=65 && n<=90)
	printf ("Capital letter");
	else if (n>=97 && n<=122)
	printf ("Small letter");
	else if (n>=48 && n<=57)
	printf ("Digit");
	else
	printf ("Special symbol");
	return 0;
}
