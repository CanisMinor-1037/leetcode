from itertools import count
import math
t = int(input())
for i in range(t):
    n,a = input().split(' ')
    n = str(math.factorial(int(n)))
    print(n.count(a))