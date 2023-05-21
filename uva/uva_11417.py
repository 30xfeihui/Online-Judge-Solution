import sys
from math import gcd

for line in sys.stdin:
	n = int(line)
	if n==0:
		exit()
	g = 0
	for i in range(1,n):
		for j in range(i+1,n+1):
			g+=gcd(i,j)

	print(g)