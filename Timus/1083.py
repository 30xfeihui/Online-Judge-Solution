n,s = input().split()
n = int(n)
k = len(s)
if n%k==0:
    last = k
else:
    last = n%k
fact = 1
while n>=last:
    fact = fact * (n)
    n -= k
print(fact)