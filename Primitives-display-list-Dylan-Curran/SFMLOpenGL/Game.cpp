#include <Game.h>

Game::Game() : window(VideoMode(800, 600), "OpenGL"), primatives(2)
{
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f); 
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0, window.getSize().x / window.getSize().y, 1.0, 500.0);
	glMatrixMode(GL_MODELVIEW);
	
}

Game::~Game() {}

void Game::run()
{

	initialize();

	Event event;

	while (isRunning) {

		cout << "Game running..." << endl;

		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
			{
				isRunning = false;
			}
		}
		update();
		draw();
	}

}

void Game::initialize()
{
	isRunning = true;
}

void Game::update()
{
	cout << "Update up" << endl;
}

void Game::draw()
{
	cout << "Draw up" << endl;
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	//glBegin(GL_TRIANGLES);
	//{
	//glVertex3f(0.0, 2.0, -10.0);
	//glVertex3f(-2.0, -2.0, -10.0);
	//glVertex3f(2.0, -2.0, -10.0);
	//} 
	//glEnd();

	/*glBegin(GL_POINTS);
	{
		
		glPointSize(10.0f);
		glVertex3f(2.0, 2.0, -10.0);
		glVertex3f(-2.0, 2.0, -10.0);
		glVertex3f(0.0, -2.0, -10.0);
		
	}
	glEnd();*/

	//glBegin(GL_POINTS);
	//{
	//	glPointSize(10.f);
	//	glVertex3f(4.0, 4.0, -10.0);
	//	glVertex3f(-4.0, 4.0, -10.0);
	//	glVertex3f(0.0, -4.0, -10.0);
	//}
	//glEnd();

	//glBegin(GL_LINE_STRIP);
	//{
	//	glPointSize(10.f);
	//	glVertex3f(4.0, 4.0, -10.0);
	//	glVertex3f(-4.0, 4.0, -10.0);
	//	glVertex3f(0.0, -4.0, -10.0);
	//	glVertex3f(0.0, 4.0, -10.0);
	//}
	//glEnd();

	glBegin(GL_LINE_LOOP);
	{
		glPointSize(10.f);
		glVertex3f(3.0, 0.0, -10.0);
		glVertex3f(-3.0, 3.0, -10.0);
		glVertex3f(0.0, -3.0, -10.0);
		glVertex3f(0.0, 3.0, -10.0);
	}
	glEnd();

	/*glBegin(GL_TRIANGLES);
	{
		glPointSize(10.f);
		glVertex3f(3.0, 3.0, -10.0);
		glVertex3f(-3.0, 3.0, -10.0);
		glVertex3f(0.0, -3.0, -10.0);
		
	}
	glEnd();*/

	/*glBegin(GL_TRIANGLE_STRIP);
	{
		glPointSize(10.f);
		glVertex3f(3.0, 3.0, -10.0);
		glVertex3f(-1.0, 1.0, -10.0);
		glVertex3f(0.0, 2.0, -10.0);
		glVertex3f(0.0, -4.0, -10.0);
		
	}
	glEnd();*/

	//glBegin(GL_TRIANGLE_FAN);
	//{
	//	glPointSize(10.f);
	//	glVertex3f(0.0, 0.0, -10.0);
	//	glVertex3f(2.0, 0.0, -10.0);
	//	glVertex3f(1.0, 1.0, -10.0);
	//	glVertex3f(-1.0, 1.0, -10.0);
	//	glVertex3f(-2.0, 0.0, -10.0);
	//	glVertex3f(-1.0, -1.0, -10.0);
	//	glVertex3f(1.0, -1.0, -10.0);
	//}
	//glEnd();

	//glBegin(GL_QUADS);
	//{
	//	glPointSize(10.f);
	//	glVertex3f(3.0, 3.0, -10.0);
	//	glVertex3f(3.0, -3.0, -10.0);
	//	glVertex3f(-3.0, -3.0, -10.0);
	//	glVertex3f(-3.0, 3.0, -10.0);
	//	
	//}
	//glEnd();

	/*glBegin(GL_QUAD_STRIP);
	{
		glPointSize(10.f);
		glVertex3f(-3.0, -3.0, -10.0);
		glVertex3f(-3.0, 3.0, -10.0);
		glVertex3f(0.0, -3.0, -10.0);
		glVertex3f(0.0, 3.0, -10.0);
		glVertex3f(3.0, -3.0, -10.0);
		glVertex3f(3.0, 3.0, -10.0);
	}
	glEnd();*/

	/*glBegin(GL_POLYGON);
	{
		glPointSize(10.f);
		glVertex3f(0.0, 3.0, -10.0);
		glVertex3f(2.0, 2.0, -10.0);
		glVertex3f(3.0, 0.0, -10.0);
		glVertex3f(2.0, -2.0, -10.0);
		glVertex3f(0.0, -3.0, -10.0);
		glVertex3f(-2.0, -2.0, -10.0);
		glVertex3f(-3.0, 0.0, -10.0);
		glVertex3f(-2.0, 2.0, -10.0);
		glVertex3f(0.0, 3.0, -10.0);
	}
	glEnd();*/


	//glRotatef(rotationAngle, 0.0f, 0.0f, 1.0f);

	//glTranslatef(0.000f, 0.000f, -0.00069f);
	
	glScalef(1.0005f, 1.0005f, 1.000f);


	window.display();
}

void Game::unload()
{
	cout << "Cleaning up" << endl;
}

