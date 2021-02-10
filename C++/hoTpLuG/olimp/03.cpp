#include <iostream> 
using namespace std;
int main()  
{
	unsigned long long z, q, c = 0;
	int rp;
	cin >> z;
	q = z;
	while(q > 0)
	{
		q = q / 10;
		c++;
	}
	//rp = c - (rp * 3);
	if(c % 3 == 0)
		c--;
	rp = c / 3;
	c = c / 3;
	q = 1;
	while(c > 0)
	{
		q = q * 1000;
		c--;
	}
	//cout << rp << endl;
	//cout << c << endl;
	while(rp >= 0)
	{
		/*if(c == 0 && rp > 0)
		{
			c--;
			rp--;
		}*/
		c = z / q;
		z = z - (c * q);
		q = q / 1000;
		cout << c;
		if(c == 0)
			cout << "00";
		if(rp == 0)
			break;
	    cout << ".";
		rp--;
	}
	cout << endl;
}
