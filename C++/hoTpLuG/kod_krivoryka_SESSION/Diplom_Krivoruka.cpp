#include <iostream>
//#include <rlutil.h>
#include <glcanvas.hpp>
#include <fstream>
#include <cstdlib>

using namespace std;
//using namespace rlutil;
using namespace cnv;

int m, n, q, x, i, k, v, f, j, z;
void okr()
{
	circle_fill(n, m, 50, hexcolor(0, 0, 0));
}
void okr2()
{
	circle_fill(n, m, 50, hexcolor(0, 0, 0));
}
void lin()
{
	line(f, v, q, x);
}
//void f()
//{
//}
int main() 
{
	//int z, c = -1, l = 0, u, y;
	/*cls();
	setColor(BLACK);
	setBackgroundColor(WHITE);
	cout << "Cout of points - ?" << endl;
	cin >> z;
	unsigned long long x[z * z + 1];
	cout << "All lines between the points, zero - end of the reading..." << endl;
	while(l != z)
	{
		l++;
		cout << l << ":" << endl;
		do
		{
			c++;
			cin >> x[c];
		}
		while(x[c] != 0 && c != ((z * l) - 1));
		cout << ";" << endl;
		c = z * l - 1;
	}*/
	ifstream xlop("point.txt");
	if(!xlop)
	{
		cout << "can't_open";
		return 1;
	}
	xlop >> z;
	int u [i][k];
	for(int i = 0; i < z; ++i)
		for(int k = 0; k < z; ++k)
			xlop >> u[i][k];
	window(600, 600);
	//glutDisplayFunc(f);
	glutMainLoop();
	glutSwapBuffers();
}
