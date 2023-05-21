'''

    9XZER0

'''

if __name__ == "__main__":

    while(1):
        n = int(input())
        if not n:
            break;
        mps = list()
        for _ in range(n):
            s = input()
            r = input()
            mps.append([s,r])

        main_str = input()
        
        for i in mps:
            while(1):
                if main_str.find(i[0])==-1:
                    break
                
                main_str = main_str.replace(i[0],i[1],1)
        print(main_str)