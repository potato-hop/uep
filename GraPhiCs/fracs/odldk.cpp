#include <glcanvas.hpp>
#include <iostream>
#include <rlutil.h>
#include <windows.h>
using namespace cnv;
using namespace std;
using namespace rlutil;

int o, z;

void Svasta(int z)
{
	line(z/2, z/3, z/2, z/1.5);
	line(z/3, z/2, z/1.5, z/2);
	line(z/3, z/1.5, z/2, z/1.5);
	line(z/3, z/2, z/3, z/3);
	line(z/1.5, z/3, z/2, z/3);
	line(z/1.5, z/2, z/1.5, z/1.5);
	glutSwapBuffers();
}	

void WTF()
{
	rect_fill(0, 0, z, z, hexcolor(2000, 0, 0));
	glutSwapBuffers();
	while(o > 0)
	{
		Svasta(z);
		glutMainLoop();
		o--;
		z = z/2;//Vot a zadal novoe znachenie, no cikl ne udet 2 raz...
	}
}

int main()
{
	cls();
	setColor(WHITE);
	locate(tcols()/2 - 9, trows()/2);
	cout << "WRITE_YOUR_DENSITY" << endl;
	getch();
	cls();
	cin >> z;
	cls();
	locate(tcols()/2 - 8, trows()/2);
	cout << "TESTING_OF_FRACS" << endl;
	getch();
	cls();
	locate(tcols()/2 - 12, trows()/2);
	cout << "I_NEED_COUT_OF_SVASTA..." << endl;
	resetColor();
	getch();
	cls();
	cin >> o;
	window(z, z);
	glutDisplayFunc(WTF);
	glutMainLoop();
}
