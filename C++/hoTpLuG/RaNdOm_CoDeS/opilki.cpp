#include <iostream>
using namespace std;
int main()
{
int z;
int h = 0;
cin >> z;
cout << z << "->" << endl;
while(z > 1)
{
if(z % 3 == 0)
	z = z / 3;
else
	z = z - 1;
cout << z << "->" << endl;
h++;
}
cout << h << endl;
cout << z;
}
