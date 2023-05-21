#include <bits/stdc++.h>
using namespace std;
#define int int64_t

/**
 * 
 * 
 * 9xZER0
 * 
 **/

int32_t main()
{
    ios::sync_with_stdio(false) ; cin.tie(0) ; 
    
    int t, tt=1; cin>>t;
    while(t--){

        int n; cin>>n;

        
        int lo = 1;
        int hi = n;

        int ans;

        while(1){

            int mid = lo + (hi-lo)/2;

            cout << "Test ";
            if((hi-lo)&1){
                for(int i=lo;i<= mid;i++) cout << i << " ";
                for(int i=mid+1;i<=hi;i++) cout << i << " ";
                cout << endl;
            }
            else if(((hi-lo)%2==0) && (hi-lo!=0) ){
                for(int i=lo+1;i<=mid;i++) cout << i << " ";
                for(int i=mid+1;i<=hi;i++) cout << i << " ";
                cout << endl;
            }
            else cout << lo << " " << hi << endl;

            int resp; cin>>resp;

            if(resp==0){
                 ans = mid; break;
            }
            else if(resp==-1){
                lo = mid+1;
            }
            else hi= mid;
        }

        cout << "Answer " << ans << endl; 
    }
    return 0;
}
