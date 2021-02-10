#include <iostream>
using namespace std;
int main()
{
	long double f = 0., k = 0.;
	const double pi = 3.14159264;
	cout << "DEISTVIE_?" << endl; 
	cout << "1_rad_to_grad" << endl;
    cout << "2_grad_to_rad" << endl;
	int clpo;
	cin >> clpo;
	switch(clpo)
	{
		case 1:
			{
				cout << "rad-?" << endl;
				cin >> f;
				k = (f * 180) / pi;
				break;
			}
		case 2:
			{
				cout << "grad-?" << endl;
				cin >> f;
				k = (f * pi) / 180;
				break;
			}
		case 666:
		cout << "_Go_tO_HeLl_XD_";	
		default:
			{
		cout << "htO-To_Ne_tAk";	
		break;
			}
	}
	cout << k << endl;
}
