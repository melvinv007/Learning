import matplotlib.pyplot as plt
import numpy as np
# print(mp.__version__)

# x = [1,2,3,4,5]
x = np.array([1,2,3,4,5])
# y = [5,4,3,2,1]
y = np.array([5,2,4,3,1])

plt.plot(x,y,marker='1')
# plt.plot(x)
# plt.plot(y)
plt.show()