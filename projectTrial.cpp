#include <GL/glut.h>

void init() {
    glClearColor(0, 0, 1, 1);
    glMatrixMode(GL_PROJECTION);
    glOrtho(-100, 100, 100, -100, 100, -100);
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0, 0, 1);
    glBegin(GL_QUADS);
    glVertex2i(-60, -60);
    glVertex2i(60, -60);
    glVertex2i(60, 60);
    glVertex2i(-60, 60);
    glEnd();

    //pole
    glColor3f(1, 1, 0);
    glLineWidth(5.0);
    glBegin(GL_LINES);
    glVertex2i(-18, -15);
    glVertex2i(-18, 35);
    glEnd();

    //pole's base
    glColor3ub(78, 85, 89);
    glBegin(GL_QUADS);
    glVertex2i(-30, 35);
    glVertex2i(-30, 45);
    glVertex2i(5, 45);
    glVertex2i(5, 35);

    // Draw the red stripe
    glBegin(GL_QUADS);
    glColor3f(1, 0, 0);
    glVertex2i(-18, -15);
    glVertex2i(-8, -15);
    glVertex2i(-8, 15);
    glVertex2i(-18, 15);
    glEnd();

    // Draw the white stripe
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex2i(-8, -15);
    glVertex2i(-8, 15);
    glVertex2i(8, 15);
    glVertex2i(8, -15);
    glEnd();

    // Draw the maple leaf
    glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(0, 0);
    glVertex2f(-3, 1);
    glVertex2f(-2.5, 0);
    glVertex2f(-6.0, -3.5);
    glVertex2f(-5, -4);
    glVertex2f(-6, -6);
    glVertex2f(-4.5, -5);
    glVertex2f(-3.8, -7);
    glVertex2f(-2.3, -5);
    glVertex2f(-2.5, -8.8);
    glVertex2f(-1.5, -8);
    glVertex2f(0, -10);
    glVertex2f(2.5, -8.8);
    glVertex2f(1.5, -8);
    glVertex2f(2.3, -5);
    glVertex2f(3.8, -7);
    glVertex2f(4.5, -5);
    glVertex2f(6, -6);
    glVertex2f(5, -4);
    glVertex2f(6, -3.5);
    glVertex2f(2.5, 0);
    glVertex2f(3, 1);
    glVertex2f(0, 0);
    glEnd();

    //line of maple
    glColor3f(1, 0, 0);
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glVertex2f(0, 0);
    glVertex2f(0, 5);
    glEnd();

    // Draw the red stripe
    glColor3f(1, 0, 0);
    glBegin(GL_QUADS);
    glVertex2i(8, -15);
    glVertex2i(8, 15);
    glVertex2i(18, 15);
    glVertex2i(18, -15);
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(800, 600);
    glutCreateWindow("Flag of Canada");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}