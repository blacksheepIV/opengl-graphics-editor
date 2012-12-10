#include "Constants.h"
#include<gl/glut.h>
#include<iostream>
using namespace std;

void display(void);
void myinit(void);
int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(APPLICATION_WINDOW_WIDTH, APPLICATION_WINDOW_HEIGHT); // Add size in constants.h
	glutInitWindowPosition(10,10);
	glutCreateWindow("Jinkchak Paint Package");
	glutDisplayFunc(display);
	myinit();
	glutMainLoop();
}
void myinit(void)
{
	glClearColor(1,1,1,1);
	glColor3f(0,0,0);
	glPointSize(1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,499,0,499);
}
void display(void)
{

	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINES);
	glVertex2d(10,10);
	glVertex2d(30,30);
	glEnd();
	glFlush();
}