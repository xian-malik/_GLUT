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

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_TRIANGLES);
        glVertex2i(50, 50);
        glVertex2i(50, 150);
        glVertex2i(150, 100);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_TRIANGLES);
        glVertex2i(90, 50);
        glVertex2i(90, 150);
        glVertex2i(190, 100);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_TRIANGLES);
        glVertex2i(70, 80);
        glVertex2i(70, 180);
        glVertex2i(170, 130);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_TRIANGLES);
        glVertex2i(90, 90);
        glVertex2i(90, 130);
        glVertex2i(130, 110);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINE_STRIP);
        glVertex2i(90, 130);
        glVertex2i(150, 100);
        glVertex2i(50, 50);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINE_STRIP);
        glVertex2i(90, 90);
        glVertex2i(90, 150);
        glVertex2i(190, 100);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_LINE_STRIP);
        glVertex2i(130, 110);
        glVertex2i(70, 80);
        glVertex2i(70, 180);
    glEnd();


    glFlush();
}
int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Question 3");
    init();
    glutDisplayFunc(drawShapes);
    glutMainLoop();
    return 0;
}
