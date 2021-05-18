#include "Engine.h"


Engine::Engine()
{
	click = new bool* [8];
	for (int i = 0 ; i < 8 ; i++)
	{
		click[i] = new bool [8];
	}
}


void Engine::set_click(int i , int j , bool c)
{
	click[i][j] = c ;
}

bool Engine::get_click(int i , int j )
{
	return click[i][j];
}