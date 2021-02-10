#include <iostream>
using namespace std;
int main()
{
	int n, z, d = 0, m = 0;
	cin >> n;
	int x[n];
	while(n != 0)
	{
		cin >> x[m];
		if(x[m] < z)
			z = x[m];
		d = d + x[m];
		n--;
		m++;
	}
	cout << d - z;
}
