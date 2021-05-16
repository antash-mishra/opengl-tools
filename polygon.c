#include <GL/glut.h>

void displayMe(void)
{
//    renderPrimitive();
    
    // glColor3f(1.0, 1.0, 1.0);


    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glBegin(GL_POLYGON);
      glColor3f(1.0f, 1.0f, 0.0f);
      glVertex2f(2.0f, 2.0f);
      glVertex2f(4.0f, 2.0f);
      glVertex2f(4.0f, 4.0f);
      glVertex2f(2.0f, 4.0f);
    glTranslatef(2.0f, 3.0f, 0.0f);

    glEnd();  
    glFlush(); 
}
void initGL() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); 
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION); 
    glLoadIdentity(); 
    gluOrtho2D(-5.0, 5.0, -5.0, 5.0); 

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
