#include <iostream>
using namespace std;
int main()
{
int z, x, c;
cout << "vvedite n, g, y" << endl;
cin >> z >> x >> c;
int p = 0;
int q = z;
while(p * x > q * c)
{
	cout << "operation" << endl;
++p;
q = q - 1;
}

cout << p;
}
