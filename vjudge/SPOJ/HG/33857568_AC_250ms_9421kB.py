import math
n = int(input())
nl = input().split()
nl = list(map(int, nl))
m = int(input())
ml = input().split()
ml = list(map(int, ml))
a = 1
b = 1
for i in nl:
    a *= i
for i in ml:
    b *= i
res = math.gcd(a, b)
res = str(res)
if (len(res) > 9):
    for i in range(len(res)-9, len(res)):
        print(res[i], end='')
    print('')
else:
    print(res)