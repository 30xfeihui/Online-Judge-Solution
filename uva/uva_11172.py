for _ in range(int(input())):
	h,w = map(int,input().split())

	if h==w:
		print("=")
	elif h>w:
		print(">")
	elif h<w:
		print("<")