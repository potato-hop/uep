#include <iostream>
using namespace std;
int main()
{
	int y, b = 0, c = 0, n, z = 0, q = 1;
	cin >> n;
	while(z < n)
	{
		z++;
		c = c + (z * q);
		q = q * 10;
		cout << c << endl;
	}
	q = 1;
	while()
	{
		b++;
		if(b % 2 == 0)
		{
			y = c / (q * 10);
			c - y;
		}
		q = q * 10;
	}
}
