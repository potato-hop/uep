#include <glcanvas.hpp>
using namespace cnv;

double t = 0;
void f()
{
	clear();
	srand(1);
	for(int i = 0; i < 50; ++i)
	{
		const double r = 200*sin(13*t/i);
		const double x = 300 + r*cos(t/i);
		const double y = 300 + r*sin(t/i);

		circle_fill(x, y, 4 + rand() % 6, hexcolor(rand() % 256, rand() % 256, rand() % 256));
	}
	glutSwapBuffers();
}

void tick(int)
{

	t += 0.01;
	glutTimerFunc(1, tick, 1);
	glutPostRedisplay();
}

int main()
{
	window(600, 600);
	glutDisplayFunc(f);
	glutTimerFunc(1, tick, 1);
	glutMainLoop();
}

