#include <bits/stdc++.h>
using namespace std;
#define int int64_t
#define endl "\n"
#define LSONE(x) ((x) & -(x))

/**
 * 
 * 
 * 9xZER0
 * 
 **/



int32_t main()
{
    ios::sync_with_stdio(false) ; cin.tie(0) ;

    int n;

    while(cin>>n, n||0){

        int a,b; a=b=n;
        int bit_count = 0;
        int one_count = 0;

        int size = floor(log2(n))+1;

        for(int i=0;i<size;i++){
            if(n&(1<<i)){ 
                if(one_count&1)
                    a = a&(~(1<<bit_count));
                else b = b&(~(1<<bit_count));

                one_count++;
            }
            bit_count++;
        }

        cout << a << " " << b << endl;

    }

    return 0;
}