#include "Grid.h"

bool Grid::state = false;

Grid::Grid()
{
	diamonds = new Diamond* [8];
	for (int i = 0 ; i < 8 ; i++)
	{
		diamonds[i] = new Diamond [8];
	}
}

void Grid::set_state(bool s)
{
	state = s;
}

bool Grid::get_state()
{
	return state;
}


void Grid::set_ids()
{
	srand(time(0));
	for (int i = 0 ; i < 8 ; i++)
	{
		for (int j = 0 ; j < 8 ; j++)
		{
			int ran = rand() % 5 + 1; 
			diamonds[i][j].set_id(ran);
		}
	}
}


void Grid::drawshapes()
{
	for (int i = 0 , yc = 682 ; i < 8 ; i++ , yc = yc - 85 )
	{
		for (int j = 0 , xc = 212 ; j < 8 ; j++ , xc = xc + 85 )
		{
			diamonds[i][j].set_x(xc);
			diamonds[i][j].set_y(yc);
			if (diamonds[i][j].get_id() == 1)
			{
				int x_d = diamonds[i][j].get_x();
				int y_d = diamonds[i][j].get_y();
				DrawTriangle( x_d + 26 , y_d - 26 , x_d - 26 , y_d - 26 , x_d , y_d + 26 , colors[DARK_ORANGE]);
			}
			else if (diamonds[i][j].get_id() == 2)
			{
				DrawSquare(diamonds[i][j].get_x() - 26 , diamonds[i][j].get_y() - 26 , 52 , colors[DARK_BLUE] );
			}
			else if (diamonds[i][j].get_id() == 3)
			{
				DrawCircle(diamonds[i][j].get_x(), diamonds[i][j].get_y() , 26 , colors[RED]);
			}
			else if (diamonds[i][j].get_id() == 4)
			{
				int x_d = diamonds[i][j].get_x();
				int y_d = diamonds[i][j].get_y();
				DrawTriangle( x_d + 26 , y_d , x_d - 26 , y_d , x_d , y_d + 26 , colors[GREEN]);
				DrawTriangle( x_d + 26 , y_d , x_d - 26 , y_d , x_d , y_d - 26 , colors[GREEN]);
			}
			else if (diamonds[i][j].get_id() == 5)
			{
				int x_d = diamonds[i][j].get_x();
				int y_d = diamonds[i][j].get_y();
				DrawTriangle( x_d + 26 , y_d + 16 , x_d - 26 , y_d + 16 , x_d , y_d + 26 , colors[VIOLET] );
				DrawTriangle( x_d + 26 , y_d - 16 , x_d - 26 , y_d - 16 , x_d , y_d - 26 , colors[VIOLET] );
				DrawRectangle( x_d - 26 , y_d - 16 , 52 , 33 , colors[VIOLET] );
			}
		}
	}
}

void Grid::drawgrid()
{
	//width in between grid 670
	//Starting from 175 to 845
	//Height in between grid is 670
	//Starting from 50 to 720
	//One box x = 75 , y = 75.

	DrawLine(165,50,165,720,20,colors[LIME_GREEN]);		//left vertical
	DrawLine(855,50,855,720,20,colors[LIME_GREEN]);		//right vertical
	DrawLine(155,730,865,730,20,colors[LIME_GREEN]);	//up horizontal
	DrawLine(155,40,865,40,20,colors[LIME_GREEN]);		//down horizontal

	for (int i = 255 ; i <= 770 ; i = i + 85)
	{
		DrawLine(i,50,i,720,10,colors[LIME_GREEN]);
	}
	for (int i = 130 ; i <= 645 ; i = i + 85)
	{
		DrawLine(175,i,845,i,10,colors[LIME_GREEN]);
	}
}











void Grid::swap(int i , int j , int k , int l)
{
	//Row 0 all downs
	for (int m = 0 ; m < 8 ; m++)
	{
		if (i == 0 && j == m && k == 1 && l == m)
		{
			Diamond temp;
			temp = diamonds[i][j];
			diamonds[i][j] = diamonds[k][l];
			diamonds[k][l] = temp;
			if (check_match_id2() == true)
			{
				sleep(1);
				check_match_id();
			}
			else
			{
				Diamond temp;
				temp = diamonds[i][j];
				diamonds[i][j] = diamonds[k][l];
				diamonds[k][l] = temp;
			}
		}
	}



	//Row 1 all downs
	for (int m = 0 ; m < 8 ; m++)
	{
		if (i == 1 && j == m && k == 2 && l == m)
		{
			Diamond temp;
			temp = diamonds[i][j];
			diamonds[i][j] = diamonds[k][l];
			diamonds[k][l] = temp;
			if (check_match_id2() == true)
			{
				sleep(1);
				check_match_id();
			}
			else
			{
				Diamond temp;
				temp = diamonds[i][j];
				diamonds[i][j] = diamonds[k][l];
				diamonds[k][l] = temp;
			}
		}
	}

	//Row 2 all downs
	for (int m = 0 ; m < 8 ; m++)
	{
		if (i == 2 && j == m && k == 3 && l == m)
		{
			Diamond temp;
			temp = diamonds[i][j];
			diamonds[i][j] = diamonds[k][l];
			diamonds[k][l] = temp;
			if (check_match_id2() == true)
			{
				sleep(1);
				check_match_id();
			}
			else
			{
				Diamond temp;
				temp = diamonds[i][j];
				diamonds[i][j] = diamonds[k][l];
				diamonds[k][l] = temp;
			}
		}
	}

	//Row 3 all downs
	for (int m = 0 ; m < 8 ; m++)
	{
		if (i == 3 && j == m && k == 4 && l == m)
		{
			Diamond temp;
			temp = diamonds[i][j];
			diamonds[i][j] = diamonds[k][l];
			diamonds[k][l] = temp;
			if (check_match_id2() == true)
			{
				sleep(1);
				check_match_id();
			}
			else
			{
				Diamond temp;
				temp = diamonds[i][j];
				diamonds[i][j] = diamonds[k][l];
				diamonds[k][l] = temp;
			}
		}
	}

	//Row 4 all downs
	for (int m = 0 ; m < 8 ; m++)
	{
		if (i == 4 && j == m && k == 5 && l == m)
		{
			Diamond temp;
			temp = diamonds[i][j];
			diamonds[i][j] = diamonds[k][l];
			diamonds[k][l] = temp;
			if (check_match_id2() == true)
			{
				sleep(1);
				check_match_id();
			}
			else
			{
				Diamond temp;
				temp = diamonds[i][j];
				diamonds[i][j] = diamonds[k][l];
				diamonds[k][l] = temp;
			}
		}
	}

	//Row 5 all downs
	for (int m = 0 ; m < 8 ; m++)
	{
		if (i == 5 && j == m && k == 6 && l == m)
		{
			Diamond temp;
			temp = diamonds[i][j];
			diamonds[i][j] = diamonds[k][l];
			diamonds[k][l] = temp;
			if (check_match_id2() == true)
			{
				sleep(1);
				check_match_id();
			}
			else
			{
				Diamond temp;
				temp = diamonds[i][j];
				diamonds[i][j] = diamonds[k][l];
				diamonds[k][l] = temp;
			}
		}
	}

	//Row 6 all downs
	for (int m = 0 ; m < 8 ; m++)
	{
		if (i == 6 && j == m && k == 7 && l == m)
		{
			Diamond temp;
			temp = diamonds[i][j];
			diamonds[i][j] = diamonds[k][l];
			diamonds[k][l] = temp;
			if (check_match_id2() == true)
			{
				sleep(1);
				check_match_id();
			}
			else
			{
				Diamond temp;
				temp = diamonds[i][j];
				diamonds[i][j] = diamonds[k][l];
				diamonds[k][l] = temp;
			}
		}
	}


	//Column 7 left
	for (int m = 0 ; m < 8 ; m++)
	{
		if (i == i && j == 7 && k == i && l == 7-1)
		{
			Diamond temp;
			temp = diamonds[i][j];
			diamonds[i][j] = diamonds[k][l];
			diamonds[k][l] = temp;
			if (check_match_id2() == true)
			{
				sleep(1);
				check_match_id();
			}
			else
			{
				Diamond temp;
				temp = diamonds[i][j];
				diamonds[i][j] = diamonds[k][l];
				diamonds[k][l] = temp;
			}
		}
	}




	//Column 6 left
	for (int m = 0 ; m < 8 ; m++)
	{
		if (i == i && j == 6 && k == i && l == 6-1)
		{
			Diamond temp;
			temp = diamonds[i][j];
			diamonds[i][j] = diamonds[k][l];
			diamonds[k][l] = temp;
			if (check_match_id2() == true)
			{
				sleep(1);
				check_match_id();
			}
			else
			{
				Diamond temp;
				temp = diamonds[i][j];
				diamonds[i][j] = diamonds[k][l];
				diamonds[k][l] = temp;
			}
		}
	}



	//Column 5 left
	for (int m = 0 ; m < 8 ; m++)
	{
		if (i == i && j == 5 && k == i && l == 5-1)
		{
			Diamond temp;
			temp = diamonds[i][j];
			diamonds[i][j] = diamonds[k][l];
			diamonds[k][l] = temp;
			if (check_match_id2() == true)
			{
				sleep(1);
				check_match_id();
			}
			else
			{
				Diamond temp;
				temp = diamonds[i][j];
				diamonds[i][j] = diamonds[k][l];
				diamonds[k][l] = temp;
			}
		}
	}



	//Column 4 left
	for (int m = 0 ; m < 8 ; m++)
	{
		if (i == i && j == 4 && k == i && l == 4-1)
		{
			Diamond temp;
			temp = diamonds[i][j];
			diamonds[i][j] = diamonds[k][l];
			diamonds[k][l] = temp;
			if (check_match_id2() == true)
			{
				sleep(1);
				check_match_id();
			}
			else
			{
				Diamond temp;
				temp = diamonds[i][j];
				diamonds[i][j] = diamonds[k][l];
				diamonds[k][l] = temp;
			}
		}
	}



	//Column 3 left
	for (int m = 0 ; m < 8 ; m++)
	{
		if (i == i && j == 3 && k == i && l == 3-1)
		{
			Diamond temp;
			temp = diamonds[i][j];
			diamonds[i][j] = diamonds[k][l];
			diamonds[k][l] = temp;
			if (check_match_id2() == true)
			{
				sleep(1);
				check_match_id();
			}
			else
			{
				Diamond temp;
				temp = diamonds[i][j];
				diamonds[i][j] = diamonds[k][l];
				diamonds[k][l] = temp;
			}
		}
	}


	//Column 2 left
	for (int m = 0 ; m < 8 ; m++)
	{
		if (i == i && j == 2 && k == i && l == 2-1)
		{
			Diamond temp;
			temp = diamonds[i][j];
			diamonds[i][j] = diamonds[k][l];
			diamonds[k][l] = temp;
			if (check_match_id2() == true)
			{
				sleep(1);
				check_match_id();
			}
			else
			{
				Diamond temp;
				temp = diamonds[i][j];
				diamonds[i][j] = diamonds[k][l];
				diamonds[k][l] = temp;
			}
		}
	}

	//Column 1 left
	for (int m = 0 ; m < 8 ; m++)
	{
		if (i == i && j == 1 && k == i && l == 1-1)
		{
			Diamond temp;
			temp = diamonds[i][j];
			diamonds[i][j] = diamonds[k][l];
			diamonds[k][l] = temp;
			if (check_match_id2() == true)
			{
				sleep(1);
				check_match_id();
			}
			else
			{
				Diamond temp;
				temp = diamonds[i][j];
				diamonds[i][j] = diamonds[k][l];
				diamonds[k][l] = temp;
			}
		}
	}

}




int Grid::get_score()
{
	return score;
}

void Grid::set_score(int sc1)
{
	score = sc1;
}



void Grid::check_match_id()
{
	//TOTAL = 224
	//Done = 168 
	srand(time(0));

	/****************************************************************LOOOOOOPS************************************************************/
	//Row 1 all ups
	for (int t = 0 ; t < 8 ; t++)
	{//DONE
		if (diamonds[1][t].get_id() == diamonds[0][t].get_id() && diamonds[1][t].get_id() == diamonds[2][t].get_id())
		{
			if (diamonds[1][t].get_id() == diamonds[3][t].get_id())
			{
				for (int i = 0 ; i < 4 ; i++)
				{
					int ran = rand() % 5 + 1;
					diamonds[i][t].set_id(ran);
				}
				score = score + 10;
			}
			else
			{
				for (int i = 0 ; i < 3 ; i++)
				{
					int ran = rand() % 5 + 1;
					diamonds[i][t].set_id(ran);
				}
				score = score + 5;
			}
		}
	}

	//Row 2 all ups
	for (int t = 0 ; t < 8 ; t++)
	{//DONE
		if (diamonds[2][t].get_id() == diamonds[0][t].get_id() && diamonds[2][t].get_id() == diamonds[1][t].get_id())
		{
			if (diamonds[2][t].get_id() == diamonds[3][t].get_id())
			{
				for (int i = 0 ; i < 4 ; i++)
				{
					int ran = rand() % 5 + 1;
					diamonds[i][t].set_id(ran);
				}
				score = score + 10;
			}
			else
			{
				for (int i = 0 ; i < 3 ; i++)
				{
					int ran = rand() % 5 + 1;
					diamonds[i][t].set_id(ran);
				}
				score = score + 5;
			}
		}
	}

	//Row 3 all ups
	for (int t = 0 ; t < 8 ; t++)
	{//DONE
		if (diamonds[3][t].get_id() == diamonds[1][t].get_id() && diamonds[3][t].get_id() == diamonds[2][t].get_id())
		{
			if (diamonds[3][t].get_id() == diamonds[0][t].get_id())
			{
				for (int i = 0 ; i < 4 ; i++)
				{
					int ran = rand() % 5 + 1;
					diamonds[i][t].set_id(ran);
				}
				score = score + 10;
			}
			else
			{
				for (int i = 1 ; i < 4 ; i++)
				{
					int ran = rand() % 5 + 1;
					diamonds[i][t].set_id(ran);
				}
				score = score + 5;
			}
		}
	}


	//Row 4 all ups
	for (int t = 0 ; t < 8 ; t++)
	{//DONE
		if (diamonds[4][t].get_id() == diamonds[3][t].get_id() && diamonds[4][t].get_id() == diamonds[2][t].get_id())
		{
			if (diamonds[4][t].get_id() == diamonds[1][t].get_id())
			{
				for (int i = 1 ; i < 5 ; i++)
				{
					int ran = rand() % 5 + 1;
					diamonds[i][t].set_id(ran);
				}
				score = score + 10;
			}
			else
			{
				for (int i = 2 ; i < 5 ; i++)
				{
					int ran = rand() % 5 + 1;
					diamonds[i][t].set_id(ran);
				}
				score = score + 5;
			}
		}
	}

	//Row 5 all ups
	for (int t = 0 ; t < 8 ; t++)
	{//DONE
		if (diamonds[5][t].get_id() == diamonds[4][t].get_id() && diamonds[5][t].get_id() == diamonds[3][t].get_id())
		{
			if (diamonds[5][t].get_id() == diamonds[2][t].get_id())
			{
				for (int i = 2 ; i < 6 ; i++)
				{
					int ran = rand() % 5 + 1;
					diamonds[i][t].set_id(ran);
				}
				score = score + 10;
			}
			else
			{
				for (int i = 3 ; i < 6 ; i++)
				{
					int ran = rand() % 5 + 1;
					diamonds[i][t].set_id(ran);
				}
				score = score + 5;
			}
		}
	}

	//Row 6 all ups
	for (int t = 0 ; t < 8 ; t++)
	{//DONE
		if (diamonds[6][t].get_id() == diamonds[5][t].get_id() && diamonds[6][t].get_id() == diamonds[4][t].get_id())
		{
			if (diamonds[6][t].get_id() == diamonds[3][t].get_id())
			{
				for (int i = 3 ; i < 7 ; i++)
				{
					int ran = rand() % 5 + 1;
					diamonds[i][t].set_id(ran);
				}
				score = score + 10;
			}
			else
			{
				for (int i = 4 ; i < 7 ; i++)
				{
					int ran = rand() % 5 + 1;
					diamonds[i][t].set_id(ran);
				}
				score = score + 5;
			}
		}
	}


	//Row 7 all ups
	for (int t = 0 ; t < 8 ; t++)
	{//DONE
		if (diamonds[7][t].get_id() == diamonds[6][t].get_id() && diamonds[7][t].get_id() == diamonds[5][t].get_id())
		{
			if (diamonds[7][t].get_id() == diamonds[4][t].get_id())
			{
				for (int i = 4 ; i < 8 ; i++)
				{
					int ran = rand() % 5 + 1;
					diamonds[i][t].set_id(ran);
				}
				score = score + 10;
			}
			else
			{
				for (int i = 5 ; i < 8 ; i++)
				{
					int ran = rand() % 5 + 1;
					diamonds[i][t].set_id(ran);
				}
				score = score + 5;
			}
		}
	}




	//Column 0 all Rights
	for (int t = 0 ; t < 8 ; t++)
	{//DONE
		if (diamonds[t][0].get_id() == diamonds[t][1].get_id() && diamonds[t][0].get_id() == diamonds[t][2].get_id())
		{
			if (diamonds[t][0].get_id() == diamonds[t][3].get_id())
			{
				for (int i = 0 ; i < 4 ; i++)
				{
					int ran = rand() % 5 + 1;
					diamonds[t][i].set_id(ran);
				}
				score = score + 10;
			}
			else
			{
				for (int i = 0 ; i < 3 ; i++)
				{
					int ran = rand() % 5 + 1;
					diamonds[t][i].set_id(ran);
				}
				score = score + 5;
			}
		}
	}

	//Column 1 all rights
	for (int t = 0 ; t < 8 ; t++)
	{//DONE
		if (diamonds[t][1].get_id() == diamonds[t][2].get_id() && diamonds[t][1].get_id() == diamonds[t][3].get_id())
		{
			if (diamonds[t][1].get_id() == diamonds[t][4].get_id())
			{
				for (int i = 1 ; i < 5 ; i++)
				{
					int ran = rand() % 5 + 1;
					diamonds[t][i].set_id(ran);
				}
				score = score + 10;
			}
			else
			{
				for (int i = 1 ; i < 4 ; i++)
				{
					int ran = rand() % 5 + 1;
					diamonds[t][i].set_id(ran);
				}
				score = score + 5;
			}
		}
	}

	//Column 2 all rights
	for (int t = 0 ; t < 8 ; t++)
	{//DONE
		if (diamonds[t][2].get_id() == diamonds[t][3].get_id() && diamonds[t][2].get_id() == diamonds[t][4].get_id())
		{
			if (diamonds[t][2].get_id() == diamonds[t][5].get_id())
			{
				for (int i = 2 ; i < 6 ; i++)
				{
					int ran = rand() % 5 + 1;
					diamonds[t][i].set_id(ran);
				}
				score = score + 10;
			}
			else
			{
				for (int i = 2 ; i < 5 ; i++)
				{
					int ran = rand() % 5 + 1;
					diamonds[t][i].set_id(ran);
				}
				score = score + 5;
			}
		}
	}

	//Column 3 all rights
	for (int t = 0 ; t < 8 ; t++)
	{//DONE
		if (diamonds[t][3].get_id() == diamonds[t][4].get_id() && diamonds[t][3].get_id() == diamonds[t][5].get_id())
		{
			if (diamonds[t][3].get_id() == diamonds[t][6].get_id())
			{
				for (int i = 3 ; i < 7 ; i++)
				{
					int ran = rand() % 5 + 1;
					diamonds[t][i].set_id(ran);
				}
				score = score + 10;
			}
			else
			{
				for (int i = 3 ; i < 6 ; i++)
				{
					int ran = rand() % 5 + 1;
					diamonds[t][i].set_id(ran);
				}
				score = score + 5;
			}
		}
	}

	//Column 4 all rights
	for (int t = 0 ; t < 8 ; t++)
	{//DONE
		if (diamonds[t][4].get_id() == diamonds[t][5].get_id() && diamonds[t][4].get_id() == diamonds[t][6].get_id())
		{
			if (diamonds[t][4].get_id() == diamonds[t][7].get_id())
			{
				for (int i = 4 ; i < 8 ; i++)
				{
					int ran = rand() % 5 + 1;
					diamonds[t][i].set_id(ran);
				}
				score = score + 10;
			}
			else
			{
				for (int i = 4 ; i < 7 ; i++)
				{
					int ran = rand() % 5 + 1;
					diamonds[t][i].set_id(ran);
				}
				score = score + 5;
			}
		}
	}

	//Column 5 all rights
	for (int t = 0 ; t < 8 ; t++)
	{//DONE
		if (diamonds[t][5].get_id() == diamonds[t][6].get_id() && diamonds[t][5].get_id() == diamonds[t][7].get_id())
		{
			if (diamonds[t][5].get_id() == diamonds[t][4].get_id())
			{
				for (int i = 4 ; i < 8 ; i++)
				{
					int ran = rand() % 5 + 1;
					diamonds[t][i].set_id(ran);
				}
				score = score + 10;
			}
			else
			{
				for (int i = 5 ; i < 8 ; i++)
				{
					int ran = rand() % 5 + 1;
					diamonds[t][i].set_id(ran);
				}
				score = score + 5;
			}
		}
	}


	//Column 6 all rights
	for (int t = 0 ; t < 8 ; t++)
	{//DONE
		if (diamonds[t][6].get_id() == diamonds[t][7].get_id() && diamonds[t][6].get_id() == diamonds[t][5].get_id())
		{
			if (diamonds[t][6].get_id() == diamonds[t][4].get_id())
			{
				for (int i = 4 ; i < 8 ; i++)
				{
					int ran = rand() % 5 + 1;
					diamonds[t][i].set_id(ran);
				}
				score = score + 10;
			}
			else
			{
				for (int i = 5 ; i < 8 ; i++)
				{
					int ran = rand() % 5 + 1;
					diamonds[t][i].set_id(ran);
				}
				score = score + 5;
			}
		}
	}

	//Column 7 all Lefts
	for (int t = 0 ; t < 8 ; t++)
	{//DONE
		if (diamonds[t][7].get_id() == diamonds[t][6].get_id() && diamonds[t][7].get_id() == diamonds[t][5].get_id())
		{
			if (diamonds[t][7].get_id() == diamonds[t][4].get_id())
			{
				for (int i = 7 ; i > 3 ; i--)
				{
					int ran = rand() % 5 + 1;
					diamonds[t][i].set_id(ran);
				}
				score = score + 10;
			}
			else
			{
				for (int i = 7 ; i > 4 ; i--)
				{
					int ran = rand() % 5 + 1;
					diamonds[t][i].set_id(ran);
				}
				score = score + 5;
			}
		}
	}

	//Column 6 all Lefts
	for (int t = 0 ; t < 8 ; t++)
	{//DONE
		if (diamonds[t][6].get_id() == diamonds[t][5].get_id() && diamonds[t][6].get_id() == diamonds[t][4].get_id())
		{
			if (diamonds[t][6].get_id() == diamonds[t][3].get_id())
			{
				for (int i = 6 ; i > 2 ; i--)
				{
					int ran = rand() % 5 + 1;
					diamonds[t][i].set_id(ran);
				}
				score = score + 10;
			}
			else
			{
				for (int i = 6 ; i > 3 ; i--)
				{
					int ran = rand() % 5 + 1;
					diamonds[t][i].set_id(ran);
				}
				score = score + 5;
			}
		}
	}

	//Column 5 all Lefts
	for (int t = 0 ; t < 8 ; t++)
	{//DONE
		if (diamonds[t][5].get_id() == diamonds[t][4].get_id() && diamonds[t][5].get_id() == diamonds[t][3].get_id())
		{
			if (diamonds[t][5].get_id() == diamonds[t][2].get_id())
			{
				for (int i = 5 ; i > 1 ; i--)
				{
					int ran = rand() % 5 + 1;
					diamonds[t][i].set_id(ran);
				}
				score = score + 10;
			}
			else
			{
				for (int i = 5 ; i > 2 ; i--)
				{
					int ran = rand() % 5 + 1;
					diamonds[t][i].set_id(ran);
				}
				score = score + 5;
			}
		}
	}

	//Column 4 all Lefts
	for (int t = 0 ; t < 8 ; t++)
	{//DONE
		if (diamonds[t][4].get_id() == diamonds[t][3].get_id() && diamonds[t][4].get_id() == diamonds[t][2].get_id())
		{
			if (diamonds[t][4].get_id() == diamonds[t][1].get_id())
			{
				for (int i = 4 ; i > 0 ; i--)
				{
					int ran = rand() % 5 + 1;
					diamonds[t][i].set_id(ran);
				}
				score = score + 10;
			}
			else
			{
				for (int i = 4 ; i > 1 ; i--)
				{
					int ran = rand() % 5 + 1;
					diamonds[t][i].set_id(ran);
				}
				score = score + 5;
			}
		}
	}

	//Column 3 all Lefts
	for (int t = 0 ; t < 8 ; t++)
	{//DONE
		if (diamonds[t][3].get_id() == diamonds[t][2].get_id() && diamonds[t][3].get_id() == diamonds[t][1].get_id())
		{
			if (diamonds[t][3].get_id() == diamonds[t][0].get_id())
			{
				for (int i = 0 ; i < 4 ; i++)
				{
					int ran = rand() % 5 + 1;
					diamonds[t][i].set_id(ran);
				}
				score = score + 10;
			}
			else
			{
				for (int i = 1 ; i < 4 ; i++)
				{
					int ran = rand() % 5 + 1;
					diamonds[t][i].set_id(ran);
				}
				score = score + 5;
			}
		}
	}


	//Column 2 all Lefts
	for (int t = 0 ; t < 8 ; t++)
	{//DONE
		if (diamonds[t][2].get_id() == diamonds[t][1].get_id() && diamonds[t][2].get_id() == diamonds[t][0].get_id())
		{
			if (diamonds[t][2].get_id() == diamonds[t][3].get_id())
			{
				for (int i = 0 ; i < 4 ; i++)
				{
					int ran = rand() % 5 + 1;
					diamonds[t][i].set_id(ran);
				}
				score = score + 10;
			}
			else
			{
				for (int i = 0 ; i < 3 ; i++)
				{
					int ran = rand() % 5 + 1;
					diamonds[t][i].set_id(ran);
				}
				score = score + 5;
			}
		}
	}

	//Column 1 all Lefts
	for (int t = 0 ; t < 8 ; t++)
	{//DONE
		if (diamonds[t][1].get_id() == diamonds[t][0].get_id() && diamonds[t][1].get_id() == diamonds[t][2].get_id())
		{
			if (diamonds[t][1].get_id() == diamonds[t][3].get_id())
			{
				for (int i = 4 ; i > 0 ; i--)
				{
					int ran = rand() % 5 + 1;
					diamonds[t][i].set_id(ran);
				}
				score = score + 10;
			}
			else
			{
				for (int i = 4 ; i > 1 ; i--)
				{
					int ran = rand() % 5 + 1;
					diamonds[t][i].set_id(ran);
				}
				score = score + 5;
			}
		}
	}



	// Row 0 all downs
	for (int t = 0 ; t < 8 ; t++)
	{//DONE
		if (diamonds[0][t].get_id() == diamonds[1][t].get_id() && diamonds[0][t].get_id() == diamonds[2][t].get_id())
		{
			if (diamonds[0][t].get_id() == diamonds[3][t].get_id())
			{
				for (int i = 0 ; i < 4 ; i++)
				{
					int ran = rand() % 5 + 1;
					diamonds[i][t].set_id(ran);
				}
				score = score + 10;
			}
			else
			{
				for (int i = 0 ; i < 3 ; i++)
				{
					int ran = rand() % 5 + 1;
					diamonds[i][t].set_id(ran);
				}
				score = score + 5;
			}
		}
	}


	//Row 1 all downs
	for (int t = 0 ; t < 8 ; t++)
	{//DONE
		if (diamonds[1][t].get_id() == diamonds[2][t].get_id() && diamonds[1][t].get_id() == diamonds[3][t].get_id())
		{
			if (diamonds[1][t].get_id() == diamonds[4][t].get_id())
			{
				for (int i = 1 ; i < 5 ; i++)
				{
					int ran = rand() % 5 + 1;
					diamonds[i][t].set_id(ran);
				}
				score = score + 10;
			}
			else
			{
				for (int i = 1 ; i < 4 ; i++)
				{
					int ran = rand() % 5 + 1;
					diamonds[i][t].set_id(ran);
				}
				score = score + 5;
			}
		}
	}

	//Row 2 all downs
	for (int t = 0 ; t < 8 ; t++)
	{//DONE
		if (diamonds[2][t].get_id() == diamonds[3][t].get_id() && diamonds[2][t].get_id() == diamonds[4][t].get_id())
		{
			if (diamonds[2][t].get_id() == diamonds[5][t].get_id())
			{
				for (int i = 2 ; i < 6 ; i++)
				{
					int ran = rand() % 5 + 1;
					diamonds[i][t].set_id(ran);
				}
				score = score + 10;
			}
			else
			{
				for (int i = 2 ; i < 5 ; i++)
				{
					int ran = rand() % 5 + 1;
					diamonds[i][t].set_id(ran);
				}
				score = score + 5;
			}
		}
	}

	//Row 3 all downs
	for (int t = 0 ; t < 8 ; t++)
	{//DONE
		if (diamonds[3][t].get_id() == diamonds[4][t].get_id() && diamonds[3][t].get_id() == diamonds[5][t].get_id())
		{
			if (diamonds[3][t].get_id() == diamonds[6][t].get_id())
			{
				for (int i = 3 ; i < 7 ; i++)
				{
					int ran = rand() % 5 + 1;
					diamonds[i][t].set_id(ran);
				}
				score = score + 10;
			}
			else
			{
				for (int i = 3 ; i < 6 ; i++)
				{
					int ran = rand() % 5 + 1;
					diamonds[i][t].set_id(ran);
				}
				score = score + 5;
			}
		}
	}

	//Row 4 all downs
	for (int t = 0 ; t < 8 ; t++)
	{//DONE
		if (diamonds[4][t].get_id() == diamonds[5][t].get_id() && diamonds[4][t].get_id() == diamonds[6][t].get_id())
		{
			if (diamonds[4][t].get_id() == diamonds[7][t].get_id())
			{
				for (int i = 4 ; i < 8 ; i++)
				{
					int ran = rand() % 5 + 1;
					diamonds[i][t].set_id(ran);
				}
				score = score + 10;
			}
			else
			{
				for (int i = 4 ; i < 7 ; i++)
				{
					int ran = rand() % 5 + 1;
					diamonds[i][t].set_id(ran);
				}
				score = score + 5;
			}
		}
	}



	//Row 5 all downs
	for (int t = 0 ; t < 8 ; t++)
	{//DONE
		if (diamonds[5][t].get_id() == diamonds[6][t].get_id() && diamonds[5][t].get_id() == diamonds[7][t].get_id())
		{
			if (diamonds[5][t].get_id() == diamonds[4][t].get_id())
			{
				for (int i = 4 ; i < 8 ; i++)
				{
					int ran = rand() % 5 + 1;
					diamonds[i][t].set_id(ran);
				}
				score = score + 10;
			}
			else
			{
				for (int i = 5 ; i < 8 ; i++)
				{
					int ran = rand() % 5 + 1;
					diamonds[i][t].set_id(ran);
				}
				score = score + 5;
			}
		}
	}

	//Row 6 all downs
	for (int t = 0 ; t < 8 ; t++)
	{//DONE
		if (diamonds[6][t].get_id() == diamonds[7][t].get_id() && diamonds[6][t].get_id() == diamonds[5][t].get_id())
		{
			if (diamonds[6][t].get_id() == diamonds[4][t].get_id())
			{
				for (int i = 4 ; i < 8 ; i++)
				{
					int ran = rand() % 5 + 1;
					diamonds[i][t].set_id(ran);
				}
				score = score + 10;
			}
			else
			{
				for (int i = 5 ; i < 8 ; i++)
				{
					int ran = rand() % 5 + 1;
					diamonds[i][t].set_id(ran);
				}
				score = score + 5;
			}
		}
	}

}































bool Grid::check_match_id2()
{

	/****************************************************************LOOOOOOPS************************************************************/
	//Row 1 all ups
	for (int t = 0 ; t < 8 ; t++)
	{//DONE
		if (diamonds[1][t].get_id() == diamonds[0][t].get_id() && diamonds[1][t].get_id() == diamonds[2][t].get_id())
		{
			if (diamonds[1][t].get_id() == diamonds[3][t].get_id())
			{
				return true;
			}
			else
			{
				return true;
			}
		}
	}

	//Row 2 all ups
	for (int t = 0 ; t < 8 ; t++)
	{//DONE
		if (diamonds[2][t].get_id() == diamonds[0][t].get_id() && diamonds[2][t].get_id() == diamonds[1][t].get_id())
		{
			if (diamonds[2][t].get_id() == diamonds[3][t].get_id())
			{
				return true;
			}
			else
			{
				return true;
			}
		}
	}

	//Row 3 all ups
	for (int t = 0 ; t < 8 ; t++)
	{//DONE
		if (diamonds[3][t].get_id() == diamonds[1][t].get_id() && diamonds[3][t].get_id() == diamonds[2][t].get_id())
		{
			if (diamonds[3][t].get_id() == diamonds[0][t].get_id())
			{
				return true;
			}
			else
			{
				return true;
			}
		}
	}


	//Row 4 all ups
	for (int t = 0 ; t < 8 ; t++)
	{//DONE
		if (diamonds[4][t].get_id() == diamonds[3][t].get_id() && diamonds[4][t].get_id() == diamonds[2][t].get_id())
		{
			if (diamonds[4][t].get_id() == diamonds[1][t].get_id())
			{
				return true;
			}
			else
			{
				return true;
			}
		}
	}

	//Row 5 all ups
	for (int t = 0 ; t < 8 ; t++)
	{//DONE
		if (diamonds[5][t].get_id() == diamonds[4][t].get_id() && diamonds[5][t].get_id() == diamonds[3][t].get_id())
		{
			if (diamonds[5][t].get_id() == diamonds[2][t].get_id())
			{
				return true;
			}
			else
			{
				return true;
			}
		}
	}

	//Row 6 all ups
	for (int t = 0 ; t < 8 ; t++)
	{//DONE
		if (diamonds[6][t].get_id() == diamonds[5][t].get_id() && diamonds[6][t].get_id() == diamonds[4][t].get_id())
		{
			if (diamonds[6][t].get_id() == diamonds[3][t].get_id())
			{
				return true;
			}
			else
			{
				return true;
			}
		}
	}


	//Row 7 all ups
	for (int t = 0 ; t < 8 ; t++)
	{//DONE
		if (diamonds[7][t].get_id() == diamonds[6][t].get_id() && diamonds[7][t].get_id() == diamonds[5][t].get_id())
		{
			if (diamonds[7][t].get_id() == diamonds[4][t].get_id())
			{
				return true;
			}
			else
			{
				return true;
			}
		}
	}




	//Column 0 all Rights
	for (int t = 0 ; t < 8 ; t++)
	{//DONE
		if (diamonds[t][0].get_id() == diamonds[t][1].get_id() && diamonds[t][0].get_id() == diamonds[t][2].get_id())
		{
			if (diamonds[t][0].get_id() == diamonds[t][3].get_id())
			{
				return true;
			}
			else
			{
				return true;
			}
		}
	}

	//Column 1 all rights
	for (int t = 0 ; t < 8 ; t++)
	{//DONE
		if (diamonds[t][1].get_id() == diamonds[t][2].get_id() && diamonds[t][1].get_id() == diamonds[t][3].get_id())
		{
			if (diamonds[t][1].get_id() == diamonds[t][4].get_id())
			{
				return true;
			}
			else
			{
				return true;
			}
		}
	}

	//Column 2 all rights
	for (int t = 0 ; t < 8 ; t++)
	{//DONE
		if (diamonds[t][2].get_id() == diamonds[t][3].get_id() && diamonds[t][2].get_id() == diamonds[t][4].get_id())
		{
			if (diamonds[t][2].get_id() == diamonds[t][5].get_id())
			{
				return true;
			}
			else
			{
				return true;
			}
		}
	}

	//Column 3 all rights
	for (int t = 0 ; t < 8 ; t++)
	{//DONE
		if (diamonds[t][3].get_id() == diamonds[t][4].get_id() && diamonds[t][3].get_id() == diamonds[t][5].get_id())
		{
			if (diamonds[t][3].get_id() == diamonds[t][6].get_id())
			{
				return true;
			}
			else
			{
				return true;
			}
		}
	}

	//Column 4 all rights
	for (int t = 0 ; t < 8 ; t++)
	{//DONE
		if (diamonds[t][4].get_id() == diamonds[t][5].get_id() && diamonds[t][4].get_id() == diamonds[t][6].get_id())
		{
			if (diamonds[t][4].get_id() == diamonds[t][7].get_id())
			{
				return true;
			}
			else
			{
				return true;
			}
		}
	}

	//Column 5 all rights
	for (int t = 0 ; t < 8 ; t++)
	{//DONE
		if (diamonds[t][5].get_id() == diamonds[t][6].get_id() && diamonds[t][5].get_id() == diamonds[t][7].get_id())
		{
			if (diamonds[t][5].get_id() == diamonds[t][4].get_id())
			{
				return true;
			}
			else
			{
				return true;
			}
		}
	}


	//Column 6 all rights
	for (int t = 0 ; t < 8 ; t++)
	{//DONE
		if (diamonds[t][6].get_id() == diamonds[t][7].get_id() && diamonds[t][6].get_id() == diamonds[t][5].get_id())
		{
			if (diamonds[t][6].get_id() == diamonds[t][4].get_id())
			{
				return true;
			}
			else
			{
				return true;
			}
		}
	}

	//Column 7 all Lefts
	for (int t = 0 ; t < 8 ; t++)
	{//DONE
		if (diamonds[t][7].get_id() == diamonds[t][6].get_id() && diamonds[t][7].get_id() == diamonds[t][5].get_id())
		{
			if (diamonds[t][7].get_id() == diamonds[t][4].get_id())
			{
				return true;
			}
			else
			{
				return true;
			}
		}
	}

	//Column 6 all Lefts
	for (int t = 0 ; t < 8 ; t++)
	{//DONE
		if (diamonds[t][6].get_id() == diamonds[t][5].get_id() && diamonds[t][6].get_id() == diamonds[t][4].get_id())
		{
			if (diamonds[t][6].get_id() == diamonds[t][3].get_id())
			{
				return true;
			}
			else
			{
				return true;
			}
		}
	}

	//Column 5 all Lefts
	for (int t = 0 ; t < 8 ; t++)
	{//DONE
		if (diamonds[t][5].get_id() == diamonds[t][4].get_id() && diamonds[t][5].get_id() == diamonds[t][3].get_id())
		{
			if (diamonds[t][5].get_id() == diamonds[t][2].get_id())
			{
				return true;
			}
			else
			{
				return true;
			}
		}
	}

	//Column 4 all Lefts
	for (int t = 0 ; t < 8 ; t++)
	{//DONE
		if (diamonds[t][4].get_id() == diamonds[t][3].get_id() && diamonds[t][4].get_id() == diamonds[t][2].get_id())
		{
			if (diamonds[t][4].get_id() == diamonds[t][1].get_id())
			{
				return true;
			}
			else
			{
				return true;
			}
		}
	}

	//Column 3 all Lefts
	for (int t = 0 ; t < 8 ; t++)
	{//DONE
		if (diamonds[t][3].get_id() == diamonds[t][2].get_id() && diamonds[t][3].get_id() == diamonds[t][1].get_id())
		{
			if (diamonds[t][3].get_id() == diamonds[t][0].get_id())
			{
				return true;
			}
			else
			{
				return true;
			}
		}
	}


	//Column 2 all Lefts
	for (int t = 0 ; t < 8 ; t++)
	{//DONE
		if (diamonds[t][2].get_id() == diamonds[t][1].get_id() && diamonds[t][2].get_id() == diamonds[t][0].get_id())
		{
			if (diamonds[t][2].get_id() == diamonds[t][3].get_id())
			{
				return true;
			}
			else
			{
				return true;
			}
		}
	}

	//Column 1 all Lefts
	for (int t = 0 ; t < 8 ; t++)
	{//DONE
		if (diamonds[t][1].get_id() == diamonds[t][0].get_id() && diamonds[t][1].get_id() == diamonds[t][2].get_id())
		{
			if (diamonds[t][1].get_id() == diamonds[t][3].get_id())
			{
				return true;
			}
			else
			{
				return true;
			}
		}
	}



	// Row 0 all downs
	for (int t = 0 ; t < 8 ; t++)
	{//DONE
		if (diamonds[0][t].get_id() == diamonds[1][t].get_id() && diamonds[0][t].get_id() == diamonds[2][t].get_id())
		{
			if (diamonds[0][t].get_id() == diamonds[3][t].get_id())
			{
				return true;
			}
			else
			{
				return true;
			}
		}
	}


	//Row 1 all downs
	for (int t = 0 ; t < 8 ; t++)
	{//DONE
		if (diamonds[1][t].get_id() == diamonds[2][t].get_id() && diamonds[1][t].get_id() == diamonds[3][t].get_id())
		{
			if (diamonds[1][t].get_id() == diamonds[4][t].get_id())
			{
				return true;
			}
			else
			{
				return true;
			}
		}
	}

	//Row 2 all downs
	for (int t = 0 ; t < 8 ; t++)
	{//DONE
		if (diamonds[2][t].get_id() == diamonds[3][t].get_id() && diamonds[2][t].get_id() == diamonds[4][t].get_id())
		{
			if (diamonds[2][t].get_id() == diamonds[5][t].get_id())
			{
				return true;
			}
			else
			{
				return true;
			}
		}
	}

	//Row 3 all downs
	for (int t = 0 ; t < 8 ; t++)
	{//DONE
		if (diamonds[3][t].get_id() == diamonds[4][t].get_id() && diamonds[3][t].get_id() == diamonds[5][t].get_id())
		{
			if (diamonds[3][t].get_id() == diamonds[6][t].get_id())
			{
				return true;
			}
			else
			{
				return true;
			}
		}
	}

	//Row 4 all downs
	for (int t = 0 ; t < 8 ; t++)
	{//DONE
		if (diamonds[4][t].get_id() == diamonds[5][t].get_id() && diamonds[4][t].get_id() == diamonds[6][t].get_id())
		{
			if (diamonds[4][t].get_id() == diamonds[7][t].get_id())
			{
				return true;
			}
			else
			{
				return true;
			}
		}
	}



	//Row 5 all downs
	for (int t = 0 ; t < 8 ; t++)
	{//DONE
		if (diamonds[5][t].get_id() == diamonds[6][t].get_id() && diamonds[5][t].get_id() == diamonds[7][t].get_id())
		{
			if (diamonds[5][t].get_id() == diamonds[4][t].get_id())
			{
				return true;
			}
			else
			{
				return true;
			}
		}
	}

	//Row 6 all downs
	for (int t = 0 ; t < 8 ; t++)
	{//DONE
		if (diamonds[6][t].get_id() == diamonds[7][t].get_id() && diamonds[6][t].get_id() == diamonds[5][t].get_id())
		{
			if (diamonds[6][t].get_id() == diamonds[4][t].get_id())
			{
				return true;
			}
			else
			{
				return true;
			}
		}
	}
	return false;
}