#pragma once
#include "Axis.h"
#include "util.h"
class Diamond : public Axis
{
private:
	int id;
public:
	int get_id();
	void set_id(int);
};