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

    auto digit = [&](int n){
        int sum = 0;
        while(n){
            sum += (n%10);
            n /= 10;
        }
        return sum;
    };

    
    vector<int> digit_sum(100005);
    for(int i=0;i<100003;i++) digit_sum[i] = digit(i);


    vector<int> number;
    int n;
    while(cin>>n, n||0){
        number.emplace_back(n);
    }

    for(auto i: number){
        n = i;

        int ans = 0;
        int check = digit_sum[n];

        for(int j=11;j<=100003;j++){
            int temp = digit(n*j);

            if(temp==check){
                ans = j;
                break;
            }
        }

        cout << ans << endl;
    }
    return 0;
}