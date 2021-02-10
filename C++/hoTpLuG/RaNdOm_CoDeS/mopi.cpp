#include <iostream>
using namespace std;
int main()
{
	int c = 1, z = 1, v, l, p = 1;
	cin >> v;
	while(v > p)
	//if
	{
		c++;
		p = c + p;
		l = p - v;
	}	
	z = c - l;
	cout << "stRoKa_" << c << endl << "chislo_" << z;
}
