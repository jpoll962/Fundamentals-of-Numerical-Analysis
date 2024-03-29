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