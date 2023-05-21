for _ in range(int(input())):
	n = int(input())

	out = (((((n*567)/9)+7492)*235)/47)-498

	if out < 0:
		out = out*(-1)
	print(int(out/10)%10)