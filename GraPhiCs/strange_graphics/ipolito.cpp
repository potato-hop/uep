#include "glcanvas.hpp"
using namespace cnv;

const double pi = 3.141592;
const double beta = pi / 6;
double gamma1 = pi/2;

void tree(int x0, int y0, int a, double alpha)
{
	color_t c = hexcolor(rand() % 256, 
			rand() % 256, rand() % 256);
	if(a < 1) return;

	const int x1 = x0 + a*cos(alpha - beta);
	const int y1 = y0 - a*sin(alpha - beta);
	const int x2 = x0 + a*cos(alpha + beta);
	const int y2 = y0 - a*sin(alpha + beta);
	line(x0, y0, x1, y1, c);
	line(x0, y0, x2, y2, c);
	tree(x1, y1, 3*a/4, alpha - beta);
	tree(x2, y2, 3*a/4, alpha + beta);
}

void draw()
{
	srand(200);
	clear();
	gamma1 = pi/2 -2*pi*((time(0)% 60) / 60.);
	tree(350, 350, 100, gamma1);
	double gamma2 = pi/2 -2*pi*(((time(0)/60)% 60) / 60.);
	tree(350, 350, 50, gamma2);
	glutSwapBuffers();
}

void tick(int)
{
//	gamma1 += 0.01;
	glutPostRedisplay();
	glutTimerFunc(1, tick, 1);
}


int main()
{
	window(700, 700);
	glutDisplayFunc(draw);
	glutTimerFunc(1, tick, 1);
	glutMainLoop();
}


