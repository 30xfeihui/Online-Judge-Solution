case = 1

while 1:
	string = input()
	output = ''

	if string=='#':
		exit()
	elif string=='HELLO':
		output = 'ENGLISH'
	elif string=='HOLA':
		output = 'SPANISH'
	elif string=='HALLO':
		output = 'GERMAN'
	elif string=='BONJOUR':
		output = 'FRENCH'
	elif string=='CIAO':
		output = 'ITALIAN'
	elif string=='ZDRAVSTVUJTE':
		output = 'RUSSIAN'
	else:
		output = 'UNKNOWN'

	print(f'Case {case}: {output}')

	case+=1