#include <GL/glut.h>

bool* keyStates = new bool[256];

void keyOperations(void) {
    if(keyStates[GLUT_KEY_LEFT]) {
        //perform lef arrow key operations
    }
}


void renderPrimitive( void ) {

    glColor3f(0.0, 0.0, 1.0);
    //glBegin(GL_QUADS);
    //glVertex3f(-1.0, -1.0, 0.0);
    //glVertex3f(-1.0, 1.0, 0.0);
    //glVertex3f(1.0, 1.0, 0.0);
    //glVertex3f(1.0, -1.0, 0.0);
    //glEnd();

    glBegin(GL_POINT);
    glVertex2i(2,12);
    glVertex2i(3,13);
    glVertex2i(4,14);
    glVertex2i(5,15);
    glEnd();   
}


void displayMe(void)
{
    keyOperations();

    glClearColor(1.0, 0.0, 0.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glTranslatef(0.0f, 0.0f, -5.0f);
    renderPrimitive();
    glColor3f(0.0, 0.0, 1.0);
/*
    glTranslatef(0.0f, ylocation, -5.0f); //Translate in y-axis
    glRotatef(yRotationAngle, 0.0f, 1.0f, 0.0f); //Rotation in y-axiss
*/
    glFlush();
}

void reshape(int width, int height) {
    glViewport(0, 0, (GLsizei)width, (GLsizei)height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(60, (GLfloat)width/(GLfloat)height, 1.0, 100.0);
    glMatrixMode(GL_MODELVIEW);
}

void keyPressed(unsigned char key, int x, int y) {
    keyStates[key] = true;
}

void keyUp(unsigned char key, int x, int y) {
    keyStates[key] = false;
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Hello world!");
    glutDisplayFunc(displayMe);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyPressed);
    glutKeyboardUpFunc(keyUp);
    glutMainLoop();
    return 0;
}

