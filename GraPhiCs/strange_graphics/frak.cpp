#include "glcanvas.hpp"
using namespace cnv;
void h(int x,int y, int a)
{
	if( a < 2 ) return;

	line (x, y, x + a, y + 2*a);
	line (x , y , x - a, y + 2*a);
	line (x-a , y+2*a , x + a, y+2*a);

	h(x,y,a/2);
	h(x-a/2,y+a,a/2);
	h(x+a/2,y+a,a/2);

	glutSwapBuffers();
}

void draw()
{
	h(450, 250, 200);
	glutSwapBuffers();
}

void tick(int )
{
	glutPostRedisplay();
	glutTimerFunc(1000,tick,1000);
}

int main()
{
	window (900,900);
	glutDisplayFunc(draw);
	glutTimerFunc(1000,tick,1000);
	glutMainLoop();	
}
