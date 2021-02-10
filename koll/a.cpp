#include <iostream>
using namespace std;
int main()
{
	int n, a, v, d, z = 0, k = 0;
	cin >> n >> a >> v >> d;
	if(n + 1 >= a)
		z++;
	while(z == 1)
	{
		if(n * d <= v)
		{
			v = v - n * d;
			k = k + n + 1;
		}
		if(n * d > a && (a - 1) * d <= v)
		{
			v = v - (a - 1) * d;
			k = k + a;
		}
		if(n * d > v && (a - 1) * d > v)
			break;
	}
	while(z == 0)
	{
		if((a - 1) * d <= v)
		{
			v = v - (a - 1) * d;
			k = k + a;
		}
		if(n * d <= v && (a - 1) * d > v)
		{
			v = v - n * d;
			k = k + n + 1;
		}
		if(n * d > v && (a - 1) * d > v)
			break;
	}
	while(v >= d)
	{
		v = v - d;
		k = k + 1;
	}
	cout << k;
}
