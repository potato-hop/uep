#include "glcanvas.hpp"
using namespace cnv;
void h(int x,int y, int a)
{
	if( a < 2 ) return;

	line (x+a, y-2*a, x + a, y + 2*a);
	line (x-a , y-2*a , x - a, y + 2*a);
	line (x-a , y , x + a, y);

	h(x+a,y-2*a,a/2);
	h(x+a,y+2*a,a/2);
	h(x-a,y-2*a,a/2);
	h(x-a,y+2*a,a/2);
	glutSwapBuffers();
}

void draw()
{
	h(450, 450, 100);
	glutSwapBuffers();
}

void tick(int )
{
	glutPostRedisplay();
	glutTimerFunc(1000000,tick,1);
}

int main()
{
	window (900,900);
	glutDisplayFunc(draw);
	glutTimerFunc(1000000,tick,1);
	glutMainLoop();	
}
