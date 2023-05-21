#include <bits/stdc++.h>
using namespace std;

int summation(int n){
    int sum = 0;
    while(n){
        sum += (n%10);
        n /= 10;
    }
    return sum;
}

int main()
{
    int n,m;
    while(scanf("%d",&m),m||0){
        n = m;

        while(1){

            if(n>=0 && n<=9) break;

            n = summation(n);
        }
        printf("%d\n",n);
    }
    return 0;
}
