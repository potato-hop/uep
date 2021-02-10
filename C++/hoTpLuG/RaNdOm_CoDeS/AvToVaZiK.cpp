#include <iostream>
using namespace std;
int main()
{
int z, x;
cin >> z >> x;
int q = 1;
int r = 0;
while(q < z)
{
if(z % q == 0 && x % q == 0)
{
	cout << "VOT DELITEL__" << q << endl;
	++q;
	++r;
}
else
++q;
}
cout << "VSEGO__" << r;
}
