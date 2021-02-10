#include <glcanvas.hpp>
using namespace cnv;

const double pi = 3.141592;

int num = 0;

void f()
{
	clear();
	for(double x = -10*pi; x <= 10*pi; x += 0.01)
	{
		const double y = x*sin(x*num/1000);
		const double xx = 8*x + 300;
		const double yy = 10*y + 300;
		circle_fill(xx, yy, 2);
	}	
	glutSwapBuffers();
}

void tick(int )
{
	++num;
	glutPostRedisplay();
	glutTimerFunc(1, tick, 1);
}

int main()
{
	window(1080, 1920);
	glutTimerFunc(1, tick, 1);
	glutDisplayFunc(f);
	glutMainLoop();
}

