#include <iostream>
#include <rlutil.h>
using namespace std;
int main()
{
	CursorHider kispoit;
	cls();
	setColor(RED);
cout << "_�������_�������_(3)_" << endl;
int a, s, d;
cin >> a >> s >> d;
   if(a * a == s * s + d * d && s * s == a * a + d * d && d * d == a * a + s * s)
       {
        cout << "_�������������_�����������_" << endl;
       }
   if(a > d + s || s > a + d || d > a + s)
       {
        cout << "_������������_�����������_" << endl;
       }
   if(a == s == d)
       {
        cout << "_��������������_�����������_" << endl;
        break;
       }
   if(a == s || a == d || s == d)
       {
        cout << "_��������������_�����������_" << endl;
        break;
       }
   else
        cout << "_�������������_�����������_" << endl;
   cls();
   resetColor();
}
