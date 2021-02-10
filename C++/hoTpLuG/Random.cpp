#include <iostream>
using namespace std;
int main()
{
	int x = 0, n, z = 0;
	cin >> n;
	while(1 < 999)
	{
		z = x + z;
		if(z >= n)
		{
			break;
		}
		++x;
	}
	cout << x << endl;
}
