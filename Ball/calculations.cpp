#include "constants.h"
#include <iostream>

double calculations(double distance)
{
	double flyDistance;
	double time = 0;
	
	while (distance > 0)
	{
		flyDistance = (time * time * myConstants::gravityForce) / 2;
		distance -= flyDistance;

		if (distance < 0)
		{
			std::cout << "Ball on the ground at " << time + 1 << " seconds";
			break;
		}

		std::cout<< "Height " << distance << "\t";
		std::cout<<"seconds " << ++time <<std::endl;
	}
	
	return distance;
}