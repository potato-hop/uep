#include "glcanvas.hpp"
#include <vector>
using namespace cnv;
using namespace std;
int mx = 0;
int my = 0;
const float pi = 3.141592;

class Spark
{
public:
	bool alive() const { return brightness_; }

	Spark(int x, int y)
	{
		x_ = x;
		y_ = y;
		v_ = (rand() % 2001 - 1000)/500.;
		alpha_ = (2*pi*(rand()% 1001))/1000;
		//dx_ *= 0.5;
		//dy_ *= 0.5;
		c_ = rand();
		brightness_ = 255;
	}

	void tick()
	{
		c_ = (c_ & 0xFFFFFF00) + (brightness_ & 0xff);
		x_ += v_*cos(alpha_) + 2*sin(brightness_*2*pi/100);
		y_ += v_*sin(alpha_) + 2*cos(brightness_*2*pi/100);
		circle_fill(x_, y_, 2, c_);
		if(brightness_>0) brightness_ -= 5;
	}
private:
	float x_, y_;
	float alpha_;
	float v_;
	color_t c_;
	int brightness_;   
};

vector<Spark> sparks;

void paint()
{
	glutSwapBuffers();
}

void new_spark()
{
	Spark s(mx, my);

	size_t i = 0;
	while(i < sparks.size() && sparks[i].alive()) ++i;

	if(i < sparks.size()) sparks[i] = s;
	else sparks.push_back(s);
}

void tick(int)
{
	//clear(0, 0, 0);
	position(10, 10);
	text_out << sparks.size();

	for(size_t i = 0; i < sparks.size(); ++i)
	{
		sparks[i].tick();
	}

	glutPostRedisplay();


	new_spark();
	new_spark();
	new_spark();
	new_spark();
	new_spark();
	new_spark();
	new_spark();
	new_spark();
	new_spark();
	new_spark();
	new_spark();
	new_spark();
	new_spark();

	glutTimerFunc(1, tick, 0);

}

void motion(int x, int y)
{
	mx = x;
	my = y;
}

int main()
{
	window();
	glutPassiveMotionFunc(motion);
	glutDisplayFunc(paint);
	glutTimerFunc(1, tick, 0);
	glutMainLoop();
}

