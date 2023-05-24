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

    vector<int> n;
    vector<int> sum;
    vector<vector<int>> arr;    

    int nn;
    int summ;

    // input
    while(cin >> nn){
        vector<int> a(nn);
        for(auto &i: a) cin>>i;

        cin >> summ;

        n.emplace_back(nn);
        arr.emplace_back(a);
        sum.emplace_back(summ);
    }

    int t = n.size();
    int tt = 0;

    while(t--){

        summ = sum[tt];
        sort(arr[tt].begin(), arr[tt].end());
        
        int lo = 0;
        int hi = n[tt]-1;

        pair<int,int> ans;
        int diff = numeric_limits<int>::max();

        // two pointer
        while(lo<hi){

            int s = arr[tt][lo] + arr[tt][hi];

            if(s==summ){
                if(abs(arr[tt][lo] - arr[tt][hi])<diff){
                    ans.first = min(arr[tt][lo], arr[tt][hi]);
                    ans.second = max(arr[tt][hi], arr[tt][lo]);
                }
                lo++; hi--;
            }
            else if(s>summ) hi--;
            else lo++;

        }

        cout << "Peter should buy books whose prices are " << ans.first <<" and " << ans.second << "." << endl;

        /**if(t) **/cout << endl;  // I don't know what's their problem, else presentation error
        tt++;
    }

    return 0;
}
