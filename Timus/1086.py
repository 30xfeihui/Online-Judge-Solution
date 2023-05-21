primes = []
def sieve():
    n = 1000005
    prime = [1 for i in range(n+1)]
    p = 2
    while p*p <= n:
        if prime[p] == 1:
            for i in range(p*p,n+1,p):
                prime[i] = 0
        p += 1

    for p in range(2,n+1):
        if prime[p]:
            primes.append(p)
sieve()
for _ in range(int(input())):
    n = int(input())
    print(primes[n-1])