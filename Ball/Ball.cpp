#include <iostream>
#include "constants.h"
#include "metrs.h"

double inputParametrs()
{
	std::cout << "Enter the initial height of the tower in meters: ";

	float height;
	std::cin >> height;

	return height;
}

int main()
{
    const double distance =  inputParametrs();

    calculations(distance);

    return 0;
}
