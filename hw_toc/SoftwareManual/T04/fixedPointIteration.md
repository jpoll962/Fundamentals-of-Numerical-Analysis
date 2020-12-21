**Routine Name:** fixedPoint.cpp (Fixed Point Iteration)

**Author:** Joe Pollock  

**Language:** C++. The code can be compiled using the GNU C++ compiler (g++).  

For example:  
```
g++ fixedPoint.cpp
```

will produce an executable `a.exe` or `a.out` that can be executed with the command `./a.exe` or `./a.out`. If you want a different name, the following will name the
generated executable fixedPoint:  
```
g++ fixedPoint.cpp -o fixedPoint
```

**Description/Purpose:** This code is used to calculate the root of a given function. It works by moving about a fixed point to approximate closer to the root with each iteration. This code allows the stopping criterion of a tolerable error and a maximum iteration to prevent infinite loops. You begin the program by giving an initial approximation to provide the computer with a "close enough" starting point.  

**Input:** 1. You first enter the initial approximation as described above.  
2. Second, you input a tolerable error to allow for one of the ways to prevent an infinite loop.
3. Third, the second stopping criterion is entering a maximum iteration you wish for the program to step through before terminating.  

**Output:** If the iteration reaches a higher number than the maximum iteration you designated, the program will output:  
```
Not Convergent.
```  
Under all circumstances, he program will list the iterations alongside x1 and f(x1) as it calculates closer to the root. If the numbers converge, the program will eventually prints the root calculated.

**Usage/Example:**  

In my provided example, I used f(x) = cos(x)-3x+1 and g(x) = (1+cos(x))/3. In my inputs, I used:  
```
Enter initial approximation: 1
Enter tolerable error: 0.00001
Enter maximum iteration: 10
```

Output from the commands above:  
```
-----------------------------
Fixed Point Iteration Method
-----------------------------
Iteration 1:     x1 =   0.513434 and f(x1) =   0.330761
Iteration 2:     x1 =   0.623688 and f(x1) =  -0.059333
Iteration 3:     x1 =   0.603910 and f(x1) =   0.011391
Iteration 4:     x1 =   0.607707 and f(x1) =  -0.002162
Iteration 5:     x1 =   0.606986 and f(x1) =   0.000411
Iteration 6:     x1 =   0.607124 and f(x1) =  -0.000078
Iteration 7:     x1 =   0.607098 and f(x1) =   0.000015
Iteration 8:     x1 =   0.607102 and f(x1) =  -0.000003

The root is 0.607102
```

The table presents the number of iterations, this example only took 8 iterations out of the max of 10 that I set. Values for x1 and f(x1) are printed. Then, at the end, the root is printed.

**Implementation/Code:** The following is the code for fixedPoint.cpp:  
```C++
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>

// Define the function
#define   f(x)   cos(x) - 3 * x + 1
// Write f(x) as x = g(x) and define g(x) here
#define   g(x)   ( 1 + cos(x) ) / 3

int main()
{
    int iter = 1;
    int max_iter;
	float x0, x1, error;

	// Setting precision and writing floating point values in fixed-point notation.
	std::cout << std::setprecision(6) << std::fixed;
	// Inputs
	std::cout << "Enter initial approximation: ";
	std::cin >> x0;

	std::cout << "Enter tolerable error: ";
	std::cin >> error;

	std::cout << "Enter maximum iteration: ";
	std::cin >> max_iter;
    std::cout << std::endl;

	// Implementing Fixed Point Iteration
	std::cout << "-----------------------------" << std::endl;
	std::cout << "Fixed Point Iteration Method" << std::endl;
	std::cout << "-----------------------------" << std::endl;
	do
	{
	    x1 = g(x0);
	    std::cout << "Iteration " << iter << ":\t x1 = " << std::setw(10) << x1
			<< " and f(x1) = " << std::setw(10) << f(x1) << std::endl;
	    iter = iter + 1;

	    if(iter > max_iter)
	    {
		    std::cout << "Not Convergent.";
		    std::exit(0);
		}

		x0 = x1;

	} while( std::fabs(f(x1)) > error);

	std::cout << std::endl;
    std::cout << "The root is " << x1 << std::endl;

	return(0);
}
```

**Last Modified:** December/2020
[Back to Software Manual](https://github.com/jpoll962/math4610/blob/master/hw_toc/SoftwareManual/SoftwareManual_toc.md)
