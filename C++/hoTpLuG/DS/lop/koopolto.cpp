#include <iostream>
using namespace std;
int main()
{
	int z, q, s, m, r;
	int p = 0;
	int l = 1;
	cout << "Cnachala_sistema,_potom_chislo" << endl;
	cin >> z >> q;
	s = q;
	m = s % z;
	if(s < z)
	{
		p = q;
	cout << p << endl;
	}
	while(m > 0)
	{
		//r = 10 * l;
		m = s % z;
		//p = (m * r) + p;
		s = (s - m) / z;
                cout << m <<endl;
		//l++;
	}
	cout << p << endl;
}
