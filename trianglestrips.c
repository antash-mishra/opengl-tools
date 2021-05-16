#include <GL/glut.h>

void displayMe(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
//    renderPrimitive();
//    glColor3f(0.0, 0.0, 1.0);


    glColor3f(0.0f, 0.0f, 1.0f);
    glBegin(GL_TRIANGLE_STRIP);
      glColor3f(1.0f, 1.0f, 0.0f);
      glVertex2f(0.4f, 0.2f);
      glVertex2f(0.6f, 0.2f);
      glVertex2f(0.7f, 0.4f);
      glVertex2f(0.6f, 0.6f);
      glVertex2f(0.4f, 0.6f);
      glVertex2f(0.3f, 0.4f);

    glEnd();  
    glFlush(); 
}
void initGL() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); 
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION); 
    glLoadIdentity(); 
    gluOrtho2D(-2.0, 2.0, -2.0, 2.0); 

}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("triangle");
    initGL();
    glutDisplayFunc(displayMe);
    glutMainLoop();
    return 0;
}
