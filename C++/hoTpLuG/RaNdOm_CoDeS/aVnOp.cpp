#include <iostream>
using namespace std;
int main()
{
int z = 0;
int n;
cout << "kol-vo_chisel";
cin >> n;
while(n > 0)
{
	int p;
	cout << "chislo";
	cin >> p;
if(p % 2 == 0 && p > 0)
{
	++z;
--n;
}
else
--n;
}
cout << z;
}
