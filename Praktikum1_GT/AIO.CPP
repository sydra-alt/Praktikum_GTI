//
//  AIO.CPP
//  Praktikum1_GT
//
//  Created by Syahrafi Ahmad Pradika on 05/03/26.
//

#include <GLUT/glut.h>


void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    // TITIK
    glPointSize(8.0);
    glBegin(GL_POINTS);
        glColor3f(1.0,0.0,0.0);
        glVertex2f(-8.0,7.0);
    glEnd();


    // GARIS
    glLineWidth(3.0);
    glBegin(GL_LINES);
        glColor3f(0.0,1.0,0.0);
        glVertex2f(-8.0,4.0);

        glColor3f(1.0,1.0,0.0);
        glVertex2f(-4.0,4.0);
    glEnd();


    // SEGITIGA
    glBegin(GL_TRIANGLES);

        glColor3f(1.0,0.0,0.0);
        glVertex2f(-3.0,-2.0);

        glColor3f(0.0,1.0,0.0);
        glVertex2f(-1.0,2.0);

        glColor3f(0.0,0.0,1.0);
        glVertex2f(1.0,-2.0);

    glEnd();


    // SEGIEMPAT
    glBegin(GL_QUADS);

        glColor3f(1.0,0.0,1.0);
        glVertex2f(3.0,-2.0);

        glColor3f(0.0,1.0,1.0);
        glVertex2f(7.0,-2.0);

        glColor3f(1.0,1.0,0.0);
        glVertex2f(7.0,2.0);

        glColor3f(0.0,1.0,0.0);
        glVertex2f(3.0,2.0);

    glEnd();

    glFlush();
}
void init(){
    glClearColor(0.0,0.0,1.0,1.0); // background biru

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-10,10,-10,10);
}



