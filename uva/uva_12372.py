for i in range(int(input())):
	
	l,w,h = [int(j) for j in input().split()]


	condition = (l<=20) and (w<=20) and (h<=20)

	if condition:
		print(f'Case {i+1}: good')
	else:
		print(f'Case {i+1}: bad')