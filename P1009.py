n = int(input())
sum = 0
temp = 1
for i in range(1,n+1):
    temp *= i
    sum += temp
print(sum)