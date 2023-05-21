#include <bits/stdc++.h>
using namespace std;
#define int long long

/**
 * 
 * 9XZER0
 * 
 * **/

int32_t main()
{
    ios::sync_with_stdio(false) ; cin.tie(0) ;

    int n; cin>>n;

    map<int,int> sum; sum[0]=0;
    map<int,int> mp; mp[0]=1;

    for(int i=1;i<pow(10,n/2);i++){
        sum[i] = sum[i/10]+(i%10);
        mp[sum[i]]++;
    }
    int ans = 0;
    for(auto i: mp)
        ans += (i.second*i.second);
    cout << ans << endl;

    return 0;
}

