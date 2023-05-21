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
    vector<int> number;

    while(cin>>n, n||0){
        number.emplace_back(n);
    } number.emplace_back(0);


    auto f = [&](int a, int &p){
        while(a){
            p |= (1<<a%10);
            a /= 10;
        }
    };


    for(int j=0;j<number.size()-1;j++){

        n = number[j];
        int lo = 1234;
        int hi = 98765;

        int con = 0;

        for(int i=lo;i<=hi/n;i++){

            int subset = (i<10000);

            f(i, subset);
            f(i*n, subset);

            int check = (1<<10)-1;

            if(check==subset){
                con = 1;
                cout << setfill('0') << setw(5) << i*n << " / " << setfill('0') << setw(5) << i << " = " << n << endl;
            }
        }

        if(!con){
            cout << "There are no solutions for " << n << "." << endl;
        }

        if(number[j+1]!=0) cout << endl;
    }
    return 0;
}