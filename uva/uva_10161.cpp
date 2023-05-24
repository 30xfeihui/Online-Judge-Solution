#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define LSONE(x) ((x) & -(x))
#define ONBIT(x,k) ((x) | (1<<k))
#define OFFBIT(x,k) ((x) & (~(1<<k)))
#define IFONBIT(x,k) ((x) & (1<<k))

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

        int check = ceil(sqrt(n));
        int col, row;

        int square = check*check;
        int diff = square-n;

        if(check&1){

            if(diff<check){
                row = check;
                col = diff+1;
            }
            else{
                col = check;
                row = n - ((check-1)*(check-1));
            }

        }
        // interchange col and row
        else{

            if(diff<check){
                col = check;
                row = diff+1;
            }
            else{
                row = check;
                col = n - ((check-1)*(check-1));
            }

        }

        cout << col << " " << row  << endl;
    }
    return 0;
}
