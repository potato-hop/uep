#include <iostream>
using namespace std;
int main()
{
int n, z, q, v, c;
cin >> n;
v = n;
c = n;
while(v > 0)
{
	if(c > 1)
	{
	cout << "x";
    --c;
	}
	else
	{	
		cout << "x" << endl;
--v;
c = n;
	}
}
}
