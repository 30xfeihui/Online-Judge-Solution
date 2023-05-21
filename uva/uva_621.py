for _ in range(int(input())):
	string = input()
	length = len(string)

	if string=='1' or string=='4' or string=='78':
		print("+")
	elif string[-1]=='5' and string[-2]=='3' and length>2:
		print("-")
	elif string[-1]=='4' and string[0]=='9' and length>2:
		print("*")
	elif string[0]=='1' and string[1]=='9' and string[2]=='0' and length>3:
		print("?")