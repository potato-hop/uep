#include <iostream>
using namespace std;
int main()
{
	int k, n, p = 0, z = 1, l;
	cout << "snachala_k_potOm_n" << endl;
	cin >> k >> n;
	if(n > k)
	{
		l = n - k;
		while(p == 0)
		{
		if((l * z) % k == 0)
		{
			p++;
		   cout << z;
		}	   
		z++;
		}
	}
	if(k > n)
	{
		l = k - n;
		while(p == 0)
		{
			if((l * z) % n == 0)
			{
				p++;
				cout << z;
			}
		++z;
		}
	}
	if(n = k)
		cout << "0";
}
