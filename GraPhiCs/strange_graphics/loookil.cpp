#include <glcanvas.hpp>
using namespace cnv;

void f()
{
	circle(100, 100, 50, hexcolor(200, 150, 10));
	circle_fill(200, 200, 50, hexcolor(200, 150, 10));
	line(100, 150, 200, 50);
	rect(10, 100, 200, 200, hexcolor(0,0,0));

	glutSwapBuffers();
}

int main()
{
	window(600, 600);
	glutDisplayFunc(f);
	glutMainLoop();
}

