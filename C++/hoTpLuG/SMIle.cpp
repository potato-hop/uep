#include <iostream>
using namespace std;
int main()
{
	int n, x, c = 0, z = 0, k;
	cin >> n >> k;
	while(c < n)
	{
		z = 1 + z * 2;
		c++;
	}
	c = 0;
	//cout << z << endl;
	int m = (z - 1) / 2;
	//cout << m << endl;
	while(8 > 1)
	{
		if(k > z)
		{
			cout << "Strock_Menche_chem_k" <<endl;
			break;
		}
		if(k > (z - m))
		{
			k = k - (z - m);
			x = n - k;
			break;
		}
		if(k <= (z - m))
		{
			x = n + 1 - k;
			break;
		}
	}
	if(x == 0)
		x = 1;
	cout << x << endl;
}
