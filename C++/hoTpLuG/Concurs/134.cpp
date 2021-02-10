#include <iostream>
using namespace std;
int main()
{
	unsigned long long n, q;
	cin >> n >> q;
	long i = 2;
	unsigned long long z[n];
	z[0] = 0;
	z[1] = 1;
	while(i < n + 1)
	{
		z[i] = z[i - 1] + z[i - 2];
		i++;
	}
	i--;
	z[0] = z[i] % q;
	cout << z[0];
}
