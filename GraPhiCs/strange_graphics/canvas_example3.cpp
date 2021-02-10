#include <glcanvas.hpp>
using namespace cnv;

void f()
{
	glutSwapBuffers();
}

void on_mouse(int x, int y)
{
	circle_fill(x, y, rand() % 10, hexcolor(rand() % 256, rand() % 256, rand() % 256));
	glutPostRedisplay();
}

int main()
{
	window(600, 600);
	glutDisplayFunc(f);
	glutPassiveMotionFunc(on_mouse);
	glutMainLoop();
}

