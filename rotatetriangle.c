#include<GL/glut.h>
#include<stdio.h>
#include<stdlib.h>


void 


void main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Hello world!");
    myInit();
    glutDisplayFunc(displayMe);
    glutCreateMenu(rotateMenu);
    glutAddMenuEntry("Rotate around ORIGIN",1); 
    glutAddMenuEntry("Rotate around FIXED POINT",2);
    glutAddMenuEntry("Stop Rotation",3);  
    glutAttachMenu(GLUT_RIGHT_BUTTON);
    glutMainLoop();
    return 0;
}

