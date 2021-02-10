#include <iostream> 
using namespace std;
int main()  
{
	long long z, x, r404 = 1, w32, z86, t39 = 1;
	int c = 0, c79 = 0, l34 = 0, x146 = 0;
	cin >> z >> x;
	/*z86 = x;
	while(x > 0)
	{
		z86 = z86 / 10;	
		c++;
	}*/
	z86 = z;
	while(z86 > 0)
	{
		z86 = z86 / 10;
		c79++;
		r404 = r404 * 10;
	}
	z86 = z;
	while(z86 <= x)
	{
		if((z86 / r404) > 0)
			r404 = r404 * 10;
		w32 = z86;
		t39 = r404 / 10;
		while(t39 > 0)
		{
			//cout << l34 << endl;
			l34 = l34 + (w32 / t39);
			w32 = w32 - ((w32 / t39) * t39);
			t39 = t39 / 10;
		}
		if(l34 % 2 == 0)
			x146++;
			//cout << z86 << endl;
		l34 = 0;
		z86++;
	}
	cout << x146 << endl;
}
