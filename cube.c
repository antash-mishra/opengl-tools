#include<GL/glut.h>



int main(int argc, char const *argv[])
{
    /* code */
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Cube");
    init();
    glutDisplayFunc(displayMe);
    glutReshapeFunc()
    glutMainLoop();
    return 0;
}
