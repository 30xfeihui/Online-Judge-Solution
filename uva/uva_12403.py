total = 0

for _ in range(int(input())):
	
	l = input().split()

	if l[0]=='donate':
		total += int(l[1])
	elif l[0]=='report':
		print(total)