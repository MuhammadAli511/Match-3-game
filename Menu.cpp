#include "Menu.h"

bool Menu::name = true;
bool Menu::start_game = false;
bool Menu::main_menu = false;
bool Menu::help = false;
bool Menu::phelp = false;
bool Menu::i_state = false;

Menu::Menu()
{
	flname = new char [50];
}

void Menu::set_i(int i1)
{
	i = i1;
}

void Menu::set_flname(char fl, int in)
{
	flname[in] = fl;
}

char* Menu::get_flname()
{
	return flname;
}

int Menu::get_i()
{
	return i;
}

void Menu::set_name(bool n)
{
	name = n;
}

bool Menu::get_name()
{
	return name;
}

void Menu::set_i_state(bool is)
{
	i_state = is;
}

bool Menu::get_i_state()
{
	return i_state;
}

void Menu::set_start_game(bool g)
{
	start_game = g;
}

bool Menu::get_start_game()
{
	return start_game;
}

void Menu::set_help(bool h)
{
	help = h;
}

bool Menu::get_help()
{
	return help;
}

void Menu::set_phelp(bool ph)
{
	phelp = ph;
}

bool Menu::get_phelp()
{
	return phelp;
}

void Menu::set_main_menu(bool mm)
{
	main_menu = mm;
}

bool Menu::get_main_menu()
{
	return main_menu;
}

void Menu::draw_main_menu()
{
	glClearColor(0.6/*Red Component*/, 0.2,	//148.0/255/*Green Component*/,
			0.2/*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
	glClear (GL_COLOR_BUFFER_BIT); //Update the colors

	DrawString(405 , 780 , "TIME TRIAL MODE" , colors[BLACK]);
	DrawString(420 , 700 , "NORMAL MODE" , colors[BLACK]);
	DrawString(477 , 540 , "HELP" , colors[BLACK] );
	DrawString(430 , 620 , "HIGH SCORES" , colors[BLACK]);
	DrawString(478 , 460 , "EXIT" , colors[BLACK]);


	//M
	DrawLine(10,20,10,200,8,colors[BLUE]);
	DrawLine(6,200,194,200,8,colors[BLUE]);
	DrawLine(100,110,100,200,8,colors[BLUE]);
	DrawLine(190,20,190,200,8,colors[BLUE]);


	//A
	DrawLine(220+20,20,220+20,200,8,colors[BLUE]);
	DrawLine(220+16,200,310+24,200,8,colors[BLUE]);
	DrawLine(220+20,140,310+20,140,8,colors[BLUE]);
	DrawLine(310+20,20,310+20,200,8,colors[BLUE]);


	//T	
	DrawLine(330+30,200,420+30,200,8,colors[BLUE]);
	DrawLine(375+30,20,375+30,200,8,colors[BLUE]);


	//C
	DrawLine(490,20,490,200,8,colors[BLUE]);
	DrawLine(486,200,585,200,8,colors[BLUE]);
	DrawLine(486,20,585,20,8,colors[BLUE]);


	//H
	DrawLine(620,105,710,105,8,colors[BLUE]);
	DrawLine(620,20,620,200,8,colors[BLUE]);
	DrawLine(710,20,710,200,8,colors[BLUE]);


	// -
	DrawLine(770,105,830,105,5,colors[BLUE]);


	//3
	DrawLine(880,105,970,105,8,colors[BLUE]);
	DrawLine(875,200,974,200,8,colors[BLUE]);
	DrawLine(875,20,974,20,8,colors[BLUE]);
	DrawLine(970,20,970,200,8,colors[BLUE]);



}


void Menu::draw_name_menu()
{
	glClearColor(0.6/*Red Component*/, 0.2,	//148.0/255/*Green Component*/,
			0.2/*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
	glClear (GL_COLOR_BUFFER_BIT); //Update the colors

	DrawString(305 , 700 , "ENTER YOUR NAME ON TERMINAL" , colors[BLACK]);
	DrawString(445 , 580 , "CONTINUE" , colors[BLACK]);

	//M
	DrawLine(10,20,10,200,8,colors[BLUE]);
	DrawLine(6,200,194,200,8,colors[BLUE]);
	DrawLine(100,110,100,200,8,colors[BLUE]);
	DrawLine(190,20,190,200,8,colors[BLUE]);


	//A
	DrawLine(220+20,20,220+20,200,8,colors[BLUE]);
	DrawLine(220+16,200,310+24,200,8,colors[BLUE]);
	DrawLine(220+20,140,310+20,140,8,colors[BLUE]);
	DrawLine(310+20,20,310+20,200,8,colors[BLUE]);


	//T	
	DrawLine(330+30,200,420+30,200,8,colors[BLUE]);
	DrawLine(375+30,20,375+30,200,8,colors[BLUE]);


	//C
	DrawLine(490,20,490,200,8,colors[BLUE]);
	DrawLine(486,200,585,200,8,colors[BLUE]);
	DrawLine(486,20,585,20,8,colors[BLUE]);


	//H
	DrawLine(620,105,710,105,8,colors[BLUE]);
	DrawLine(620,20,620,200,8,colors[BLUE]);
	DrawLine(710,20,710,200,8,colors[BLUE]);


	// -
	DrawLine(770,105,830,105,5,colors[BLUE]);


	//3
	DrawLine(880,105,970,105,8,colors[BLUE]);
	DrawLine(875,200,974,200,8,colors[BLUE]);
	DrawLine(875,20,974,20,8,colors[BLUE]);
	DrawLine(970,20,970,200,8,colors[BLUE]);
}

void Menu::draw_help_menu()
{
		glClearColor(0.0/*Red Component*/, 0.0,	//148.0/255/*Green Component*/,
			0.0/*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
	glClear (GL_COLOR_BUFFER_BIT); //Update the colors

	DrawLine(60 , 50 , 60 , 910 , 10 , colors[RED]);
	DrawLine(960 , 50 , 960 , 910 , 10 , colors[RED]);
	DrawLine(55 , 50 , 965 , 50 , 10 , colors[RED]);
	DrawLine(55 , 910 , 965 , 910 , 10 , colors[RED]);
	DrawString(80, 870, "CONTROLS:", colors[BLUE]);
	DrawString(100, 800, "The following controls are used in game:", colors[BLUE]);
	DrawString(100, 770, "Press and hold on the first gem to swap and drag it to the second.", colors[BLUE]);
	DrawString(100, 740, "ESC: Pause the game .", colors[BLUE]);
	DrawLine(55 , 670 , 965 , 670 , 10 , colors[RED]);
	DrawString(80, 630 , "INSTRUCTIONS:", colors[BLUE]);
	DrawCircle(85 , 610 , 5 , colors[GOLD]);
	DrawString(100, 600 , "NORMAL MODE:  In normal mode specific number of moves will be given for each", colors[BLUE]);
	DrawString(100, 570 , "level and target score must be achieved which will proceed you to next level.", colors[BLUE]);
	DrawCircle(85 , 430 , 5 , colors[GOLD]);
	DrawString(100, 420 , "TIME TRIAL MODE:  In time trial mode unlimited moves will be given for each", colors[BLUE]);
	DrawString(100, 390 , "level and target score must be achieved within the time to proceed to next level.", colors[BLUE]);
	DrawString(460 , 300 , "BACK" , colors[RED]);
	DrawString(400, 200 , "G O O D   L U C K", colors[BLUE]);
}

void Menu::draw_phelp_menu()
{
		glClearColor(0.0/*Red Component*/, 0.0,	//148.0/255/*Green Component*/,
			0.0/*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
	glClear (GL_COLOR_BUFFER_BIT); //Update the colors

	DrawLine(60 , 50 , 60 , 910 , 10 , colors[RED]);
	DrawLine(960 , 50 , 960 , 910 , 10 , colors[RED]);
	DrawLine(55 , 50 , 965 , 50 , 10 , colors[RED]);
	DrawLine(55 , 910 , 965 , 910 , 10 , colors[RED]);
	DrawString(80, 870, "CONTROLS:", colors[BLUE]);
	DrawString(100, 800, "The following controls are used in game:", colors[BLUE]);
	DrawString(100, 770, "Press and hold on the first gem to swap and drag it to the second.", colors[BLUE]);
	DrawString(100, 740, "ESC: Pause the game .", colors[BLUE]);
	DrawLine(55 , 670 , 965 , 670 , 10 , colors[RED]);
	DrawString(80, 630 , "INSTRUCTIONS:", colors[BLUE]);
	DrawCircle(85 , 610 , 5 , colors[GOLD]);
	DrawString(100, 600 , "NORMAL MODE:  In normal mode specific number of moves will be given for each", colors[BLUE]);
	DrawString(100, 570 , "level and target score must be achieved which will proceed you to next level.", colors[BLUE]);
	DrawCircle(85 , 430 , 5 , colors[GOLD]);
	DrawString(100, 420 , "TIME TRIAL MODE:  In time trial mode unlimited moves will be given for each", colors[BLUE]);
	DrawString(100, 390 , "level and target score must be achieved within the time to proceed to next level.", colors[BLUE]);
	DrawString(460 , 300 , "BACK" , colors[RED]);
	DrawString(400, 200 , "G O O D   L U C K", colors[BLUE]);
}