import numpy as np

'''
def rms(a):
    # Convert input to a numpy array just in case it's a standard list
    arr = np.array(a, dtype=float)
    
    # RMS formula: sqrt( mean( x^2 ) )
    result = np.sqrt(np.mean(arr ** 2))
    return result
'''

def rms_norm(arr):
    n = len(arr)
    # Magnitude of the vector divided by the root of dimensions
    return np.linalg.norm(arr,2) / np.sqrt(n)



'''
inp = input("Enter numbers: ")
tkn = inp.split()
numbers_list = []
for i in tkn:
    numbers_list.append(float(i))
'''

data = np.array([3,4,0,5])
data1 = np.array([1, -1, 1, -1, 1])
data2 = np.array([7.5])

arr = np.array(data)
ans = rms_norm(arr)
print("array:",arr)
print("rms:", ans)

arr = np.array(data1)
ans = rms_norm(arr)
print("array:",arr)
print("rms:", ans)

arr = np.array(data2)
ans = rms_norm(arr)
print("array:",arr)
print("rms:", ans)
