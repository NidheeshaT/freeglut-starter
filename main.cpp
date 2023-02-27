#include "GL/glut.h"
#include<iostream>
using namespace std;

void init(){
    glClearColor(0.0, 0.0, 0.0, 0.0);
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
        glVertex2d(250,250);
        glVertex2d(-250,250);
        glVertex2d(-250,-250);
        glVertex2d(250,-250);
    glEnd();
    glFlush();
}
void reshape(int w,int h)
{
    glViewport(0,0,w,h);
    gluOrtho2D(-500,500,-500,500);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(500,500);
    glutCreateWindow("Hello World");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    init();
    glutMainLoop();
    return 0;
}

