//////////////////////////////////////////////
//Name: Machine Epsilon (maceps.cpp)
//Author: Joe Pollock
//Description: Code created in MATH4610 at USU to
// compute test Machine Precision.
//////////////////////////////////////////////
//Pseudo-Code: 
//comment: initialize the constant one and the small value
// one = 1.0;
// eps = 1.0;
//comment: loop over the computing the difference between 1 and 1 plus a bit
// for i = 1, 1000
//	diff = one - (one + eps);
//	print diff, eps;
//	if (diff == 0.0) return;
//	eps = 0.5 * eps;
// end
///////////////////////////////////////////////

#include <cstdio>
#include <iostream>

int main()
{
	//Initializing the constant one and the small value

	float one = 1.0f;
	float eps = 1.0f;

	//Looping over then computing the difference between 1 and 1 plus a bit

	for (int i = 0; i == 1,100; i++)
	{
		float diff = one - (one + eps);
		std::cout << "Diff = " << diff << "." << std::endl;
		std::cout << "Eps = " << eps << "." << std::endl;

		if (diff == 0.0f) return diff;

		eps = 0.5f * eps;
	}
}