#include "Dart.h"

using namespace std;

class MonteCarloPiSim
{
public: 
	double estimatePi(int numThrows)
	{
		int numInCircle = 0;
		Dart dart;
			for (int j = 0; j < numThrows; j++)
			{
				dart.throwD();
				if (dart.isInCircle())
					numInCircle++;
			}
		double approx = 4 * ((double)numInCircle / (double)numThrows);
		return approx;
	}
};