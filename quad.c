#include <GL/glut.h> 
 
void display() {
   glClear(GL_COLOR_BUFFER_BIT);       
 
    glBegin(GL_QUADS);              
      glColor3f(1.0f, 0.0f, 0.0f); 
      glVertex2f(-0.5f, -0.5f);   
      glVertex2f( 0.5f, -0.5f);
      glVertex2f( 0.5f,  0.5f);
      glVertex2f(-0.5f,  0.5f);
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
 
int main(int argc, char** argv) {
   glutInit(&argc, argv);  
   glutCreateWindow("Quad");
   glutInitWindowSize(500, 500);   
   glutInitWindowPosition(100, 100); 
   glutDisplayFunc(display); 
   glutMainLoop();         
   return 0;
}
