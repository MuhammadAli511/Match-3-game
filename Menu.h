#pragma once
#include "util.h"
class Menu
{
private:
	char* flname;
	int i;
	static bool name;
	static bool start_game;
	static bool help;
	static bool phelp;
	static bool main_menu;
	static bool i_state;
	
public:
	Menu();
	void set_i(int);
	int get_i();
	bool get_i_state();
	void set_i_state(bool);
	void set_flname(char , int);
	char* get_flname();
	void set_name(bool);
	bool get_name();
	void set_start_game(bool);
	bool get_start_game();
	void set_help(bool);
	bool get_help();
	void set_phelp(bool);
	bool get_phelp();
	void set_main_menu(bool);
	bool get_main_menu();
	void draw_name_menu();
	void draw_help_menu();
	void draw_phelp_menu();
	void draw_main_menu();
};


