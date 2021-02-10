#include <iostream> 
using namespace std;
int main()  
{
	int z, q;
	cin >> z >> q;
	z = z - q;
	cin >> q;
	z = z + q;
	if(z <= 0)
		--z;
	cout << z << endl;
}
