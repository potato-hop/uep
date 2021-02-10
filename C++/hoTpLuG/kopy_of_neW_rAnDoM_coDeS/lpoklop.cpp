#include <iostream>
using namespace std;
int main()
{
	int n, c, g, v, p, q, o = 0, h, b, z = 10;
	cin >> n >> g;
	p = n;
		while(p > 9)
			{
				o++;
				p = p / z;
				cout << o << endl;
			}
		if(o > (g - 1))
			{
				h = o - (g - 1);
				cout << h << endl;
				b = n * 10:;
				cout << b;
					while(h > 0)
						{
							--h;
							z = z * 10;
						}
			}
		if(o < g)
			{
				b = n;
			}
	c = b / z;
	c = c * 10;
	v = c / 10;
	v = v * 10;
	q = c - v;
	cout << q;
}
