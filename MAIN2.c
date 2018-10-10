#include <windows.h>;
#include <GL/glut.h>;
void init(void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 400.0, 0.0, 400.0);
}
void drawShapes(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(5.0);

    glColor3f(1.0, 0.78, 0.1725);
    glBegin(GL_QUADS);
        glVertex2i(100, 130);
        glVertex2i(100, 180);
        glVertex2i(200, 220);
        glVertex2i(200, 170);
    glEnd();

    glColor3f(0.84, 0.823, 0.7686);
    glBegin(GL_QUADS);
        glVertex2i(200, 90);
        glVertex2i(200, 140);
        glVertex2i(100, 180);
        glVertex2i(100, 130);
    glEnd();

    glColor3f(0.24, 0.694, 0.7843);
    glBegin(GL_QUADS);
        glVertex2i(100, 50);
        glVertex2i(100, 100);
        glVertex2i(200, 140);
        glVertex2i(200, 90);
    glEnd();

    glColor3f(0.3098, 0.3451, 0.3451);
    glBegin(GL_TRIANGLES);
        glVertex2i(200, 140);
        glVertex2i(200, 90);
        glVertex2i(137.5, 115);
    glEnd();

    glColor3f(0.9372, 0.2, 0.251);
    glBegin(GL_TRIANGLES);
        glVertex2i(100, 180);
        glVertex2i(100, 130);
        glVertex2i(162.5, 155);
    glEnd();

    glFlush();
}
