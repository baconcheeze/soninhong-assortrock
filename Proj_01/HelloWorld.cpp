#include <iostream>
#include <GL/glut.h>
#include <math.h>
#include "TimeMgr.h"

float MercuryTheta = 1;
float VenusTheta = 2;
float EarthTheta = 3;
float MoonTheta = 4;
float MarsTheta = 5;
float JupiterTheta = 6;
float Jupiter_1Theta = 7;
float Jupiter_2Theta = 8;
float Jupiter_3Theta = 9;

int white = 0;
int red = 0;
int blue = 0;
int green = 0;




void init(void)
{
	GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 };
	GLfloat mat_shininess[] = { 50.0 };
	GLfloat light_position[] = { 0.4, 0.4, 0.4, 0.0 };
	//GLfloat light_position[] = { 0.4, 0.4, 0.4, 1.0 };
	//GLfloat light_position[] = { 0.7, 0.7, 0.7, 1.0 };
	//GLfloat light_position[] = { 5, 0, 0, 1 };
	glClearColor(0.0, 0.0, 0.0, 0.0);
	//glShadeModel(GL_SMOOTH);

	//glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
	//glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
	glLightfv(GL_LIGHT0, GL_POSITION, light_position);

	glEnable(GL_LIGHTING);
	//glEnable(GL_LIGHT0);
	glEnable(GL_DEPTH_TEST);
}

void init1(void)
{
	GLfloat light_position[] = { 0.0, 0.0, 0.0, 1.0 };
	GLfloat light_ambient[] = { 1.0, 1.0, 1.0, 1.0 };
	GLfloat light_diffuse[] = { 1.0, 1.0, 1.0, 1.0 };
	GLfloat light_specular[] = { 1.0, 1.0, 1.0, 1.0 };

	GLfloat light_position1[] = { 0.0, 0.0, 0.0, 1.0 };
	GLfloat light_ambient1[] = { 0.2, 0.2, 0.2, 1.0 };
	GLfloat light_diffuse1[] = { 1.0, 0.0, 0.0, 1.0 };
	GLfloat light_specular1[] = { 1.0, 0.0, 0.0, 1.0 };

	GLfloat light_position2[] = { 0.0, 0.0, 0.0, 1.0 };
	GLfloat light_ambient2[] = { 0.2, 0.2, 0.2, 1.0 };
	GLfloat light_diffuse2[] = { 0.0, 1.0, 0.0, 1.0 };
	GLfloat light_specular2[] = { 0.0, 1.0, 0.0, 1.0 };
	
	GLfloat light_position3[] = { 0.0, 0.0, 0.0, 1.0 };
	GLfloat light_ambient3[] = { 0.2, 0.2, 0.2, 1.0 };
	GLfloat light_diffuse3[] = { 0.0, 0.0, 1.0, 1.0 };
	GLfloat light_specular3[] = { 0.0, 0.0, 1.0, 1.0 };
	
	
	
	
	
	GLfloat mat_ambient[] = { 0.2, 0.2, 0.2, 1.0 };
	GLfloat mat_diffuse[] = { 1.0, 1.0, 1.0, 1.0 };
	GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 };

	GLfloat mat_ambient1[] = { 1.0, 1.0, 1.0, 1.0 };
	GLfloat mat_diffuse1[] = { 1.0, 0.0, 0.0, 1.0 };
	GLfloat mat_specular1[] = { 1.0, 0.0, 0.0, 1.0 };


	GLfloat mat_specular_red[] = { 1, 0, 0, 1 };
	GLfloat mat_shininess[] = { 50.0 };
	GLfloat mat_emission[] = { 1.0, 0.0, 0.0, 1.0 };
	GLfloat mat_emission1[] = { 0.0, 0.0, 0.0, 1.0 };
	//glMaterialfv(GL_FRONT, GL_EMISSION, mat_emission);
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glShadeModel(GL_SMOOTH);
	
	
	glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);
	glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
	glLightfv(GL_LIGHT0, GL_POSITION, light_position);

	glLightfv(GL_LIGHT1, GL_AMBIENT, light_ambient1);
	glLightfv(GL_LIGHT1, GL_DIFFUSE, light_diffuse1);
	glLightfv(GL_LIGHT1, GL_SPECULAR, light_specular1);
	glLightfv(GL_LIGHT1, GL_POSITION, light_position1);

	glLightfv(GL_LIGHT2, GL_AMBIENT, light_ambient2);
	glLightfv(GL_LIGHT2, GL_DIFFUSE, light_diffuse2);
	glLightfv(GL_LIGHT2, GL_SPECULAR, light_specular2);
	glLightfv(GL_LIGHT2, GL_POSITION, light_position2);

	glLightfv(GL_LIGHT3, GL_AMBIENT, light_ambient3);
	glLightfv(GL_LIGHT3, GL_DIFFUSE, light_diffuse3);
	glLightfv(GL_LIGHT3, GL_SPECULAR, light_specular3);
	glLightfv(GL_LIGHT3, GL_POSITION, light_position3);
	
	
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
	glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
	
	glEnable(GL_LIGHTING);
	
	//glEnable(GL_LIGHT0);
	//glEnable(GL_LIGHT1);
	//glEnable(GL_LIGHT2);
	//glEnable(GL_LIGHT3);
	glEnable(GL_DEPTH_TEST);

	


}


void display(void)
{
	GLfloat mat_emission[] = { 1.0, 0.0, 0.0, 1.0 };
	GLfloat mat_emission1[] = { 0.6, 0.3, 0.0, 1.0 };
	
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	
	glPushMatrix();
	glRotatef(-70, 1.0, 0.0, 0.0);

	//태양
	glPushMatrix();
	glTranslatef(0.0, 0.0, 0.0);

	glColor3f(1, 0, 0);
	glMaterialfv(GL_FRONT, GL_EMISSION, mat_emission);
	glutSolidSphere(0.4, 100, 100);
	glColor3f(0, 0, 0);
	glMaterialfv(GL_FRONT, GL_EMISSION, mat_emission1);

	//수
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.5*cos(MercuryTheta), 0.5 * sin(MercuryTheta), 0.0);
	glutSolidSphere(0.02, 100, 100);

	//금
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.65*cos(VenusTheta), 0.65 * sin(VenusTheta), 0.0);
	glutSolidSphere(0.03, 100, 100);

	//지
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.9*cos(EarthTheta), 0.9 * sin(EarthTheta), 0.0);
	glutSolidSphere(0.03, 100, 100);
	glTranslated(0.075*cos(MoonTheta), 0.075 * sin(MoonTheta), 0.0);
	glutSolidSphere(0.01, 100, 100);

	//화
	glPopMatrix();
	glPushMatrix();
	glTranslatef(1.1*cos(MarsTheta), 1.1 * sin(MarsTheta), 0.0);
	glutSolidSphere(0.03, 100, 100);

	//목
	glPopMatrix();
	glPushMatrix();
	glTranslatef(1.5*cos(JupiterTheta), 1.5 * sin(JupiterTheta), 0.0);
	glutSolidSphere(0.07, 100, 100);

	glPushMatrix();
	glTranslated(0.12*cos(Jupiter_1Theta), 0.12 * sin(Jupiter_1Theta), 0.0);
	glutSolidSphere(0.01, 100, 100);

	glPopMatrix();
	glPushMatrix();
	glTranslated(0.18*cos(Jupiter_2Theta), 0.18 * sin(Jupiter_2Theta), 0.0);
	glutSolidSphere(0.01, 100, 100);

	glPopMatrix();
	glPushMatrix();
	glTranslated(0.0, 0.12*cos(Jupiter_3Theta), 0.12 * sin(Jupiter_3Theta));
	glutSolidSphere(0.01, 100, 100);

	glPopMatrix();
	glPopMatrix();
	glPopMatrix();
	


	glFlush();

	glutSwapBuffers();
	
	
	
	
}

void keyboard(unsigned char key, int x, int y)
{
	switch (key)
	{
		case '1':
		{
			if(white == 0)
			{
				glEnable(GL_LIGHT0);
				white = 1;
				return;
			}

			if (white == 1)
			{
				glDisable(GL_LIGHT0);
				white = 0;
				return;
			}
			
		}
		break;

		case '2':
		{
			if (red == 0)
			{
				glEnable(GL_LIGHT1);
				red = 1;
				return;
			}

			if (red == 1)
			{
				glDisable(GL_LIGHT1);
				red = 0;
				return;
			}
		}
		break;

		case '3':
		{
			if (green == 0)
			{
				glEnable(GL_LIGHT2);
				green = 1;
				return;
			}

			if (green == 1)
			{
				glDisable(GL_LIGHT2);
				green = 0;
				return;
			}
		}
		break;

		case '4':
		{
			if (blue == 0)
			{
				glEnable(GL_LIGHT3);
				blue = 1;
				return;
			}

			if (blue == 1)
			{
				glDisable(GL_LIGHT3);
				blue = 0;
				return;
			}
		}
		break;
	}
}



void reshape(int w, int h)
{
	
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	if (w <= h)
		glOrtho(-1.5, 1.5, -1.5 * (GLfloat)h / (GLfloat)w,
			1.5 * (GLfloat)h / (GLfloat)w, -10.0, 10.0);
	else
		glOrtho(-1.5 * (GLfloat)w / (GLfloat)h,
			1.5 * (GLfloat)w / (GLfloat)h, -1.5, 1.5, -10.0, 10.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	

	/*
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(65.0, ((float)w) / h, 1.0, 20.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glTranslatef(0.0, 0.0, -5.0);
	*/
}

void IDLE()
{   
	
	TimeMgr::Create()->Update();
	MercuryTheta += 1.2* TimeMgr::Create()->dt();
	VenusTheta += 1.1 * TimeMgr::Create()->dt();
	EarthTheta += 1 * TimeMgr::Create()->dt();
	MoonTheta += 5 * TimeMgr::Create()->dt();
	MarsTheta += 1 * TimeMgr::Create()->dt();
	JupiterTheta += 0.7 * TimeMgr::Create()->dt();
	Jupiter_1Theta += 7 * TimeMgr::Create()->dt();
	Jupiter_2Theta += 5 * TimeMgr::Create()->dt();
	Jupiter_3Theta += 3 * TimeMgr::Create()->dt();
	
	glutPostRedisplay();

	
}

int main(int argc, char** argv)
{
	TimeMgr::Create()->Initialize();


	glutInit(&argc, argv);
	//glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(1200, 1200);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("HW3");
	init1();
	glutDisplayFunc(display);
	glutKeyboardFunc(keyboard);
	glutReshapeFunc(reshape);
	glutIdleFunc(IDLE);
	glutMainLoop();
	return 0;
}
