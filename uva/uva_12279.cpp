#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k,test_case=1;

    while(scanf("%d",&k),k||0){
        int zero=0,non_zero=0,n;
        while(k--){
            scanf("%d",&n);
            if(n==0) zero++;
            else non_zero++;
        }

        printf("Case %d: %d\n",test_case++,non_zero-zero);
    }
    

    return 0;
}