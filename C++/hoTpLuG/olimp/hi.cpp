#include <iostream> 
using namespace std;
int main()  
{
	int n, m, u, z;
	cin >> n >> m >> u;
	if(u > 2)
	{
		z = (n + m) / u;
		cout << z <<endl;
	}	
	if(u < 3)
		cout << "0" <<endl;
}
