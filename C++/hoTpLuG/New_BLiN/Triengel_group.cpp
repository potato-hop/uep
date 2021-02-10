#include <iostream>
using namespace std;
int main()
{
cout << "_введите_стороны_(3)_" << endl;
int a, s, d;
   if(a * a == s * s + d * d && s * s == a * a + d * d && d * d == a * a + s * s)
       {
        cout << "_прямоугольный_треугольник_" << endl;
       }
   if(a > d + s || s > a + d || d > a + s)
       {
        cout << "_тупоугольный_треугольник_" << endl;
       }
   if(a == s == d)
       {
        cout << "_равносторонний_треугольник_" << endl;
        break;
       }
   if(a == s || a == d || s == d)
       {
        cout << "_равнобедренный_треугольник_" << endl;
        break;
       }
   else
        cout << "_остроугольный_треугольник_" << endl;
}
