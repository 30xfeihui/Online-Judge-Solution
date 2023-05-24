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

bool comp(pair<int,int> a, pair<int,int> b){

    double aa = (double) a.first/a.second;
    double bb = (double) b.first/b.second;

    return aa<bb;
}

int32_t main()
{
    ios::sync_with_stdio(false) ; cin.tie(0) ;

    int n, k;

    while(cin >> n>>k){

        vector<pair<int,int>> farey;
        farey.push_back({1,1});

        for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                if(__gcd(i,j)==1) farey.push_back({i,j});
            }
        }

        sort(farey.begin(), farey.end(), comp);

        cout << farey[k-1].first << "/" << farey[k-1].second << endl;
    }

    return 0;
}
