n = int(input())
c = -1
for i in range(2,n):
	if n%i==0:
		print(f"{i}{int(n/i)}")
		## need some modification ##
		exit()
print(c)


## wrong answer ##