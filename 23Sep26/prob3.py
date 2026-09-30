#Code by Nehan Mohammad
#23Sep 2026, Lab

def run_length(a, n, i):
   
    if a[i] == 0:
        return 0
    count = 0
    while i < n and a[i] == 1:
        count += 1
        i += 1
    return count

def find_violation(a, n, k):
    #Finds the first session where consecutive 1s exceed k.
    for i in range(n):
        if a[i] == 1:
            #length = run_length(a, n, i)
            length = len(a)
            if length > k:
                # The violation occurs at the (k + 1)-th consecutive session
                return i + k + 1
    return 0

# --- Example Execution ---
# n, k = 8, 3
# a  = [1, 1, 0, 1, 1, 1, 1, 0]
  
n = int(input("Enter n: "))
k = int(input("Enter k: "))
a = list(map(int, input().split()))

output = find_violation(a, n, k)
#print(n, k)
#print(a)
print(f"Output: {output}")

