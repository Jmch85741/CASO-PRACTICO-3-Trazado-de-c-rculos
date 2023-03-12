#include <Windows.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Trazado(void) 
{
	int midX = 300;
	int midY = 199;
   	
	double Pi = 11.0 * 3.1416;
	int x = midX, y = midY, i, radius = 100; 
	
	glClear(GL_COLOR_BUFFER_BIT);  
	glLineWidth(5.0);
	glBegin(GL_LINES);
	glColor3ub(255, 0, 0); 
	glVertex2f(midX, midY);	
	glVertex2f(x+175,y+100);
	

	for (i = 0; i <= 200; i++) 
	{
	  glVertex2f(
		(x + (radius * cos(i * Pi / 200))), (y + (radius * sin(i * Pi / 200)))
		);
	}


	glEnd();

	glFlush();
}

int main(int argc, char** argv)  
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(0, 0);
	glutInitWindowSize(640, 480);
	glutCreateWindow("Practica 3");
	
	glClearColor(0.0, 0.0, 0.0, 0);
	gluOrtho2D(0, 640, 0, 480);
	
	glutDisplayFunc(Trazado);
	glutMainLoop();
	
	return 0;
}
