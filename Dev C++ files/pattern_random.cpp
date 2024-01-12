#include <iostream>
using namespace std;
int main()
{
		int i,j,k,s,sp,st,n;
		cout << n;
        sp=2*n-2;
        for (i=1;i<=2*n-1;i++)
        {
            if (i<=n)
            st=i;
            else
            st=2*n-i;
            for (j=1;j<=st;j++)
            cout << "*";
            for (s=1;s<=sp;s--)
            cout << " ";
            for (k=1;k<=st;k++)
            cout << "*";
            cout << endl;
            if (i<n)
            sp-=2;
            else
            sp+=2;
        }
        return 0;
}
