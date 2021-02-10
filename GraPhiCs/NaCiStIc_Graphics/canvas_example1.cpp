#include <glcanvas.hpp>
using namespace cnv;

void f()
{
	line(300, 200, 300, 400);
	line(200, 300, 400, 300);
	line(200, 400, 300, 400);
	line(400, 200, 300, 200);
	line(200, 300, 200, 200);
	line(400, 300, 400, 400);
	glutSwapBuffers();
}

void draw()
{
	rect_fill(0, 0, 600, 600, hexcolor(2000, 0, 0));
	glutSwapBuffers();
	Sleep(1000);
	circle_fill(300, 300, 200, hexcolor(255, 255, 255));
	glutSwapBuffers();
	Sleep(1000);
	line(300, 200, 300, 400);
	line(200, 300, 400, 300);
	line(200, 400, 300, 400);
	line(400, 200, 300, 200);
	line(200, 300, 200, 200);
	line(400, 300, 400, 400);
	glutSwapBuffers();
	Sleep(1000);
}

void tick(int)
{
	glutPostRedisplay();
	glutTimerFunc(5000, tick, 1);
}

int main()
{
	window(600, 600);
	glutDisplayFunc(draw);
	glutTimerFunc(5000, tick, 1);
	glutMainLoop();
}

