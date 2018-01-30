#pragma once
#include <stdlib.h>
#include <vector>
#include "RandGen.h"

using namespace std;

class Dart
{
public:
	void throwD()
	{
		x = randGen.getDouble(-1, 1);
		y = randGen.getDouble(-1, 1);
	}
	bool isInCircle()
	{
		if (x * x + y * y <= 1.0)
			return true;
		else
			return false;
	}	
private:
	double x,y;
	RandGen randGen;
};



