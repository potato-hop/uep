#include <iostream> 
using namespace std;
int main()  
{
	long c; 
	int L;
	cin >> c >> L;
	unsigned long i = 2;
	unsigned long long zopa = 1, zapa = 1;
	while(i < c)
	{
		zopa = zapa + zopa;
		zapa = zopa - zapa;
		i++;
	}
	cout << zopa % L << endl;
}
