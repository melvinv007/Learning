import numpy as np

# print(np.__version__)

array = np.array([1,2,3,4])
# print (array)
# print(type(array))

# array = array * 2

array = np.array('A') # 0 dimension
# print (array.ndim)
# print(array.shape)

array = np.array(['a','b','c']) # 1 D
# print (array.ndim)
# print(array.shape)

array = np.array([[1,2,3,4],
                  [3,4,5,6],
                  [5,6,7,8]]) # 2 D
# print(array.shape)

array = np.array([[[1,2,3], [3,4,5], [5,6,7]],
                  [[8,9,0], [0,1,2], [3,4,5]],
                  [[6,7,8], [8,9,0], [1,2,3]] ]) # 3 D -> yellow - 1D , blue - 2D , purple - 3D
# print (array.ndim)
# print(array.shape)

#chain indexing
# print(array[0][0][0])
# print(array[0][0][1])
# print(array[0][1][1])
# print(array[1][0][0])
# print(array[2][0][1])

#multidimensional indexing
# print(array[0,1,1])

#slicing 
# print(array[:,1,0])
# print(array[1,:,2])
# print(array[:,2,0])
# print(array[0,:,1])
# print(array[0,0,:])

# scalar arithmetic + vectorised math functions

radii = np.array([1,2,3])

area = np.round(np.pi*(radii ** 2))
# circum = np.floor(2*np.pi*(radii ** 2))
# print(circum)

#broadcasting

# a1 = np.array([[1,2],[3,4],[5,6]])
# a2 = np.array([[4,6]])

# a1 = np.array([[1,2,3,4,5,6,7,8,9,10]])
# a2 = np.array([[1],[2],[3],[4],[5],[6],[7],[8],[9],[10]])

# print(a1)
# print(a1.shape)
# print(a2)
# print(a2.shape)
# print(a1*a2)

# print(array[array==array])

array = np.array([1,2,3,4,5,6,7,8,9,0])
rng = np.random.default_rng()

num = rng.choice(array)

print ("num is ",num)