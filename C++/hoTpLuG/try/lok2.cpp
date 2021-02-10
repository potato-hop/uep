#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;
int main()
{
	srand(time(0));
	int z[10], q = 0, p, k = 1, a, b;
	while(q < 10)
	{
		z[q] = rand() % 11;
		cout << z[q] << "_";
		q++;
	}
	cout << endl;
	q = 0;
	cout << "Veditr_K";
	cin >> k;
	while(q < k)
	{
		a = 0;
		b = 1;
		p = z[a];
		while(b < 10)
		{
			z[a] = z[b];
			a++;
			b++;
		}
		z[9] = p;
		q++;
	}
	q = 0;
	while(q < 10)
	{
		cout << z[q] << "_";
		q++;
	}
}
