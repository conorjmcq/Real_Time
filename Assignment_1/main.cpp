#include "Internal_Dependencies\glew\glew.h"
#include "Internal_Dependencies\freeglut\freeglut.h"
#include <iostream>

void renderScene(void)
{

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glClearColor(1.0, 0.0, 0.0, 1.0);//clear red

	glutSwapBuffers();
}

int main(int argc, char **argv)
{

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(500, 500);//optional
	glutInitWindowSize(800, 600); //optional
	glutCreateWindow("OpenGL First Window");

	glEnable(GL_DEPTH_TEST);

	glutDisplayFunc(renderScene);

	glutMainLoop();

	return 0;
}