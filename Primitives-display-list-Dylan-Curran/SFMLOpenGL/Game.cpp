//@auhtor Dylan Curran
#include <Game.h>

Game::Game() : window(VideoMode(800, 600), "OpenGL"), primatives(2)
{
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0, window.getSize().x / window.getSize().y, 1.0, 500.0);
	glMatrixMode(GL_MODELVIEW);
	std::cout << "Nums to display shapes" << std::endl;
	std::cout << "E,R,T to rotate" << std::endl;
	std::cout << "V,B,N to translate" << std::endl;
	std::cout << "A,S,D to scale" << std::endl;
	std::cout << "X,Y,Z axis respectively for each" << std::endl;
}

Game::~Game() {}

void Game::run()
{

	initialize();

	Event event;

	while (isRunning) {



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
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::E))
	{
		glRotatef(rotationAngle, 1.0f, 0.0f, 0.0f);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::R))
	{
		glRotatef(rotationAngle, 0.0f, 1.0f, 0.0f);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::T))
	{
		glRotatef(rotationAngle, 0.0f, 0.0f, 1.0f);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::V))
	{
		glTranslatef(0.00069f, 0.000f, -0.000f);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::B))
	{
		glTranslatef(0.000f, 0.00069f, -0.000f);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::N))
	{
		glTranslatef(0.000f, 0.000f, -0.00069f);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		glScalef(1.0005f, 1.000f, 1.000f);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
	{
		glScalef(1.000f, 1.0005f, 1.000f);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	{
		glScalef(1.000f, 1.000f, 1.0005f);
	}
}

void Game::draw()
{

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num1))
	{
		glBegin(GL_TRIANGLES);
		{
			glVertex3f(0.0, 2.0, -10.0);
			glVertex3f(-2.0, -2.0, -10.0);
			glVertex3f(2.0, -2.0, -10.0);
		}
		glEnd();
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num2))
	{
		glBegin(GL_POINTS);
		{

			glPointSize(10.0f);
			glVertex3f(2.0, 2.0, -10.0);
			glVertex3f(-2.0, 2.0, -10.0);
			glVertex3f(0.0, -2.0, -10.0);

		}
		glEnd();
	}


	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num3))
	{
		glBegin(GL_LINE_STRIP);
		{
			glPointSize(10.f);
			glVertex3f(4.0, 4.0, -10.0);
			glVertex3f(-4.0, 4.0, -10.0);
			glVertex3f(0.0, -4.0, -10.0);
			glVertex3f(0.0, 4.0, -10.0);
		}
		glEnd();
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num4))
	{
		glBegin(GL_LINE_LOOP);
		{
			glPointSize(10.f);
			glVertex3f(3.0, 0.0, -10.0);
			glVertex3f(-3.0, 3.0, -10.0);
			glVertex3f(0.0, -3.0, -10.0);
			glVertex3f(0.0, 3.0, -10.0);
		}
		glEnd();
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num5))
	{
		glBegin(GL_TRIANGLES);
		{
			glPointSize(10.f);
			glVertex3f(3.0, 3.0, -10.0);
			glVertex3f(-3.0, 3.0, -10.0);
			glVertex3f(0.0, -3.0, -10.0);

		}
		glEnd();
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num6))
	{
		glBegin(GL_TRIANGLE_STRIP);
		{
			glPointSize(10.f);
			glVertex3f(3.0, 3.0, -10.0);
			glVertex3f(-1.0, 1.0, -10.0);
			glVertex3f(0.0, 2.0, -10.0);
			glVertex3f(0.0, -4.0, -10.0);

		}
		glEnd();
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num7))
	{
		glBegin(GL_TRIANGLE_FAN);
		{
			glPointSize(10.f);
			glVertex3f(0.0, 0.0, -10.0);
			glVertex3f(2.0, 0.0, -10.0);
			glVertex3f(1.0, 1.0, -10.0);
			glVertex3f(-1.0, 1.0, -10.0);
			glVertex3f(-2.0, 0.0, -10.0);
			glVertex3f(-1.0, -1.0, -10.0);
			glVertex3f(1.0, -1.0, -10.0);
		}
		glEnd();
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num8))
	{
		glBegin(GL_QUADS);
		{
			glPointSize(10.f);
			glVertex3f(3.0, 3.0, -10.0);
			glVertex3f(3.0, -3.0, -10.0);
			glVertex3f(-3.0, -3.0, -10.0);
			glVertex3f(-3.0, 3.0, -10.0);

		}
		glEnd();
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num9))
	{
		glBegin(GL_QUAD_STRIP);
		{
			glPointSize(10.f);
			glVertex3f(-3.0, -3.0, -10.0);
			glVertex3f(-3.0, 3.0, -10.0);
			glVertex3f(0.0, -3.0, -10.0);
			glVertex3f(0.0, 3.0, -10.0);
			glVertex3f(3.0, -3.0, -10.0);
			glVertex3f(3.0, 3.0, -10.0);
		}
		glEnd();
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num0))
	{
		glBegin(GL_POLYGON);
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
		glEnd();
	}


	window.display();
}

void Game::unload()
{

}

