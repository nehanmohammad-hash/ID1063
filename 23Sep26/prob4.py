import numpy as np

def firstStable(a, n, tolerance):
    for i in range(1,n-1):
        diff1 = -a[i]+a[i-1]
        diff2 = -a[i+1]+a[i]
        diff3 = diff1-diff2
        if diff3<= tolerance:
            return i+1
            break
    
    return -1

    

n = int(input("Enter n: "))
a = np.array(input(f"Enter an array of length {n}: ").split(), dtype=float)
tolerance = float(input("Enter tolerance: "))
value = firstStable(a, n, tolerance)

print(value)
