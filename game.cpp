//============================================================================
// Name        : game.cpp
// Author      : Muhammad Ali
// Version     :
// Copyright   : (c) Reserved
// Description : Basic 2D game of Centipede...
//============================================================================

#ifndef CENTIPEDE_CPP_
#define CENTIPEDE_CPP_
#include "util.h"
#include "Engine.h"
#include <iostream>
#include<string>
#include<cmath> // for basic math functions such as cos, sin, sqrt
using namespace std;


Engine driver;








// seed the random numbers generator by current time (see the documentation of srand for further help)...

/* Function sets canvas size (drawing area) in pixels...
 *  that is what dimensions (x and y) your game will have
 *  Note that the bottom-left coordinate has value (0,0) and top-right coordinate has value (width-1,height-1)
 * */
void SetCanvasSize(int width, int height) {
	glMatrixMode (GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, width, 0, height, -1, 1); // set the screen size to given width and height.
	glMatrixMode (GL_MODELVIEW);

}

/*
 * Main Canvas drawing function.
 * */


void GameDisplay()/**/{
	glClearColor(0/*Red Component*/, 0,	//148.0/255/*Green Component*/,
			0.0/*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
	glClear (GL_COLOR_BUFFER_BIT); //Update the colors


	if (driver.get_name() == true)
	{
		driver.draw_name_menu();
	}
	if (driver.get_main_menu() == true)
	{
		driver.draw_main_menu();
	}
	if (driver.get_start_game() == true)
	{
		driver.drawgrid();
		if (driver.get_state() == false)
		{
			driver.set_ids();
			driver.check_match_id();
			driver.set_score(0);
			driver.set_state(true);
		}
		driver.drawshapes();
		DrawString(150,800,"Score : " + to_string(driver.get_score()) , colors[RED]);
	}
	if (driver.get_help() == true)
	{
		driver.draw_help_menu();
	}
	if (driver.get_phelp() == true)
	{
		driver.draw_phelp_menu();
	}







	//Row 0 all downs
	for (int i = 0 ; i < 8 ; i++)
	{
		if (driver.get_click(0,i) == true && driver.get_click(1,i) == true)
		{
			driver.swap(0,i,1,i);
			driver.set_click(0,i,false);
			driver.set_click(1,i,false);
		}
	}

	//Row 1 all downs
	for (int i = 0 ; i < 8 ; i++)
	{
		if (driver.get_click(1,i) == true && driver.get_click(2,i) == true)
		{
			driver.swap(1,i,2,i);
			driver.set_click(1,i,false);
			driver.set_click(2,i,false);
		}
	}

	//Row 2 all downs
	for (int i = 0 ; i < 8 ; i++)
	{
		if (driver.get_click(2,i) == true && driver.get_click(3,i) == true)
		{
			driver.swap(2,i,3,i);
			driver.set_click(2,i,false);
			driver.set_click(3,i,false);
		}
	}

	//Row 3 all downs
	for (int i = 0 ; i < 8 ; i++)
	{
		if (driver.get_click(3,i) == true && driver.get_click(4,i) == true)
		{
			driver.swap(3,i,4,i);
			driver.set_click(3,i,false);
			driver.set_click(4,i,false);
		}
	}

	//Row 4 all downs
	for (int i = 0 ; i < 8 ; i++)
	{
		if (driver.get_click(4,i) == true && driver.get_click(5,i) == true)
		{
			driver.swap(4,i,5,i);
			driver.set_click(4,i,false);
			driver.set_click(5,i,false);
		}
	}

	//Row 5 all downs
	for (int i = 0 ; i < 8 ; i++)
	{
		if (driver.get_click(5,i) == true && driver.get_click(6,i) == true)
		{
			driver.swap(5,i,6,i);
			driver.set_click(5,i,false);
			driver.set_click(6,i,false);
		}
	}

	//Row 6 all downs
	for (int i = 0 ; i < 8 ; i++)
	{
		if (driver.get_click(6,i) == true && driver.get_click(7,i) == true)
		{
			driver.swap(6,i,7,i);
			driver.set_click(6,i,false);
			driver.set_click(7,i,false);
		}
	}














	//Column 7 Left
	for (int i = 0 ; i < 8 ; i++)
	{
		if (driver.get_click(i,7) == true && driver.get_click(i,7-1) == true)
		{
			driver.swap(i,7,i,7-1);
			driver.set_click(i,7,false);
			driver.set_click(i,7-1,false);
		}
	}


	//Column 6 Left
	for (int i = 0 ; i < 8 ; i++)
	{
		if (driver.get_click(i,6) == true && driver.get_click(i,6-1) == true)
		{
			driver.swap(i,6,i,6-1);
			driver.set_click(i,6,false);
			driver.set_click(i,6-1,false);
		}
	}



	//Column 5 Left
	for (int i = 0 ; i < 8 ; i++)
	{
		if (driver.get_click(i,5) == true && driver.get_click(i,5-1) == true)
		{
			driver.swap(i,5,i,5-1);
			driver.set_click(i,5,false);
			driver.set_click(i,5-1,false);
		}
	}


	//Column 4 Left
	for (int i = 0 ; i < 8 ; i++)
	{
		if (driver.get_click(i,4) == true && driver.get_click(i,4-1) == true)
		{
			driver.swap(i,4,i,4-1);
			driver.set_click(i,4,false);
			driver.set_click(i,4-1,false);
		}
	}



	//Column 3 Left
	for (int i = 0 ; i < 8 ; i++)
	{
		if (driver.get_click(i,3) == true && driver.get_click(i,3-1) == true)
		{
			driver.swap(i,3,i,3-1);
			driver.set_click(i,3,false);
			driver.set_click(i,3-1,false);
		}
	}



	//Column 2 Left
	for (int i = 0 ; i < 8 ; i++)
	{
		if (driver.get_click(i,2) == true && driver.get_click(i,2-1) == true)
		{
			driver.swap(i,2,i,2-1);
			driver.set_click(i,2,false);
			driver.set_click(i,2-1,false);
		}
	}



	//Column 1 Left
	for (int i = 0 ; i < 8 ; i++)
	{
		if (driver.get_click(i,1) == true && driver.get_click(i,1-1) == true)
		{
			driver.swap(i,1,i,1-1);
			driver.set_click(i,1,false);
			driver.set_click(i,1-1,false);
		}
	}












	glutPostRedisplay();
	glutSwapBuffers(); // do not modify this line..

}

/*This function is called (automatically) whenever any non-printable key (such as up-arrow, down-arraw)
 * is pressed from the keyboard
 *
 * You will have to add the necessary code here when the arrow keys are pressed or any other key is pressed...
 *
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 *
 * */

void NonPrintableKeys(int key, int x, int y) {
	if (key
			== GLUT_KEY_LEFT /*GLUT_KEY_LEFT is constant and contains ASCII for left arrow key*/) {
		// what to do when left key is pressed...

	} else if (key
			== GLUT_KEY_RIGHT /*GLUT_KEY_RIGHT is constant and contains ASCII for right arrow key*/) {

	} else if (key
			== GLUT_KEY_UP/*GLUT_KEY_UP is constant and contains ASCII for up arrow key*/) {

	}

	else if (key
			== GLUT_KEY_DOWN/*GLUT_KEY_DOWN is constant and contains ASCII for down arrow key*/) {

	}

	/* This function calls the Display function to redo the drawing. Whenever you need to redraw just call
	 * this function*/

	glutPostRedisplay();

}

/*This function is called (automatically) whenever any printable key (such as x,b, enter, etc.)
 * is pressed from the keyboard
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 * */
void PrintableKeys(unsigned char key, int x, int y) {
	//if (key == 27/* Escape key ASCII*/) {
	//	exit(1); // exit the program when escape key is pressed.
	//}
	if (driver.get_name() == true)
	{
		if (driver.get_i_state() == false)
		{
			driver.set_i(0);
			driver.set_i_state(true);
		}
		if (key == 32)
		{
			driver.set_flname(' ' , driver.get_i());
			driver.set_i(driver.get_i() + 1);
			cout << "Name : " << driver.get_flname() << endl ;
		}
		else if (key == 'a' || key == 'A')
		{
			driver.set_flname('A' , driver.get_i());
			driver.set_i(driver.get_i() + 1);
			cout << "Name : " << driver.get_flname() << endl ;
		}
		else if (key == 'b' || key == 'B')
		{
			driver.set_flname('B' , driver.get_i());
			driver.set_i(driver.get_i() + 1);
			cout << "Name : " << driver.get_flname() << endl ;
		}
		else if (key == 'c' || key == 'C')
		{
			driver.set_flname('C' , driver.get_i());
			driver.set_i(driver.get_i() + 1);
			cout << "Name : " << driver.get_flname() << endl ;
		}
		else if (key == 'd' || key == 'D')
		{
			driver.set_flname('D' , driver.get_i());
			driver.set_i(driver.get_i() + 1);
			cout << "Name : " << driver.get_flname() << endl ;
		}
		else if (key == 'e' || key == 'E')
		{
			driver.set_flname('E' , driver.get_i());
			driver.set_i(driver.get_i() + 1);
			cout << "Name : " << driver.get_flname() << endl ;
		}
		else if (key == 'f' || key == 'F')
		{
			driver.set_flname('F' , driver.get_i());
			driver.set_i(driver.get_i() + 1);
			cout << "Name : " << driver.get_flname() << endl ;
		}
		else if (key == 'g' || key == 'G')
		{
			driver.set_flname('G' , driver.get_i());
			driver.set_i(driver.get_i() + 1);
			cout << "Name : " << driver.get_flname() << endl ;
		}
		else if (key == 'h' || key == 'H')
		{
			driver.set_flname('H' , driver.get_i());
			driver.set_i(driver.get_i() + 1);
			cout << "Name : " << driver.get_flname() << endl ;
		}
		else if (key == 'i' || key == 'I')
		{
			driver.set_flname('I' , driver.get_i());
			driver.set_i(driver.get_i() + 1);
			cout << "Name : " << driver.get_flname() << endl ;
		}
		else if (key == 'j' || key == 'J')
		{
			driver.set_flname('J' , driver.get_i());
			driver.set_i(driver.get_i() + 1);
			cout << "Name : " << driver.get_flname() << endl ;
		}
		else if (key == 'k' || key == 'K')
		{
			driver.set_flname('K' , driver.get_i());
			driver.set_i(driver.get_i() + 1);
			cout << "Name : " << driver.get_flname() << endl ;
		}
		else if (key == 'l' || key == 'L')
		{
			driver.set_flname('L' , driver.get_i());
			driver.set_i(driver.get_i() + 1);
			cout << "Name : " << driver.get_flname() << endl ;
		}
		else if (key == 'm' || key == 'M')
		{
			driver.set_flname('M' , driver.get_i());
			driver.set_i(driver.get_i() + 1);
			cout << "Name : " << driver.get_flname() << endl ;
		}
		else if (key == 'n' || key == 'N')
		{
			driver.set_flname('N' , driver.get_i());
			driver.set_i(driver.get_i() + 1);
			cout << "Name : " << driver.get_flname() << endl ;
		}
		else if (key == 'o' || key == 'O')
		{
			driver.set_flname('O' , driver.get_i());
			driver.set_i(driver.get_i() + 1);
			cout << "Name : " << driver.get_flname() << endl ;
		}
		else if (key == 'p' || key == 'P')
		{
			driver.set_flname('P' , driver.get_i());
			driver.set_i(driver.get_i() + 1);
			cout << "Name : " << driver.get_flname() << endl ;
		}
		else if (key == 'q' || key == 'Q')
		{
			driver.set_flname('Q' , driver.get_i());
			driver.set_i(driver.get_i() + 1);
			cout << "Name : " << driver.get_flname() << endl ;
		}
		else if (key == 'r' || key == 'R')
		{
			driver.set_flname('R' , driver.get_i());
			driver.set_i(driver.get_i() + 1);
			cout << "Name : " << driver.get_flname() << endl ;
		}
		else if (key == 's' || key == 'S')
		{
			driver.set_flname('S' , driver.get_i());
			driver.set_i(driver.get_i() + 1);
			cout << "Name : " << driver.get_flname() << endl ;
		}
		else if (key == 't' || key == 'T')
		{
			driver.set_flname('T' , driver.get_i());
			driver.set_i(driver.get_i() + 1);
			cout << "Name : " << driver.get_flname() << endl ;
		}
		else if (key == 'u' || key == 'U')
		{
			driver.set_flname('U' , driver.get_i());
			driver.set_i(driver.get_i() + 1);
			cout << "Name : " << driver.get_flname() << endl ;
		}
		else if (key == 'v' || key == 'V')
		{
			driver.set_flname('V' , driver.get_i());
			driver.set_i(driver.get_i() + 1);
			cout << "Name : " << driver.get_flname() << endl ;
		}
		else if (key == 'w' || key == 'W')
		{
			driver.set_flname('W' , driver.get_i());
			driver.set_i(driver.get_i() + 1);
			cout << "Name : " << driver.get_flname() << endl ;
		}
		else if (key == 'x' || key == 'X')
		{
			driver.set_flname('X' , driver.get_i());
			driver.set_i(driver.get_i() + 1);
			cout << "Name : " << driver.get_flname() << endl ;
		}
		else if (key == 'y' || key == 'Y')
		{
			driver.set_flname('Y' , driver.get_i());
			driver.set_i(driver.get_i() + 1);
			cout << "Name : " << driver.get_flname() << endl ;
		}
		else if (key == 'z' || key == 'Z')
		{
			driver.set_flname('Z' , driver.get_i());
			driver.set_i(driver.get_i() + 1);
			cout << "Name : " << driver.get_flname() << endl ;
		}
	}
	if (key == 27 && driver.get_start_game() == true)
	{
		driver.set_start_game(false);
		driver.set_phelp(true);
	}
	glutPostRedisplay();
}

/*
 * This function is called after every 1000.0/FPS milliseconds
 * (FPS is defined on in the beginning).
 * You can use this function to animate objects and control the
 * speed of different moving objects by varying the constant FPS.
 *
 * */
void Timer(int m)
{
	// implement your functionality here

	// once again we tell the library to call our Timer function after next 1000/FPS
	glutPostRedisplay();
	glutTimerFunc(1000.0, Timer, 0);
}

/*This function is called (automatically) whenever your mouse moves witin inside the game window
 *
 * You will have to add the necessary code here for finding the direction of shooting
 *
 * This function has two arguments: x & y that tells the coordinate of current position of move mouse
 *
 * */
void MousePressedAndMoved(int x, int y)
{
	//cout << "For draw functions : " << x << " " << 960 - y << endl;
	//cout << "For mouse functions : " << x << " "<< y << endl ;

	/************************************ALL DOWNS*****************************************/
	for (int i = 0 , j = 245 , k = 315 ; i < 7 ; i++ , j+=85 , k+=85)
	{
		//(0,0) Down
		if (x > 175 && x < 250 && y > j && y < k)
		{
			driver.set_click(i,0,true);
		}
		if (driver.get_click(i,0) == true && x > 175 && x < 250 && y > j + 85 && y < k + 85)
		{
			driver.set_click(i+1,0,true);
		}

		//(0,1) Down
		if (x > 260 && x < 335 && y > j && y < k)
		{
			driver.set_click(i,1,true);
		}
		if (driver.get_click(i,1) == true && x > 260 && x < 335 && y > j + 85 && y < k + 85)
		{
			driver.set_click(i+1,1,true);
		}


		//(0,2) Down
		if (x > 345 && x < 420 && y > j && y < k)
		{
			driver.set_click(i,2,true);
		}
		if (driver.get_click(i,2) == true && x > 345 && x < 420 && y > j + 85 && y < k + 85)
		{
			driver.set_click(i+1,2,true);
		}

		//(0,3) Down
		if (x > 430 && x < 505 && y > j && y < k)
		{
			driver.set_click(i,3,true);
		}
		if (driver.get_click(i,3) == true && x > 430 && x < 505 && y > j + 85 && y < k + 85)
		{
			driver.set_click(i+1,3,true);
		}

		//(0,4) Down
		if (x > 515 && x < 590 && y > j && y < k)
		{
			driver.set_click(i,4,true);
		}
		if (driver.get_click(i,4) == true && x > 515 && x < 590 && y > j + 85 && y < k + 85)
		{
			driver.set_click(i+1,4,true);
		}

		//(0,5) Down
		if (x > 600 && x < 675 && y > j && y < k)
		{
			driver.set_click(i,5,true);
		}
		if (driver.get_click(i,5) == true && x > 600 && x < 675 && y > j + 85 && y < k + 85)
		{
			driver.set_click(i+1,5,true);
		}

		//(0,6) Down
		if (x > 685 && x < 760 && y > j && y < k)
		{
			driver.set_click(i,6,true);
		}
		if (driver.get_click(i,6) == true && x > 685 && x < 760 && y > j + 85 && y < k + 85)
		{
			driver.set_click(i+1,6,true);
		}

		//(0,7) Down
		if (x > 770 && x < 845 && y > j && y < k)
		{
			driver.set_click(i,7,true);
		}
		if (driver.get_click(i,7) == true && x > 770 && x < 845 && y > j + 85 && y < k + 85)
		{
			driver.set_click(i+1,7,true);
		}
	}








	for (int i = 0 , j = 770 , k = 845; i < 8 ; i++, j-=85,k-=85)
	{
		//Column 7 Left
		if (x > j && x < k && y > 245 && y < 315)
		{
			driver.set_click(i,7,true);
		}
		if (driver.get_click(i,7) == true && x > j - 85 && x < k - 85 && y > 245 && y < 315)
		{
			driver.set_click(i,7-1,true);
		}




		//Column 6 Left
		if (x > j && x < k && y > 330 && y < 400)
		{
			driver.set_click(i,6,true);
		}
		if (driver.get_click(i,6) == true && x > j - 85 && x < k - 85 && y > 330 && y < 400)
		{
			driver.set_click(i,6-1,true);
		}



		//Column 5 Left
		if (x > j && x < k && y > 415 && y < 485)
		{
			driver.set_click(i,5,true);
		}
		if (driver.get_click(i,5) == true && x > j - 85 && x < k - 85 && y > 415 && y < 485)
		{
			driver.set_click(i,5-1,true);
		}




		//Column 4 Left
		if (x > j && x < k && y > 500 && y < 570)
		{
			driver.set_click(i,4,true);
		}
		if (driver.get_click(i,4) == true && x > j - 85 && x < k - 85 && y > 500 && y < 570)
		{
			driver.set_click(i,4-1,true);
		}


		//Column 3 Left
		if (x > j && x < k && y > 585 && y < 655)
		{
			driver.set_click(i,3,true);
		}
		if (driver.get_click(i,3) == true && x > j - 85 && x < k - 85 && y > 585 && y < 655)
		{
			driver.set_click(i,3-1,true);
		}


		//Column 2 Left
		if (x > j && x < k && y > 670 && y < 740)
		{
			driver.set_click(i,2,true);
		}
		if (driver.get_click(i,2) == true && x > j - 85 && x < k - 85 && y > 670 && y < 740)
		{
			driver.set_click(i,2-1,true);
		}



		//Column 1 Left
		if (x > j && x < k && y > 755 && y < 825)
		{
			driver.set_click(i,1,true);
		}
		if (driver.get_click(i,1) == true && x > j - 85 && x < k - 85 && y > 755 && y < 825)
		{
			driver.set_click(i,1-1,true);
		}

	}








	glutPostRedisplay();
}
void MouseMoved(int x, int y)
{
	
	glutPostRedisplay();
}

/*This function is called (automatically) whenever your mouse button is clicked witin inside the game window
 *
 * You will have to add the necessary code here for shooting, etc.
 *
 * This function has four arguments: button (Left, Middle or Right), state (button is pressed or released),
 * x & y that tells the coordinate of current position of move mouse
 *
 * */
void MouseClicked(int button, int state, int x, int y) {

	if (button == GLUT_LEFT_BUTTON) // dealing only with left button
	{
		if (driver.get_name() == true)
		{
			if (x > 445 && x < 575 && y > 360 && y < 380)
			{
				driver.set_name(false);
				driver.set_main_menu(true);
			}
		}
		if (driver.get_name() == false && driver.get_main_menu() == true)
		{
			if (x > 420 && x < 590 && y > 240 && y < 260)
			{
				driver.set_main_menu(false);
				driver.set_start_game(true);
			}
		}
		if (driver.get_main_menu() == true)
		{
			if (x > 475 && x < 545 && y > 400 && y < 425)
			{
				driver.set_main_menu(false);
				driver.set_help(true);
			}
		}
		if (driver.get_help() == true)
		{
			if (x > 460 && x < 530 && y > 640 && y < 660)
			{
				driver.set_help(false);
				driver.set_main_menu(true);
			}
		}
		if (driver.get_phelp() == true)
		{
			if (x > 460 && x < 530 && y > 640 && y < 660)
			{
				driver.set_phelp(false);
				driver.set_start_game(true);
			}
		}
		
	}

	else if (button == GLUT_RIGHT_BUTTON) // dealing with right button
	{
		
	}
	glutPostRedisplay();
}
/*
 * our gateway main function
 * */
int main(int argc, char*argv[]) {

	int width = 1020, height = 960; // i have set my window size to be 800 x 600

	InitRandomizer(); // seed the random number generator...
	glutInit(&argc, argv); // initialize the graphics library...
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA); // we will be using color display mode
	glutInitWindowPosition(50, 50); // set the initial position of our window
	glutInitWindowSize(width, height); // set the size of our window
	glutCreateWindow("OOP Project"); // set the title of our game window
	SetCanvasSize(width, height); // set the number of pixels...

	// Register your functions to the library,
	// you are telling the library names of function to call for different tasks.
	//glutDisplayFunc(display); // tell library which function to call for drawing Canvas.

	glutDisplayFunc(GameDisplay); // tell library which function to call for drawing Canvas.
	glutSpecialFunc(NonPrintableKeys); // tell library which function to call for non-printable ASCII characters
	glutKeyboardFunc(PrintableKeys); // tell library which function to call for printable ASCII characters
	// This function tells the library to call our Timer function after 1000.0/FPS milliseconds...
	glutTimerFunc(1000.0, Timer, 0);

	glutMouseFunc(MouseClicked);
	glutPassiveMotionFunc(MouseMoved); // Mouse
	glutMotionFunc(MousePressedAndMoved); // Mouse

	// now handle the control to library and it will call our registered functions when
	// it deems necessary...
	glutMainLoop();
	return 1;
}
#endif /* AsteroidS_CPP_ */

