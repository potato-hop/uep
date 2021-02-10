#include <iostream>
using namespace std;
int main()
{
	long long k, j, z = 0;
	unsigned short n;
	cin >> n >> k;
	j = n;
	while(j > 0)
	{
		z = z + j;
		j--;
	}
	j = -1;
	while(k > 0)
	{
		k = k - z;
		j++;
	}
	if(k == 0)
		j++;
	cout << j;
}
