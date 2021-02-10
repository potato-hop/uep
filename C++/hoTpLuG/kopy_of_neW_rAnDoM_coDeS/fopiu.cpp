#include <iostream>
using namespace std;
int main()
{
	int n, m, o = 1, j = 5, x = 0, a, z = 5000;
	cin >> n;
	m = n;
	while(m > 0)
	{
		if(m >= z)
		{
			m = m - z;
			x++;
		}
		if(m < z)
		{
			o++;
			if(z == 1 && o % 2 == 1)
			{
				a = x;
				z = 2;
				x = x / 2;
				a = a - (x * 2);
			}
			cout << z << "_" << x << endl;
			if(z == 2 && o % 2 == 1)
			{
				cout << "1_" << a << endl;
			}
		    z = z / j;
			x = 0;
			if(o % 2 == 0)
				j = 2;
			if(o % 2 == 1)
				j = 5;
		}
	}
}
