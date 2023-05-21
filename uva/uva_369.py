import math
import sys
#from decimal import Decimal, getcontext
#getcontext().prec = 100
inputs = sys.stdin.read().splitlines()
outputs = []
ln = 0

'''

    9xZER0

'''
mod = 1000000007
if __name__ == "__main__":

    #for _ in range(int(inputs[ln])):
    for i in range(len(inputs)):
        #ln += 1

        # Inputs

        #a,b,n = map(int,inputs[ln].split())
        # ln+=1
        #n = int(inputs[ln])
        #ln += 1
        # l = [int(i) for i in inputs[ln].split()]
        #ln += 1
        s1 = list(inputs[ln].split(' '))
        ln += 1
        # s2 = list(map(int,inputs[ln].split('.')))
        
        #########################
        #  Code Goes From Here  #
        #########################
        n1 = -1
        n2 = -1

        for i in s1:
            if len(i)!=0 and n1==-1:
                n1 = int(i)
            elif len(i)!=0 and n1!=-1:
                n2 = int(i)

        if n1==0 and n2==0:
            break
        ans = math.factorial(n1)//math.factorial(n2)
        ans = ans//math.factorial(n1-n2)

        ans = str(n1)+" things taken "+str(n2)+" at a time is "+str(ans)+" exactly."
        outputs.append(str(ans))


    # output
    sys.stdout.write('\n'.join(outputs))
    # new line or WA
    print() 
    # stdout.flush()