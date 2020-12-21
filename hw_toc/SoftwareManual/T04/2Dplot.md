**Routine Name:** 2Dplot  

**Author:** Joe Pollock  

**Language:** Python. The code can be compiled using the python3 command on the CLI or IDLE. I use the CLI.  

For example:  
```
python3 2Dplot.py
```

**Description/Purpose:** The purpose of this code is to provide a graph of a given equation or a calculation from the given equation, such as the error or derivative.  

**Input:** No inputs on the Command Line are required, but the equation can be changed inside the code.  

**Output:** The output of this code presents a graph based on the equation you have provided it.  

**Implementation/Code:** The following is the code for [Title of Routine]:  
```Python
# ________________________________________________________
#  Requirements for 2D Plot of Data:
# --------------------------------------------------------
# - Graph string expressions in Python Module
# - Include a Loop to graph multiple expressions
# - Use different colors for the graphs of the functions
# - Hardcode axes labels
# - Do not include a title for the graph
# - Include a legend for the curves
# _________________________________________________________

import matplotlib.pyplot as plt
import numpy as np

# Initialize two arrays to store the input data in
# -------------------------------------------------
xpts=[]
ypts=[]

# Identify number of sub-plots from the user
# ------------------------------------------
plot_num = input('Enter number of expressions you want to plot:\n')

# Request from user the endpoints of the interval that defines the graphical domain
# ----------------------------------------------------------------------------------
xmin = input('Enter left endpoint of an interval:\n')
xmin = float(xmin)
xmax = input('Enter right endpoint of an interval:\n')
xmax = float(xmax)

# Request from user the number of points for graphing the expression given
# -------------------------------------------------------------------------
nvals = input('Enter the number of points for graphing the expression:\n')
nvals = int(nvals)
delx = ( xmax - xmin ) / float(nvals)
i = 0
while i<=nvals:
        x = xmin + float(i) * delx
        xpts.append(x)
        i += 1

# Graphics for the input given
# -----------------------------
plt.xlim(xmin, xmax)

# Loop over the number of expressions specified
# ---------------------------------------------
expression = input('Enter the next expression (include np.) for f(x):\n')

# Loop over the points, evaluating the expression
# -----------------------------------------------
i = 0
while i <= nvals:
        x = xpts[i]
        ypts.append(eval(expression))
        i += 1

# Plot the data using matplotlib.pyplot
# -------------------------------------
plt.plot(xpts, ypts, label=expression)

# Hardcoding axes labels for the 2D plot
# ---------------------------------------
plt.xlabel('x-axis')
plt.ylabel('y-axis')

# Create a legend for the plot
# -----------------------------
plt.legend()

# Show the plot of the data
# -------------------------
plt.show()
```

**Last Modified:** December/2020
[Back to Software Manual](https://github.com/jpoll962/math4610/blob/master/hw_toc/SoftwareManual/SoftwareManual_toc.md)
