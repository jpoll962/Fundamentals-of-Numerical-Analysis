## Solutions for Tasksheet 3

### Task 1:

The goal of Task 1 is to show the second derivative approximation presented in Tasksheet 2 is Second Order Accurate.
The code is in the Tasksheet_03 subdirectory for analysis.

Print out with f(x) = cos(x) and x = 2.0 as given by Tasksheet 2:
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

### Task 2:

It is noticeable that the second derivative approximation is second order accurate due to the greater slope. From the log-log plot of the error shown in Task 1, it is apparent that the approximation begins to fail due to precision around the 8th iteration. C++ had difficulties (with
no fix I could find) when it came to raising 10 to the power of -6, -7, -11, -13, and -17. Using pow(x,y) vs. typing it in directly did not help.

The log-log plot graph code is included in the Tasksheet_03 subdirectory to produce the graph. The code is in Python. I could not find a way to do it using C++.

### Task 3:

I have created and compiled single and double machine epsilon code to be found in the tasksheet_03 subdirectory with test code.

### Task 4:
My Software Manual was created so it was only necessary that I make some small edits. I created the [Software Manual's Table of Contents](https://github.com/jpoll962/math4610/blob/master/hw_toc/SoftwareManual/SoftwareManual_ToC.md). Then I moved my already created smaceps content into a smaceps.md file. Afterward, I added the link to smaceps.md to the Software Manual's Table of Contents.

Complete!

### Task 5:

I have created and compiled and linked my shared library. It can be found in the tasksheet_03 subdirectory.

### Task 6:

It appears that a Shared Library is more of a benefit when resources are a [problem](https://stackoverflow.com/questions/1082047/pros-and-cons-of-using-shared-library-vs-fully-encapsulated-ear). Other methods are suitable when it comes to linkability when different versions of software/code must be used. There are different ways to link libraries. This is through [dynamic or static linking](https://www.quora.com/What-are-the-pros-and-cons-of-static-and-dynamic-linking-in-c++?share=1). The file sizes here vary greatly, which can be a problem. But speed seems to be a pro to counter this.
