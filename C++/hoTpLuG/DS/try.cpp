#include <iostream>
using namespace std;
int main()
{
    int a, m = 0, c = 1;
	cin >> a;	// IDET_OPTIMIZACIA...
	int q = a - 1;
	while(a < (a + 1))
	{
		q = a - c;
		m = a - (a - q - c); 
		cout << m << q << endl;
		c++;
		/*if(m == (a - 2))
		{
			break;
			break;
		}
		if(q == a)
		{
			m++;
			q = 1 + m;
		}*/
	}
}
