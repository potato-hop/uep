#include <iostream>
using namespace std;
int main()
{
	int n, z = 0;
	cin >> n;
	while(n != 1)
	{
		if(n % 3 == 0)
			n = n / 3;
		else
			n = n - 1;
		z++;
	}
	cout << z;
}
