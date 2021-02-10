#include <iostream>
using namespace std;
int main()
{
	long double n, z, f, p = 1, q;
	cin >> n;
	f = n;
	while(f > 1)
	{
		q = f;
		--f;
		p = p * q;
	}
	cout << p << endl;
}
