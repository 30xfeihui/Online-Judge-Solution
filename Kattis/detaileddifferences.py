'''

    9XZER0

'''

def intin():
    return int(input())
def listin():
    return [int(i) for i in input().split()]
def mapin():
    return map(int,input().split())


if __name__ == "__main__":

    for _ in range(intin()):
        
        s1 = input()
        s2 = input()

        print(f'{s1}\n{s2}')
        for i in range(len(s1)):
            if s1[i]==s2[i]:
                print('.',end='')
            else:
                print('*', end='')
        print()
        print()
        print()