/* Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above notice and this permission notice shall be included in all copies
 * or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */
 /* File for "Basic Shapes" lesson of the OpenGL tutorial on
  * www.videotutorialsrock.com
  */



#include <iostream>
#include <stdlib.h> //Needed for "exit" function
#include <pch.h>

  //Include OpenGL header files, so that we can use OpenGL
#ifdef __APPLE__
#include <OpenGL/OpenGL.h>
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

using namespace std;

//Called when a key is pressed
void handleKeypress(unsigned char key, //The key that was pressed
	int x, int y) {    //The current mouse coordinates
	switch (key) {
	case 27: //Escape key
		exit(0); //Exit the program
	}
}

void Initialize() {
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}



void Draw() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 1.0);


	//pentagon
	glBegin(GL_POLYGON);
		glVertex3f(0.225, 0.9, 0.0);
		glVertex3f(0.15, 0.8, 0.0);
		glVertex3f(0.15, 0.7, 0.0);
		glVertex3f(0.3, 0.7, 0.0);
		glVertex3f(0.3, 0.8, 0.0);
	glEnd();
	//hexagon
	glBegin(GL_POLYGON);
		glVertex3f(0.55, 0.9, 0.0);
		glVertex3f(0.45, 0.8, 0.0);
		glVertex3f(0.45, 0.7, 0.0);
		glVertex3f(0.55, 0.6, 0.0);
		glVertex3f(0.65, 0.7, 0.0);
		glVertex3f(0.65, 0.8, 0.0);
	glEnd();
	//
	glBegin(GL_POLYGON);
		glVertex3f(0.6, 0.5, 0.0);
		glVertex3f(0.52, 0.45, 0.0);
		glVertex3f(0.5, 0.37, 0.0);
		glVertex3f(0.56, 0.3, 0.0);
		glVertex3f(0.66, 0.3, 0.0);
		glVertex3f(0.71, 0.37, 0.0);
		glVertex3f(0.68, 0.45, 0.0);
	glEnd();
	//octagon
	glBegin(GL_POLYGON);
		glVertex3f(0.2, 0.6, 0.0);
		glVertex3f(0.3, 0.6, 0.0);
		glVertex3f(0.37, 0.51, 0.0);
		glVertex3f(0.37, 0.4, 0.0);
		glVertex3f(0.3, 0.3, 0.0);
		glVertex3f(0.2, 0.3, 0.0);
		glVertex3f(0.12, 0.4, 0.0);
		glVertex3f(0.12, 0.51, 0.0);
	glEnd();

	//
  /*glBegin(GL_TRIANGLE_STRIP);
		glVertex3f(0.46, 0.17, 0.0);
		glVertex3f(0.46, 0.27, 0.0);
		glVertex3f(0.52, 0.25, 0.0);
		glVertex3f(0.46, 0.17, 0.0);

		glVertex3f(0.55, 0.19, 0.0);
		glVertex3f(0.46, 0.17, 0.0);

		glVertex3f(0.55, 0.14, 0.0);
		glVertex3f(0.46, 0.17, 0.0);

		glVertex3f(0.52, 0.088, 0.0);
		glVertex3f(0.46, 0.17, 0.0);

		glVertex3f(0.46, 0.068, 0.0);
		glVertex3f(0.46, 0.17, 0.0);

		glVertex3f(0.41, 0.08, 0.0);
		glVertex3f(0.46, 0.17, 0.0);

		glVertex3f(0.38, 0.14, 0.0);
		glVertex3f(0.46, 0.17, 0.0);

		glVertex3f(0.379, 0.1999, 0.0);
		glVertex3f(0.46, 0.17, 0.0);

		glVertex3f(0.41, 0.25, 0.0);
		glVertex3f(0.46, 0.27, 0.0);

	glEnd();
	*/
	glBegin(GL_POLYGON);
		glVertex3f(0.46, 0.27, 0.0);
		glVertex3f(0.52, 0.25, 0.0);
		glVertex3f(0.55, 0.19, 0.0);
		glVertex3f(0.55, 0.14, 0.0);
		glVertex3f(0.52, 0.088, 0.0);
		glVertex3f(0.46, 0.068, 0.0);
		glVertex3f(0.41, 0.08, 0.0);
		glVertex3f(0.38, 0.14, 0.0);
		glVertex3f(0.379, 0.1999, 0.0);
		glVertex3f(0.41, 0.25, 0.0);
	glEnd();
	glFlush();
}

int main(int argc, char** argv) {
	//Initialize GLUT
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(300, 400); //Set the window size
	glutInitWindowPosition(200, 200); //
	
	//Create the window
	glutCreateWindow("Basic Shapes");
	

	//Set handler functions for drawing, keypresses
	Initialize();
	glutDisplayFunc(Draw);
	glutKeyboardFunc(handleKeypress);


	glutMainLoop(); //Start the main loop.  glutMainLoop doesn't return.
	return 0; //This line is never reached
}









