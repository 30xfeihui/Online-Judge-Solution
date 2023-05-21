import sys

inputs = sys.stdin.read().splitlines()
outputs = []
ln = 0

'''

    9XZER0

'''
'''
    outputs.append(str(ans))
    sys.stdout.write('\n'.join(outputs))
'''
if __name__ == "__main__":

    # Inputs

    #n,m = map(int, inputs[ln].split())
    #n = int(inputs[ln])
    #ln+=1
    #l = [int(i) for i in inputs[ln].split()]
    #ln+=1
    s1 = inputs[ln]
    #ln += 1
    #s2 = inputs[ln]
    #########################
    #  Code Goes From Here  #
    #########################
    
    n = len(s1)
    w,s,c,sym = 0,0,0,0
    for i in s1:
        if i=='_':
            w+=1
        elif (i>='a') and (i<='z'):
            s+=1
        elif (i>='A') and (i<='Z'):
            c+=1
        else:
            sym+=1
    
    outputs.append(str(w/n))
    outputs.append(str(s/n))
    outputs.append(str(c/n))
    outputs.append(str(sym/n))
    # output
    sys.stdout.write('\n'.join(outputs))