import sys
import math

s = ""

for line in sys.stdin:
	s += line

s = s.split()

for j in s[::-1]:
	print(f"{math.sqrt(int(j)):.4f}")