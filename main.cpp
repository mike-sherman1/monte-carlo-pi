#include <iostream>
#include "MonteCarloPiSim.h"


using namespace std;

int main()
{
	MonteCarloPiSim piSim;
	cout << "After 100 darts the approximation of PI is " << piSim.estimatePi(100) << endl;
	cout << "After 1000 darts the approximation of PI is " << piSim.estimatePi(1000) << endl;
	cout << "After 1000000 darts the approximation of PI is " << piSim.estimatePi(1000000) << endl;
	system("pause");
}