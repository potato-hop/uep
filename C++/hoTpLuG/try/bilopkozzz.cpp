#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	srand(time(0));
	int z[100], a = 0, h = 0, s = 0;
	while(a < 100)
	{
	z[a] = rand() % 101;
	s = s + z [a];
	if(z[a] % 2 == 0)
	{
		cout << z[a] << "_";
		h++;
	}
	a++;
	}
	cout << endl;
	cout << h << endl;
	cout << s;
}
