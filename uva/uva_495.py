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

    fact = [0 for i in range(5002)]
    fact[0] = 0
    fact[1] = 1
    for i in range(2,5002):
        fact[i] = fact[i-1]+fact[i-2]

    #for _ in range(int(inputs[ln])):
    for i in range(len(inputs)):
        #ln += 1

        # Inputs

        #a,b,n = map(int,inputs[ln].split())
        # ln+=1
        n = int(inputs[ln])
        ln += 1
        # l = [int(i) for i in inputs[ln].split()]
        #ln += 1
        # s1 = list(map(func,inputs[ln].split('.')))
        # ln += 1
        # s2 = list(map(int,inputs[ln].split('.')))
        
        #########################
        #  Code Goes From Here  #
        #########################
        
        ans = "The Fibonacci number for "+str(n)+" is " + str(fact[n])

        outputs.append(str(ans))

    # output
    sys.stdout.write('\n'.join(outputs))
    # new line should be printed else WA
    print() 
    # stdout.flush()