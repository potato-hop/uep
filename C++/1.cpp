#include <iostream>
using namespace std;

void F(int n)
{
  std::cout << n;
  if (n > 3) {
    F(n - 1);
    F(n / 2);
  }
}

int main()
{
	cout << 15/2;
}
