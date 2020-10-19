## Solutions for Tasksheet 3

### Task 1:

The goal of Task 1 is to show the second derivative approximation presented in Tasksheet 2 is Second Order Accurate.
The source code (secDeriv.cpp) is:
```C++

#include <iostream>
#include <cstdio>
#include <cmath>

int main()
{
    // Setting range of decimals to show
    std::cout.precision(16);
    std::cout << std::scientific;

    // Assign Values
    int iter [18] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18}; // Total Iterations
    long double error [18]; // Array to hold error values
    long double x = 2.0L; // Decided value of x for the equation
    long double h [18L] = {1.0L, 0.5L, pow(10.0L,-1.0L), pow(10.0L,-2.0L), pow(10.0L,-3.0L), // Values of h to use in approximations
        pow(10.0L,-4.0L), pow(10.0L,-5.0L), pow(10.0L,-6.0L), pow(10.0L,-7.0L), pow(10.0L,-8.0L),
        pow(10.0L,-9.0L), pow(10.0L,-10.0L), pow(10.0L,-11.0L), pow(10.0L,-12.0L), pow(10.0L,-13.0L),
        pow(10.0L,-14.0L), pow(10.0L,-15.0L), pow(10.0L,-16.0L)};
    long double apprVal [18]; // Array to hold approximate values
    long double exactVal = -sin(x); // Exact value of equation being approximated


    // Printing Exact Value
    std::cout << "The Exact Value = " << exactVal << std::endl;

    // For loop iterating through function being approximating
    for(int i = 0; i < 18; i++)
    {
        // Placing values in apprVal array through each iteration
        apprVal[i] = ( cos((x) + (h[i])) - 2.0 * cos(x) + cos((x) - (h[i])) ) / ( pow(h[i],2) );

        // Placing values in error array through each iteration
        error[i] = std::fabs(exactVal - apprVal[i]);
    }
    std::cout << std::endl;

    // Printing values calculated to the screen in a neat-ish table
    std::cout << "| iter |            h           |       difference       |          error         |" << std::endl;
    std::cout << "|------|------------------------|------------------------|------------------------|" << std::endl;
    for(int i = 0; i < 18; i++)
    {
        i <= 8 ? std::cout << "|  0" : std::cout << "|  "; // If Statement purely for aesthetics
        std::cout << iter[i] << "  | " << h[i] << " | " 
        <<apprVal[i] <<" | " << error[i] << " |" << std::endl;
    }
    std::cout << std::endl;

    return 0;
    // End
}
```

Print out with f(x) = cos(x), f''(x) = -cos(x), and x = 2.0 as given by Tasksheet 2:
```
The Exact Value = 4.1614683654714241e-01

| iter |            h           |       difference       |          error         |
|------|------------------------|------------------------|------------------------|
|  01  | 1.0000000000000000e+00 | 3.8260348236197916e-01 | 3.3543354185163243e-02 |
|  02  | 5.0000000000000000e-01 | 4.0754903686021610e-01 | 8.5977996869263107e-03 |
|  03  | 1.0000000000000001e-01 | 4.1580016309238904e-01 | 3.4667345475336564e-04 |
|  04  | 1.0000000000000000e-02 | 4.1614336867112911e-01 | 3.4678760132966779e-06 |
|  05  | 1.0000000000000000e-03 | 4.1614680190704689e-01 | 3.4640095514237856e-08 |
|  06  | 1.0000000000000000e-04 | 4.1614681700608003e-01 | 1.9541062379335727e-08 |
|  07  | 1.0000000000000001e-05 | 4.1614711676629662e-01 | 2.8021915421394539e-07 |
|  08  | 9.9999999999999995e-07 | 4.1600056732704616e-01 | 1.4626922009625121e-04 |
|  09  | 9.9999999999999995e-08 | 4.3853809472693689e-01 | 2.2391258179794482e-02 |
|  10  | 1.0000000000000000e-08 | 1.1102230246251563e+00 | 6.9407618807801397e-01 |
|  11  | 1.0000000000000001e-09 | 5.5511151231257820e+01 | 5.5095004394710678e+01 |
|  12  | 1.0000000000000000e-10 | 5.5511151231257818e+03 | 5.5506989762892345e+03 |
|  13  | 9.9999999999999994e-12 | 5.5511151231257827e+05 | 5.5511109616574168e+05 |
|  14  | 9.9999999999999998e-13 | 0.0000000000000000e+00 | 4.1614683654714241e-01 |
|  15  | 1.0000000000000000e-13 | 5.5511151231257820e+09 | 5.5511151227096348e+09 |
|  16  | 1.0000000000000000e-14 | -1.6653345369377349e+12| 1.6653345369381511e+12 |
|  17  | 1.0000000000000001e-15 | 2.7755575615628912e+14 | 2.7755575615628872e+14 |
|  18  | 9.9999999999999998e-17 | 0.0000000000000000e+00 | 4.1614683654714241e-01 |
```

The Second-Order Accuracy is easiest identified after the h=0.5, so we shall see with h=1e-01 to h=1e-02, the error goes from appr. 0.415800 to appr. 0.4161434. If the approximation is second-order accurate, then the refinement by a degree of 10, like shown, will result in an error reduction by the factor of 10<sup>2</sup> (100).

( (0.4161434)/(0.415800) ) * 100 = appr. 100. __Proven.__

### Task 2:

It is noticeable that the second derivative approximation is second order accurate due to the greater slope. From the log-log plot of the error shown in Task 1, it is apparent that the approximation begins to fail due to precision around the 8th and 9th iteration. C++ had difficulties (with no fix I could find) when it 
came to raising 10 to the power of -6, -7, -11, -13, and -17. Using pow(x,y) vs. typing it in directly did not make a difference.

The log-log plot code is in Python (logloggraph.py):
```Python
import matplotlib.pyplot as plt
import numpy as np
# initialize the exact value of the derivative
# --------------------------------------------
aval = 2.0
exactVal = -np.cos(aval)
# set up the arrays for plotting the log-log plot we need
# -------------------------------------------------------
x = []
y = []
# initialize the array for the increment size and error in the finite
# difference approximation
# ------------------------
h = []
error = []
# append the initial increment with a starting value - in this case, 1.0
# ----------------------------------------------------------------------
h.append(1.0)
# compute the difference quotient for the increment value
# -------------------------------------------------------
dfVal = ( (np.cos(aval + h[0])) - (2*np.cos(aval)) + (np.cos(aval- h[0])) ) / ( h[0] * h[0] )
error.append(np.abs(exactVal - dfVal))
# append the log-log point for plotting at the end
# ------------------------------------------------

x.append(np.log(h[0]))
y.append(np.log(error[0]))
# print the exact value for sanity
# --------------------------------
print('The exact derivative value is: ', exactVal)
# set a loop counter
# ------------------
l=1
# the loop over ndiv increments
# -----------------------------
ndiv = 40
while l<40:
    # append the next increment of h
    # ------------------------------
    h.append(0.5 * h[l-1])
    # compute the numerator and denominator for the difference approximation
    # and compute the approximation from these
    # ----------------------------------------
    numval = np.cos(aval + h[l]) - 2*np.cos(aval) + np.cos(aval - h[l])
    denom = h[l] * h[l]
    dfVal = numval / denom
    # compute the error in the approximation
    # --------------------------------------
    error.append(np.abs( dfVal - exactVal ))
    # append the log-log point to the arrays for plotting below
    # ---------------------------------------------------------
    x.append(np.log(h[l]))
    y.append(np.log(error[l]))
    # update the loop iterator
    # ------------------------
    l += 1
# set up a plot for the data generated
# ------------------------------------
plt.title('Error in the Difference Quotient of the Second Derivative')
plt.xlabel('Increment Values: h')
plt.ylabel('Error in the Approximation')
plt.plot(x, y, label='Log-Log Plot of Error for cos(2.0)')
plt.legend()
plt.show()
```

The output is:  
![Python Log-Log Graph](https://github.com/jpoll962/math4610/blob/master/hw_toc/Tasksheet_03/src/PythonLogLogGraph.png)

### Task 3:

I have created and compiled single and double machine epsilon code to be found [here](https://github.com/jpoll962/math4610/tree/master/hw_toc/Tasksheet_03/src) with test code.

macEps.hpp:  
```C++
#pragma once
#ifndef MACEPS_HPP
#define MACEPS_HPP

float sMacEps(); //Single Precision Machine Epsilon Function
double dMacEps(); //Double Precision Machine Epsilon Function

#endif /*MACEPS_HPP*/
```

sMacEps.cpp:  
```C++
#include <iostream>
#include "macEps.hpp" // This header contains two functions sMacEps() and dMacEps()

float sMacEps()
{
	float one = 1.0;	// One
	float eps = 1.0;	// Epsilon

	// For Loop to calculate the Machine Epsilon
	for (int i = 1; i < 1000; i++)
	{
		float diff = one - (one + eps);
		// Prints out Diff and Eps through each loop iteration
		std::cout << "Diff = " << diff << " -- Eps = " << eps << std::endl;

		// This if statement checks if diff == 0, returning diff it true and moving along if false
		if (diff == 0.0) return diff;
		eps = 0.5 * eps;
	}
	return 0; // End
}
```

test_sMacEps.cpp:  
```C++
#include <iostream>
#include "macEps.hpp"

int main()
{
	sMacEps(); // Calls the sMacEps function found in sMacEps.cpp
	return 0; // End
}
```

test_sMacEps Output:  
```
Diff = -1 -- Eps = 1
Diff = -0.5 -- Eps = 0.5
Diff = -0.25 -- Eps = 0.25
Diff = -0.125 -- Eps = 0.125
Diff = -0.0625 -- Eps = 0.0625
Diff = -0.03125 -- Eps = 0.03125
Diff = -0.015625 -- Eps = 0.015625
Diff = -0.0078125 -- Eps = 0.0078125
Diff = -0.00390625 -- Eps = 0.00390625
Diff = -0.00195312 -- Eps = 0.00195312
Diff = -0.000976562 -- Eps = 0.000976562
Diff = -0.000488281 -- Eps = 0.000488281
Diff = -0.000244141 -- Eps = 0.000244141
Diff = -0.00012207 -- Eps = 0.00012207
Diff = -6.10352e-05 -- Eps = 6.10352e-05
Diff = -3.05176e-05 -- Eps = 3.05176e-05
Diff = -1.52588e-05 -- Eps = 1.52588e-05
Diff = -7.62939e-06 -- Eps = 7.62939e-06
Diff = -3.8147e-06 -- Eps = 3.8147e-06
Diff = -1.90735e-06 -- Eps = 1.90735e-06
Diff = -9.53674e-07 -- Eps = 9.53674e-07
Diff = -4.76837e-07 -- Eps = 4.76837e-07
Diff = -2.38419e-07 -- Eps = 2.38419e-07
Diff = -1.19209e-07 -- Eps = 1.19209e-07
Diff = 0 -- Eps = 5.96046e-08
```

dMacEps.cpp:  
```C++
#include <iostream>
#include "macEps.hpp"

double dMacEps()
{
	double one = 1.0;	//One
	double eps = 1.0;	//Epsilon

	// For Loop to calculate the Machine Epsilon
	for (int i = 1; i < 1000; i++)
	{
		double diff = one - (one + eps);
		// Prints out Diff and Eps through each loop iteration
		std::cout << "Diff = " << diff << " -- Eps = " << eps << std::endl;

		// If statement checks if diff == 0: returns diff if true; moving along if false
		if (diff == 0.0) return diff;
		eps = 0.5 * eps;
	}
	return 0; // End
}
```

test_dMacEps:  
```C++
#include <iostream>
#include "macEps.hpp"

int main()
{
	dMacEps(); // Calls the dMacEps function found in dMacEps.cpp

	return 0; // End
}
```

test_dMacEps Output:
```
Diff = -1 -- Eps = 1
Diff = -0.5 -- Eps = 0.5
Diff = -0.25 -- Eps = 0.25
Diff = -0.125 -- Eps = 0.125
Diff = -0.0625 -- Eps = 0.0625
Diff = -0.03125 -- Eps = 0.03125
Diff = -0.015625 -- Eps = 0.015625
Diff = -0.0078125 -- Eps = 0.0078125
Diff = -0.00390625 -- Eps = 0.00390625
Diff = -0.00195312 -- Eps = 0.00195312
Diff = -0.000976562 -- Eps = 0.000976562
Diff = -0.000488281 -- Eps = 0.000488281
Diff = -0.000244141 -- Eps = 0.000244141
Diff = -0.00012207 -- Eps = 0.00012207
Diff = -6.10352e-05 -- Eps = 6.10352e-05
Diff = -3.05176e-05 -- Eps = 3.05176e-05
Diff = -1.52588e-05 -- Eps = 1.52588e-05
Diff = -7.62939e-06 -- Eps = 7.62939e-06
Diff = -3.8147e-06 -- Eps = 3.8147e-06
Diff = -1.90735e-06 -- Eps = 1.90735e-06
Diff = -9.53674e-07 -- Eps = 9.53674e-07
Diff = -4.76837e-07 -- Eps = 4.76837e-07
Diff = -2.38419e-07 -- Eps = 2.38419e-07
Diff = -1.19209e-07 -- Eps = 1.19209e-07
Diff = -5.96046e-08 -- Eps = 5.96046e-08
Diff = -2.98023e-08 -- Eps = 2.98023e-08
Diff = -1.49012e-08 -- Eps = 1.49012e-08
Diff = -7.45058e-09 -- Eps = 7.45058e-09
Diff = -3.72529e-09 -- Eps = 3.72529e-09
Diff = -1.86265e-09 -- Eps = 1.86265e-09
Diff = -9.31323e-10 -- Eps = 9.31323e-10
Diff = -4.65661e-10 -- Eps = 4.65661e-10
Diff = -2.32831e-10 -- Eps = 2.32831e-10
Diff = -1.16415e-10 -- Eps = 1.16415e-10
Diff = -5.82077e-11 -- Eps = 5.82077e-11
Diff = -2.91038e-11 -- Eps = 2.91038e-11
Diff = -1.45519e-11 -- Eps = 1.45519e-11
Diff = -7.27596e-12 -- Eps = 7.27596e-12
Diff = -3.63798e-12 -- Eps = 3.63798e-12
Diff = -1.81899e-12 -- Eps = 1.81899e-12
Diff = -9.09495e-13 -- Eps = 9.09495e-13
Diff = -4.54747e-13 -- Eps = 4.54747e-13
Diff = -2.27374e-13 -- Eps = 2.27374e-13
Diff = -1.13687e-13 -- Eps = 1.13687e-13
Diff = -5.68434e-14 -- Eps = 5.68434e-14
Diff = -2.84217e-14 -- Eps = 2.84217e-14
Diff = -1.42109e-14 -- Eps = 1.42109e-14
Diff = -7.10543e-15 -- Eps = 7.10543e-15
Diff = -3.55271e-15 -- Eps = 3.55271e-15
Diff = -1.77636e-15 -- Eps = 1.77636e-15
Diff = -8.88178e-16 -- Eps = 8.88178e-16
Diff = -4.44089e-16 -- Eps = 4.44089e-16
Diff = -2.22045e-16 -- Eps = 2.22045e-16
Diff = 0 -- Eps = 1.11022e-16
```

### Task 4:
I created the [Software Manual's Table of Contents](https://github.com/jpoll962/math4610/blob/master/hw_toc/SoftwareManual/SoftwareManual_toc.md). Then I moved my already created sMacEps content into a sMacEps.md file. Afterward, I added the link to sMacEps.md to the Software Manual's Table of Contents.

Complete!

### Task 5:

I have created and compiled and linked my shared library. It can be found [here](https://github.com/jpoll962/math4610/tree/master/hw_toc/Tasksheet_03/src) titled **mylib.a**.

### Task 6:

It appears that a Shared Library is more of a benefit when resources are a problem [(https://stackoverflow.com/questions/1082047/pros-and-cons-of-using-shared-library-vs-fully-encapsulated-ear)](https://stackoverflow.com/questions/1082047/pros-and-cons-of-using-shared-library-vs-fully-encapsulated-ear). Other methods are suitable when it comes to linkability when different versions of software/code must be used. There are different ways to link libraries [(https://www.quora.com/What-are-the-pros-and-cons-of-static-and-dynamic-linking-in-c++?share=1)](https://www.quora.com/What-are-the-pros-and-cons-of-static-and-dynamic-linking-in-c++?share=1). The file sizes here vary greatly, which can be a problem. But speed seems to be a pro to counter this.
