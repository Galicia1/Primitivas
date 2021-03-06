// PlantillaOpenGL.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

#define GLEW_STATIC

#include "GL/glew.h"
#include "GLFW/glfw3.h"

#include <iostream>

using namespace std;


void dibujarTriangulos() {
	glBegin(GL_TRIANGLES);
	glColor3f(1, 0, 0);

	glVertex3f(0, 1, 0);//3f acepta 3 flotantes
	glVertex3f(-1, -1, 0);
	glVertex3f(1, -1, 0);

	glColor3f(1, .2, .2);


	glVertex3f(0, 0, 0);
	glVertex3f(0, 1, 0);
	glVertex3f(1, -1, 0);



	glColor3f(138.0f / 255.0f, 43.0f / 255.0f, 225.0 / 255.0f);

	glVertex3f(1, 1, 0);
	glColor3f(0, 1, 0);
	glVertex3f(1, 0, 1);
	glColor3f(0, 0, 1);
	glVertex3f(0, 0, 0);

	glColor3f(1, 1, 0);
	glVertex3f(0, 0, 0);
	glColor3f(1, 0, 0);
	glVertex3f(0, 1, 0);
	glColor3f(0, 1, 1);
	glVertex3f(1, 1, 0);


	glEnd();
}


void dibujarPuntos() {
	glBegin(GL_POINTS);
	glColor3f(1, 1, 1);
	glVertex3f(0.5f, 0.1f, 0.0f);
	glColor3f(0, 0, 0);
	glVertex3f(0.55f, 0.1f, 0.0f);
	glEnd();
}

void dibujarLineas() {
	glBegin(GL_LINES);
	glColor3f(1, 1, 1);
	glVertex3f(0, 0, 0);
	glColor3f(0, 0, 0);
	glVertex3f(0, 0.4, 0);
	glVertex3f(0.2, 0.4, 0);
	glVertex3f(-0.2, 0.4, 0);
	glEnd();
}

void dibujarLineaConinua() {
	glBegin(GL_LINE_STRIP);
	glColor3f(0, 0, 0);
	glVertex3f(0, 0, 0);
	glVertex3f(0, -0.2, 0);
	glVertex3f(0.3, -0.2, 0);
	glVertex3f(0.3, 0, 0);
	glVertex3f(0, 0, 0);
	glEnd();
}

void dibujarTrianguloContinuo() {
	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(1, 1, 1);
	glVertex3f(0, 0, 0);
	glVertex3f(-0.2, -0.2, 0);
	glVertex3f(0.2, -0.2, 0);

	glColor3f(0, 0, 0);
	glVertex3f(0.2, -0.4, 0);
	glVertex3f(0.2, -0.4, 0);
	glEnd();
}


void dibujarPoligono() {
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glVertex3f(0.5, 0.5, 0);
	glVertex3f(-0.25, -0.8, 0);
	glVertex3f(-0.2, 0.6, 0);
	glVertex3f(-0.67, -0.5, 0);
	glVertex3f(-0.85, 0.9, 0);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0, 0.6, 0);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.15*cos((double)i*3.14159 / 180.0) - 0.74, 0.15*sin((double)i*3.14159 / 180.0) + .17, 0);
	}
	glEnd();
	
}

void dibujarCasita() {
	//piso casita
	glBegin(GL_QUADS);
	glColor3f(.2, .8, .3);
	glVertex3f(-1, -0.5, 0);
	glVertex3f(-1, -1, 0);
	glVertex3f(1, -1, 0);
	glVertex3f(1, -0.5, 0);
	glEnd();
	//casita
	glBegin(GL_QUADS);
	glColor3f(.7, .7, .1);
	glVertex3f(0.8, -0.5, 0);
	glVertex3f(0.8, 0.2, 0);
	glVertex3f(0.2, 0.2, 0);
	glVertex3f(0.2, -0.5, 0);
	glEnd();
	//techitoCasita
	glBegin(GL_TRIANGLES);
	glColor3f(1, 0, 0);
	glVertex3f(0.5, 0.5, 0);
	glVertex3f(0.9, 0.2, 0);
	glVertex3f(0.1, 0.2, 0);
	glEnd();
	//ventanitas
	glBegin(GL_QUADS);
	glColor3f(.2, .2, .8);
	glVertex3f(0.4, -0.1, 0);
	glVertex3f(0.4, 0.1, 0);
	glVertex3f(0.3, 0.1, 0);
	glVertex3f(0.3, -0.1, 0);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(.2, .2, .8);
	glVertex3f(0.7, -0.1, 0);
	glVertex3f(0.7, 0.1, 0);
	glVertex3f(0.5, 0.1, 0);
	glVertex3f(0.5, -0.1, 0);
	glEnd();
	//puertita
	glBegin(GL_QUADS);
	glColor3f(.4, .4, .4);
	glVertex3f(0.55, -0.5, 0);
	glVertex3f(0.55, -0.2, 0);
	glVertex3f(0.4, -0.2, 0);
	glVertex3f(0.4, -0.5, 0);
	glEnd();


	//tronquitoArbolito
	glBegin(GL_QUADS);
	glColor3f(0.5, 0.3, 0);
	glVertex3f(-0.8, -0.5, 0);
	glVertex3f(-0.8, .07, 0);
	glVertex3f(-0.68, .07, 0);
	glVertex3f(-0.68, -0.5, 0);
	glEnd();
	
	//ojitasArbolito
	glBegin(GL_POLYGON);
	glColor3f(0.2, 0.8, 0);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.1*cos((double)i*3.14159 / 180.0) - 0.74, 0.1*sin((double)i*3.14159 / 180.0) + .27, 0);
	}
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.2, 0.8, 0);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.1*cos((double)i*3.14159 / 180.0) - 0.8, 0.1*sin((double)i*3.14159 / 180.0) + .17, 0);
	}
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.2, 0.8, 0);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.1*cos((double)i*3.14159 / 180.0) - 0.68, 0.1*sin((double)i*3.14159 / 180.0) + .17, 0);
	}
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.2, 0.8, 0);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.1*cos((double)i*3.14159 / 180.0) - 0.8, 0.1*sin((double)i*3.14159 / 180.0) + .07, 0);
	}
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.2, 0.8, 0);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.1*cos((double)i*3.14159 / 180.0) - 0.68, 0.1*sin((double)i*3.14159 / 180.0) + .07, 0);
	}
	glEnd();
	
	// Solecito
	glBegin(GL_POLYGON);
	glColor3f(0.9, 0.9, 0);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.16 *cos((double)i*3.14159 / 180.0)+.7, 0.16*sin((double)i*3.14159 / 180.0) +.7, 0);
	}
	glEnd();

	//Nubecitas
	
	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.2*cos((double)i*3.14159 / 180.0) + 0, 0.13*sin((double)i*3.14159 / 180.0) + .7, 0);
	}
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.2*cos((double)i*3.14159 / 180.0) - 0.2, 0.13*sin((double)i*3.14159 / 180.0) + .7, 0);
	}
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	for (int i = 0; i < 360; i++) {
		glVertex3f(0.2*cos((double)i*3.14159 / 180.0) - 0.7, 0.13*sin((double)i*3.14159 / 180.0) + .7, 0);
	}
	glEnd();
	

}


void dibujar() {
	//dibujarTrinagulos();
	//dibujarPuntos();
	//dibujarLineas();
	//dibujarLineaConinua();
	//dibujarTrianguloContinuo();
	//dibujarPoligono();
	dibujarCasita();
}


void actualizar() {

}

int main()
{
	//Declaramos apuntador de ventana
	//TErminar ejecucion
	GLFWwindow *window;

	if (!glfwInit()) {
		exit(EXIT_FAILURE);
	}
	//si se pudo iniciar el GLFW
	//entonces inicializamos la ventana
	window = glfwCreateWindow(1024, 768,"Ventana", NULL, NULL);
	//si no podemos iniciar la ventana 
	//entonces erminamos la ejecucion
	if (!window) {
		glfwTerminate();
		exit(EXIT_FAILURE);
	}
	//Establecemos el contexto
	glfwMakeContextCurrent(window);

	//Una vez establecido el contexto
	//Activamos funciones modernas
	glewExperimental = true;
	GLenum errorGlew = glewInit();
	if (errorGlew != GLEW_OK) {
		cout << glewGetErrorString(errorGlew);
	}
	const GLubyte * versionGL = glGetString(GL_VERSION);
	cout << "Version OpenGL: " << versionGL;


	//ciclo de dibujo (Draw loop)
	while (!glfwWindowShouldClose(window)) {
		//Establecer region de dibujo
		glViewport(0, 0, 1024, 768);
		//establecer el color de borrado
		glClearColor(.2, .5, 1, 1);
		//Borramos
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		//Rutina de dibujo
		dibujar();
		actualizar();
		//Cambiar los buffers
		glfwSwapBuffers(window);
		//Reconocer si hay entradas
		glfwPollEvents();
	}

	glfwDestroyWindow(window);
	glfwTerminate();

    return 0;
}

