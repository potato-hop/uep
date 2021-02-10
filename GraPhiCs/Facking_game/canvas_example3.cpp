#include <glcanvas.hpp>
#include <vector>
using namespace cnv;
using namespace std;
const float pi = 3.141592;

void z(int z, int m)
{
	line(0, 300, 400, 400);
	glutSwapBuffers();
	glutPostRedisplay();
}

void NOP(int x, int y)
{
	/*line(x, y - 100, x, y + 100);
	line(x - 100, y, x + 100, y);
	line(x - 100, y + 100, x, y + 100);
	line(x - 100, y, x - 100, y - 100);
	line(x + 100, y - 100, x, y - 100);
	line(x + 100, y, x + 100, y + 100);*/
	line(x , y - 150 , x - 50, y - 50);
	line(x , y - 150 , x + 50, y - 50);
	line(x - 50, y - 50, x - 150, y - 40);
	line(x + 50, y - 50, x + 150, y - 40);
	line(x + 150, y - 40, x + 70, y + 30);
	line(x - 150, y - 40, x - 70, y + 30);
	line(x + 70, y + 30, x + 110, y + 150);
	line(x - 70, y + 30, x - 110, y + 150);
	line(x + 110, y + 150, x, y + 70);
	line(x - 110, y + 150, x, y + 70);
	line(x , y, x, y);
	glutSwapBuffers();
	glutPostRedisplay();
	clear();
}

int main()
{
	window(600, 600);
	glutSwapBuffers();
	glutPassiveMotionFunc(NOP);
	glutMainLoop();
}

