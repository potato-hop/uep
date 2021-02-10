#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>
using namespace std;
int main()
{
	int z, x[8], m, L = 0;
	string n;
	cin >> z;
	while(z >= 0)
	{
		m = 8;
		while(m > 0)
		{
			--m;
			x[m] = 0;
		}
		getline(cin, n);
		while(L != 2)
		{
			m = 0 + L;
			x[0 + (L * 4)] = n[0 + L];
			x[1 + (L * 4)] = n[0 + L];
			while(m != 7)
			{
				m++;
				if((m + L) % 2 == 0)
				{
					if(n[m] > x[0 + (L * 4)])
					{
						x[0 + (L * 4)] = n[m];
						x[2 + (L * 4)] = m;
					}
					if(n[m] < x[1 + (L * 4)])
					{
						x[1 + (L * 4)] = n[m];
						x[3 + (L * 4)] = m;
					}
				}
			}
			L++;
		}
		cout << n;
		--z;
	}
}
