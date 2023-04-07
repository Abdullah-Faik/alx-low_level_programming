from OpenGL.GL import *
from OpenGL.GLUT import *
rangle = 40
def init_my_scene():
 glClearColor(1,1,1,1) # Clear background to black .
 glMatrixMode(GL_PROJECTION)
 glLoadIdentity()
 glOrtho(-5, 5, -5, 5, -5, 5)
 glMatrixMode(GL_MODELVIEW)
def draw():
 global rangle
 glClearColor(0,0,0,0)
 glClear(GL_COLOR_BUFFER_BIT)
 glColor3d(0, 0.7, 0.7)
 glLoadIdentity()
 glScale(12.5, 12.5, 12.5) # OPTIONAL
 glutSolidSphere(0.07, 50, 50) # The Earth at (0,0,0)
 glRotate(rangle, 0, 0, 1) # rotate around z (in XY PLANE)
 glColor3d(0.0, 0, 0) # BLACK
 glBegin(GL_LINES) # The Ray between Earth and The Satellite
 glVertex3d(0.08, 0, 0)
 glVertex3d(0.26, 0, 0)
 glEnd()
 glTranslate(0.3,0,0) # Translate away from the earth =>(0.3,0,0)
 glRotate(rangle,0,0,1) # Rotate around itself in XY-Plane(around z-axis)
 glColor3d(0.0, 0.8, 1.0)
 glutSolidCube(0.05) # The Satellite at (0,0,0)
 glBegin(GL_LINES) # WINGS of the Satellite
 glVertex3d(-0.1, 0, 0)
 glVertex3d(0.1, 0, 0)
 glEnd()
 glutSwapBuffers()
 rangle += .5 # TODO: if it's to fast try .0001 (YOU HAVE ANICE GPU)
# boilerplate
glutInit()
glutInitWindowSize(500, 500)
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB)
glutCreateWindow("My First OGL Program")
init_my_scene()
glutDisplayFunc(draw)
glutIdleFunc(draw)
glutMainLoop()
###############################
# RECIPE FOR ANIMATION
# 1) replace GLUT_SINGLE >> GLUT_DOUBLE
# 2) replace glFlush >> glutSwapBuffers
# 3) use glutIdleFunc(draw_function)
# 4) do some transformations !
###############################