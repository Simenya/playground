
#working with MatPlotlib

from matplotlib import pyplot as plt
import numpy as np

x=np.arange(1,10)
y=2*x
print(x)
print(y)

plt.plot(x,y,color="green")
plt.title("Line Plot")
plt.xlabel("X-axis")
plt.ylabel("y-axis")
plt.grid(True)
plt.savefig("graph.png")
plt.show()
