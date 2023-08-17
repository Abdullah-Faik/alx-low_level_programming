from OpenGL.GL import *
from OpenGL.GLU import *
from OpenGL.GLUT import *
from math import *
from numpy import *
def drawHeart():
    glClearColor(0.0, 0.0, 0.0, 0.0)
    glClear(GL_COLOR_BUFFER_BIT)
    glMatrixMode(GL_PROJECTION)
    glLoadIdentity()
    gluPerspective(45, 1.0, 1.0, 100.0)
    glMatrixMode(GL_MODELVIEW)
    glLoadIdentity()
    gluLookAt(-10, 10, 10, 0, 0, 0, 0, 1, 0)

    glClear(GL_COLOR_BUFFER_BIT)
    glColor3f(1.0, 0.0, 0.0)
    glBegin(GL_LINE_STRIP)
    for j in range(0,360,10):
        for i in range(0, 360, 10):
            for k in range(0, 360, 10):
                x = .25 * cos (pi * i / 180) * cos (pi * j / 180) * cos (pi * k / 180)
                y = .25 * cos (pi * i / 180) * cos (pi * j / 180) * sin (pi * k / 180)
                z = .25 * (sin (pi * j / 180) ) * cos (pi * k / 180)
                w = .25 * (sin (pi * k / 180) )
            glVertex4f(x, y, z,w)
    glEnd()
    glutSwapBuffers()    


def main():
    glutInit()
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB)
    glutInitWindowSize(500, 500)
    glutInitWindowPosition(50, 50)
    glutCreateWindow("Heart")
    glutDisplayFunc(drawHeart)
    glutMainLoop()

main()
    