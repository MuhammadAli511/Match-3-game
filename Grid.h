#pragma once
#include "Diamond.h"
#include "util.h"
#include <cstdlib>
#include <time.h>
class Grid : public Diamond
{
private:
	static bool state;
	int score;
	Diamond** diamonds;
public:
	Grid();
	void drawgrid();
	void drawshapes();
	void set_ids();
	void set_state(bool);
	bool get_state();
	void set_score(int);
	int get_score();
	void check_match_id();
	bool check_match_id2();
	void swap(int,int,int,int);
};