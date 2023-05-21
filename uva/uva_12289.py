for _ in range(int(input())):
	string = input()

	if len(string)==5:
		print("3")
	elif len(string)==3:
		if (string[0]=='o' and string[1]=='n') or (string[1]=='n' and string[2]=='e') or (string[2]=='e' and string[0]=='o'):
			print("1")
		else:
			print("2")