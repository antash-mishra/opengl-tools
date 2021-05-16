#include<GL/glut.h>
#include<stdio.h>
#include<stdlib.h>

int n;

void display()
{
GLfloat vertices[3][3]={{0.0,0.0,0.0},{25.0,50,0.0},{50.0,0.0,0.0}};
GLfloat p[3]={7.5,5.0,0.0};

int j, k;

glBegin(GL_POINTS);
    for(k=0;k<n;k++) {
        int r = rand();		
        j=r%3;
		
		p[0]=(p[0]+vertices[j][0]/2);
		p[1]=(p[1]+vertices[j][1]/2);
		glVertex3fv(p);
    }
glEnd();
glFlush();
					
}

void myinit()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-2.0, 2.0, -2.0, 2.0);
    glMatrixMode(GL_MODELVIEW);
    glClearColor (1.0, 1.0, 1.0,1.0);
    glColor3f(1.0,0.0,0.0);
}
int main(int argc, char** argv)
{
    printf("Enter the number of divisions\n");
    scanf("%d",&n);
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutCreateWindow("2D Gasket");
    myinit();
    glutDisplayFunc(display);
    glutMainLoop();
}
