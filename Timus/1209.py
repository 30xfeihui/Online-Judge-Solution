import math

s = ""
for _ in range(int(input())):
    i = int(input())
    t = (8*(i-1))+1
    if int(math.sqrt(t))**2==t:
        s += "1 "
    else:
        s += "0 "
print(s.strip())