#include <iostream>
using namespace std;

void ido() 
{
	int *x = new int;
	cout << endl << &x << endl << *x << endl << x << endl;
	cout << *x + 5;
	//return x;
	delete x;
	//int *x = new int;
	//cout << endl << &x << endl << *x << endl << x << endl;
}

int main(){
//cout << ido();
ido();
system ("ls");
return 0;
}
