#include <iostream>
using namespace std;
int main()
{
	int i,n,S=0;
	cout << "Enter a number" << endl;
	cin >> n;
	for (i=1; i<=n; i++){
		if (i==4)
		continue;
	    S+=i;	
	}
	cout << S << endl;
	return 0;
}
