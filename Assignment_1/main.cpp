#include "Internal_Dependencies\glew\glew.h"
#include "Internal_Dependencies\freeglut\freeglut.h"
#include <iostream>

void renderScene(void)
{

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glClearColor(0.0, 1.0, 0.0, 1.0);//clear red

	//glClearColor('red', 'green', 'blue', 'alpha') => Where alpha is the opacity value.

	glutSwapBuffers();
}

int main(int argc, char **argv)
{

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(500, 500);//optional
	glutInitWindowSize(800, 600); //optional
	glutCreateWindow("OpenGL First Window");

	glewInit();
	if (glewIsSupported("GL_VERSION_4_5"))
	{
		std::cout << " GLEW Version is 4.5\n ";
	}
	else
	{
		std::cout << "GLEW 4.5 not supported\n ";
	}

	glEnable(GL_DEPTH_TEST);

	glutDisplayFunc(renderScene);

	glutMainLoop();

	return 0;
}