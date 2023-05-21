while 1:
	a,b,c,d = map(int,input().split())

	br_condition = a==b==c==d==0
	if  br_condition:
		exit()

	ans = 1080

	first_ = (a-b+40)%40
	second_ = (c-b+40)%40
	third_ = (c-d+40)%40

	total_ = (first_+second_+third_)*9

	print(ans+total_)
