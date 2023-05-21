if __name__ == "__main__":

	for i in range(int(input())):
		n = tuple(map(int,input().split()))

		ans = max(n[1:])
		
		print(f'Case {i+1}: {ans}')

