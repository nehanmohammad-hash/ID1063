import numpy as np

def rms(a):
    # Convert input to a numpy array just in case it's a standard list
    arr = np.array(a, dtype=float)
    
    # RMS formula: sqrt( mean( x^2 ) )
    result = np.sqrt(np.mean(arr ** 2))
    return result

inp = input("Enter numbers: ")
tkn = inp.split()
numbers_list = []
for i in tkn:
    numbers_list.append(float(i))

arr = np.array(numbers_list)
ans = rms(arr)
print("array:",arr)
print("rms:", ans)
