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
    
    int t = 1500-1;
    map<int,int> mp;
    priority_queue<int> pq;

    pq.push(-1);
    mp[-1]=1;

    while(t--){
        if(!mp[pq.top()*2]){
            mp[pq.top()*2]=1;
            pq.push(pq.top()*2);
        }
        if(!mp[pq.top()*3]){
            mp[pq.top()*3]=1;
            pq.push(pq.top()*3);
        }
        if(!mp[pq.top()*5]){
            mp[pq.top()*5]=1;
            pq.push(pq.top()*5);
        }
        pq.pop();
    }
    cout << "The 1500\'th ugly number is " << pq.top()*-1 <<'.'<<endl;

    return 0;
}
 