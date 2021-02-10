#include <iostream>
using namespace std;
int main()
{
	long long n, m = 0, k, z = 0, x = 0;
	cin >> n;
	k = n;
	while(k != 0)
	{
		if(k % 2 == 1)
			z++;
		k = k / 2;
		x++;
	}
	k = 1;
	if(x == z)
		k++;
	while(x != 1)
	{
		k = k * 2;
		x--;
	}
	while(z != 0)
	{
		m = m + (k / x);
		x = x * 2;
		z--;
	}
	cout << m;
}
