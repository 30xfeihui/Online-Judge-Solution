n = int(input())

summ = 0

if n > 0:
	for i in range(1,n+1):
		summ+=i
else:
	for i in range(n,2):
		summ+=i

print(summ)