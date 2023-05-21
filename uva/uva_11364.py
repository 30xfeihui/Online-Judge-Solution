for _ in range(int(input())):
	n = int(input())
	arr = tuple(map(int,input().split()))

	maximum = max(arr)
	minimum = min(arr)

	output = (maximum-minimum)*2

	print(output)