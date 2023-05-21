#include <bits/stdc++.h>
using namespace std;
#define int int64_t
#define endl "\n"

/**
 * 
 * 
 * 9xZER0
 * 
 **/

vector<int> pre_sum(vector<int>& arr){
    vector<int> p_s(arr.size()+1);

    p_s[1] = arr[0];
    for(int i=1;i<arr.size();i++) p_s[i+1] = p_s[i]+arr[i];

    return p_s;

}

int32_t main()
{
    ios::sync_with_stdio(false) ; cin.tie(0) ;

    int n; cin>>n;

    unordered_map<int,int> mp;

    int a,b,c;
    while(n--){
        cin>>a>>b;

        if(a) cout<<mp[b]<<endl;
        else{
            cin>>c;
            mp[b] = c;
        }
    }
    return 0;
}