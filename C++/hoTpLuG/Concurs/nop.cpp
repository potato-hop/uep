#include <iostream>
using namespace std;
int main()
{
	long long a = 0, b = 0, p = 0, c = 2, z = 1, q = 1, x = 0;
	cin >> a >> b;
	while(c < a)
	{
		p = q;
		q = q + z;
		z = p;
		c++;
	}
	cout << q << endl;
	/*x = q / b;
	cout << x << endl;
	z = q - (x * b);
	cout << z;*/
}
