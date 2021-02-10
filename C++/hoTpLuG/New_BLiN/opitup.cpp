#include <iostream>
using namespace std;
int main()
{
	int n, p = 0, z = 0, b, y = 1, h, l;
	cout << "number___System" << endl;
	cin >> n >> l;
	b = n;
	while(b > 0)
	{
		h = b % l;
	    b = (b - h) / l;
	    y = 10 * y;
		z = z + (h * y);
		p++;
	}
	z = z / 10;
	cout << "_number_" << z << "_number_of_number_" << p << endl;
}
