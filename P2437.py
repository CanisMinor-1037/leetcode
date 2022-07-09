import sys
def cal(i):
    if(i in f.keys()):
        return f[i]
    else:
        f[i] = cal(i-1)+cal(i-2)
        return f[i]

sys.setrecursionlimit(3000)
a, b = input().split()
a = int(a)
b = int(b)
n = b-a+1
f = {
    0:0,
    1:1,
    2:1
}

print(cal(n))