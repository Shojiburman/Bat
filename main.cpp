#include <windows.h>
#include <stdio.h>
#include <GL/glut.h>
void display(void){

    glClear( GL_COLOR_BUFFER_BIT);
    glPointSize(7.0);

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-0.02, -0.02);//a
    glVertex2f(-0.02, 0.02);//b
    glVertex2f(0.02, 0.02);//c
    glVertex2f(0.02, -0.02);//d
    glEnd();
    int k;
    float x = -0.02, y = -0.02, X = 0.02, Y = 0.02, c =0.0;
    k = 17;

    for(int i = 0; i < 10; i++){   // Y axix
        for(int j = 0; j < 1; j++){ //center
            glBegin(GL_POLYGON);
            glColor3f(0.0, 0.0, 0.0);
            glVertex2f(x, y);//a
            glVertex2f(x, Y);//b
            glVertex2f(X, Y);//c
            glVertex2f(X, y);//d
            glEnd();

            glBegin(GL_POLYGON);
            glColor3f(0.0, 0.0, 0.0);
            glVertex2f(x, -y);//a
            glVertex2f(x, -Y);//b
            glVertex2f(X, -Y);//c
            glVertex2f(X, -y);//d
            glEnd();
        }
        Y += 0.02;
        y += 0.02;
    }

    x = -0.04, y = -0.02, X = 0.04, Y = 0.02, c =0.0;

    for(int i = 0; i < 1; i++){   // X axix
        for(int j = 0; j < 18; j++){
            glBegin(GL_POLYGON);
            glColor3f(0.0, 0.0, 0.0);
            glVertex2f(x, y);//a
            glVertex2f(x, Y);//b
            glVertex2f(X, Y);//c
            glVertex2f(X, y);//d
            glEnd();

            glBegin(GL_POLYGON);
            glColor3f(0.0, 0.0, 0.0);
            glVertex2f(-x, y);//a
            glVertex2f(-x, Y);//b
            glVertex2f(-X, Y);//c
            glVertex2f(-X, y);//d
            glEnd();

            x += .02;
            X += .02;
        }
    }

    x = -0.04, y = -0.02, X = 0.04, Y = 0.02, c =0.0;

    for(int i = 0; i < 12; i++){
        if(i < 5){
            k = 18;
        }
        else if(i < 12  && i >= 5){
            k -= 1;
        }
        for(int j = 0; j < k; j++){
            glBegin(GL_POLYGON);
            glColor3f(0.0, 0.0, 0.0);
            glVertex2f(x, y);//a
            glVertex2f(x, Y);//b
            glVertex2f(X, Y);//c
            glVertex2f(X, y);//d
            glEnd();

            glBegin(GL_POLYGON);
            glColor3f(0.0, 0.0, 0.0);
            glVertex2f(-x, y);//a
            glVertex2f(-x, Y);//b
            glVertex2f(-X, Y);//c
            glVertex2f(-X, y);//d
            glEnd();

            x += .02;
            X += .02;
        }
        x = -0.04;
        X = 0.04;
        Y -= 0.02;
        y += 0.02;
    }


/*-----------------------------------------------------yellow-------------------------------------------*/



    x = -0.02, y = -0.02, X = 0.02, Y = 0.02, c =0.0;
    k = 17;

    for(int i = 0; i < 10; i++){   // Y axix
        for(int j = 0; j < 1; j++){ //center
            glBegin(GL_POLYGON);
            glColor3f(0.0, 0.0, 0.0);
            glVertex2f(x, y);//a
            glVertex2f(x, Y);//b
            glVertex2f(X, Y);//c
            glVertex2f(X, y);//d
            glEnd();

            glBegin(GL_POLYGON);
            glColor3f(0.0, 0.0, 0.0);
            glVertex2f(x, -y);//a
            glVertex2f(x, -Y);//b
            glVertex2f(X, -Y);//c
            glVertex2f(X, -y);//d
            glEnd();
        }
        Y += 0.02;
        y += 0.02;
    }

    x = -0.04, y = -0.02, X = 0.04, Y = 0.02, c =0.0;

    for(int i = 0; i < 1; i++){   // X axix
        for(int j = 0; j < 17; j++){
            glBegin(GL_POLYGON);
            glColor3f(0.0, 0.0, 0.0);
            glVertex2f(x, y);//a
            glVertex2f(x, Y);//b
            glVertex2f(X, Y);//c
            glVertex2f(X, y);//d
            glEnd();

            glBegin(GL_POLYGON);
            glColor3f(0.0, 0.0, 0.0);
            glVertex2f(-x, y);//a
            glVertex2f(-x, Y);//b
            glVertex2f(-X, Y);//c
            glVertex2f(-X, y);//d
            glEnd();

            x += .02;
            X += .02;
        }
    }

    x = -0.04, y = -0.02, X = 0.04, Y = 0.02, c =0.0;

    for(int i = 0; i < 11; i++){
        if(i < 5){
            k = 17;
        }
        else if((i < 11)  && (i >= 5)){
            k -= 1;
        }
        for(int j = 0; j < k; j++){
            glBegin(GL_POLYGON);
            glColor3f(1.1, 1.1, 0.0);
            glVertex2f(x, y);//a
            glVertex2f(x, Y);//b
            glVertex2f(X, Y);//c
            glVertex2f(X, y);//d
            glEnd();

            glBegin(GL_POLYGON);
            glColor3f(1.0, 1.0, 0.0);
            glVertex2f(-x, y);//a
            glVertex2f(-x, Y);//b
            glVertex2f(-X, Y);//c
            glVertex2f(-X, y);//d
            glEnd();

            x += .02;
            X += .02;
        }
        x = -0.04;
        X = 0.04;
        Y -= 0.02;
        y += 0.02;
    }



    /*------------------------------------------------------Black---------------------------------------------------------------*/


    x = -0.02, y = -0.02, X = 0.02, Y = 0.02, c =0.0;
    k = 16;

    for(int i = 0; i < 9; i++){   // Y axix
        for(int j = 0; j < 1; j++){ //center
            glBegin(GL_POLYGON);
            glColor3f(1.0, 1.0, 0.0);
            glVertex2f(x, y);//a
            glVertex2f(x, Y);//b
            glVertex2f(X, Y);//c
            glVertex2f(X, y);//d
            glEnd();

            glBegin(GL_POLYGON);
            glColor3f(1.0, 1.0, 0.0);
            glVertex2f(x, -y);//a
            glVertex2f(x, -Y);//b
            glVertex2f(X, -Y);//c
            glVertex2f(X, -y);//d
            glEnd();
        }
        Y += 0.02;
        y += 0.02;
    }

    x = -0.04, y = -0.02, X = 0.04, Y = 0.02, c =0.0;

    for(int i = 0; i < 1; i++){   // X axix
        for(int j = 0; j < 16; j++){
            glBegin(GL_POLYGON);
            glColor3f(1.1, 0.0, 0.0);
            glVertex2f(x, y);//a
            glVertex2f(x, Y);//b
            glVertex2f(X, Y);//c
            glVertex2f(X, y);//d
            glEnd();

            glBegin(GL_POLYGON);
            glColor3f(0.0, 1.0, 0.0);
            glVertex2f(-x, y);//a
            glVertex2f(-x, Y);//b
            glVertex2f(-X, Y);//c
            glVertex2f(-X, y);//d
            glEnd();

            x += .02;
            X += .02;
        }
    }

    x = -0.04, y = -0.02, X = 0.04, Y = 0.02, c =0.0;

    for(int i = 0; i < 10; i++){
        if(i < 4){
            k = 16;
        }
        else if((i < 10)  && (i >= 4)){
            k -= 1;
        }
        for(int j = 0; j < k; j++){
            glBegin(GL_POLYGON);
            glColor3f(0.0, 0.0, 0.0);
            glVertex2f(x, y);//a
            glVertex2f(x, Y);//b
            glVertex2f(X, Y);//c
            glVertex2f(X, y);//d
            glEnd();

            glBegin(GL_POLYGON);
            glColor3f(0.0, 0.0, 0.0);
            glVertex2f(-x, y);//a
            glVertex2f(-x, Y);//b
            glVertex2f(-X, Y);//c
            glVertex2f(-X, y);//d
            glEnd();

            x += .02;
            X += .02;
        }
        x = -0.04;
        X = 0.04;
        Y -= 0.02;
        y += 0.02;
    }

    /*--------------------------------------------------------------ear----------------------------------------------*/
    x = -0.04, y = 0.14, X = -0.02, Y = 0.16, c =0.0;

    for(int i = 0; i < 4; i++){
        glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 0.0);
        glVertex2f(x, y);//a
        glVertex2f(x, Y);//b
        glVertex2f(X, Y);//c
        glVertex2f(X, y);//d
        glEnd();
        x += .02;
        X += .02;
    }

    x = 0.08, y = 0.14, X = 0.06, Y = 0.16, c =0.0;
    k = 8;
    for(int i = 0; i < 6; i++){
            if(i != 0){
                k = 5;
            }
         for(int j = 0; j < k; j++){

            if((i == 1 && j == 4) || (i == 5 && j == 4) || (i == 5 && j == 0)){
                glColor3f(0.0, 0.0, 0.0);
            }
            else{
                glColor3f(1.0, 1.0, 0.0);
            }
            glBegin(GL_POLYGON);
            glVertex2f(x, y);//a
            glVertex2f(x, Y);//b
            glVertex2f(X, Y);//c
            glVertex2f(X, y);//d
            glEnd();

            glBegin(GL_POLYGON);
            glVertex2f(-x, y);//a
            glVertex2f(-x, Y);//b
            glVertex2f(-X, Y);//c
            glVertex2f(-X, y);//d
            glEnd();

            x += .02;
            X += .02;
        }
        x = 0.08;
        X = 0.06;
        y -= .02;
        Y -= .02;
     }

/*------------------------------------------------tail---------------------------------*/


    x = 0.04, y = -0.14, X = 0.02, Y = -0.16, c =0.0;
    k = 6;
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-0.04, -.14);//a
    glVertex2f(-0.04, -.16);//b
    glVertex2f(0.02, -.16);//c
    glVertex2f(0.02, -.14);//d
    glEnd();

    for(int i = 0; i < 4; i++){
            if(i != 0){
                k = 4;
            }
         for(int j = 0; j < k; j++){

            if((i > 0 && j == 0)){
                glBegin(GL_POLYGON);
                glColor3f(0.0, 0.0, 0.0);
                glVertex2f(0.04, -0.12);//a
                glVertex2f(0.04, -0.14);//b
                glVertex2f(0.02, -0.14);//c
                glVertex2f(0.02, -0.12);//d
                glEnd();
            }
            else if((i == 3 && j == 1)){
                glBegin(GL_POLYGON);
                glColor3f(0.0, 0.0, 0.0);
                glVertex2f(0.06, -0.06);//a
                glVertex2f(0.06, -0.08);//b
                glVertex2f(0.04, -0.08);//c
                glVertex2f(0.04, -0.06);//d
                glEnd();
            }
            else if((i == 3 && j >= 3)){
                glBegin(GL_POLYGON);
                glColor3f(0.0, 0.0, 0.0);
                glVertex2f(0.06, -0.06);//a
                glVertex2f(0.06, -0.08);//b
                glVertex2f(0.04, -0.08);//c
                glVertex2f(0.04, -0.06);//d
                glEnd();
            }
            else{
                glColor3f(1.0, 1.0, 0.0);
            }
            glBegin(GL_POLYGON);
            glVertex2f(x, y);//a
            glVertex2f(x, Y);//b
            glVertex2f(X, Y);//c
            glVertex2f(X, y);//d
            glEnd();

            glBegin(GL_POLYGON);
            glVertex2f(-x, y);//a
            glVertex2f(-x, Y);//b
            glVertex2f(-X, Y);//c
            glVertex2f(-X, y);//d
            glEnd();

            x += .02;
            X += .02;
        }
        x = 0.04;
        X = 0.02;
        y += .02;
        Y += .02;
     }

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-0.1, -.10);//a
    glVertex2f(-0.1, -.12);//b
    glVertex2f(-0.12, -.12);//c
    glVertex2f(-0.12, -.10);//d
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.1, -.10);//a
    glVertex2f(0.1, -.12);//b
    glVertex2f(0.12, -.12);//c
    glVertex2f(0.12, -.10);//d
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 0.0);
    glVertex2f(-0.10, -0.12);//a
    glVertex2f(-0.10, -0.14);//b
    glVertex2f(-0.12, -0.14);//c
    glVertex2f(-0.12, -0.12);//d
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 0.0);
    glVertex2f(0.10, -.12);//a
    glVertex2f(0.10, -.14);//b
    glVertex2f(0.12, -.14);//c
    glVertex2f(0.12, -.12);//d
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-0.12, -.14);//a
    glVertex2f(-0.12, -.16);//b
    glVertex2f(-0.14, -.16);//c
    glVertex2f(-0.14, -.14);//d
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.12, -.14);//a
    glVertex2f(0.12, -.16);//b
    glVertex2f(0.14, -.16);//c
    glVertex2f(0.14, -.14);//d
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 0.0);
    glVertex2f(-0.18, -.14);//a
    glVertex2f(-0.18, -.16);//b
    glVertex2f(-0.22, -.16);//c
    glVertex2f(-0.22, -.14);//d
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 0.0);
    glVertex2f(0.18, -.14);//a
    glVertex2f(0.18, -.16);//b
    glVertex2f(0.22, -.16);//c
    glVertex2f(0.22, -.14);//d
    glEnd();


    glFlush();
}

 void ear(float x, float y, float X, float Y){

 }

int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutInitDisplayMode ( GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(800, 900);   // Set the window's initial width & height
	glutCreateWindow("bat"); // Create a window with the given title
    glClearColor(1, 1, 1, 1);
                           // start with identity matrix

	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop

	return 0;
}
