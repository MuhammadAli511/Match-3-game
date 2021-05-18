#pragma once
#include "Grid.h"
#include "Menu.h"
class Engine : public Grid , public Menu
{
private:
	bool** click;
public:
	Engine();
	bool get_click(int,int);
	void set_click(int,int,bool);
};


