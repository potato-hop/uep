#include <iostream>
using namespace std;
int main()
{
	/*int a, b, z = 1, d, o = 0, m, n;
	cin >> a >> b;
	m = b - a;
	n = a;
	while(n > 9)
	{
		++z;
		n = n / 10;
	}
	while(o < 1)
	{
		d = d * 10; 
		if(a %)
	}*/
	int a, q, b, z, d, o, m, n, p, l;
	cin >> a >> b;
	o = 0;
	while(o < 2)
	{
		n = 0;
		q = 1;
		if(o == 0)
			m = a;
		if(o == 1)
			m = b;
		while(m > 0)
			{
				d = m % 3;
				z = m / 3;
				m = z;
				n = (q * d) + n;
				q = q * 10;
			}
		o++;
		if(o == 1)
			p = n;
		if(o == 2)
			l = n;
	}
	o = 1;
	n = l;
	//cout << p << l;
	while(n < b)
	{
		if(n == o)
		{
			cout << o << endl;
		}
		if(n > 0)
		{
			o = o * 10
		}
	}
}
