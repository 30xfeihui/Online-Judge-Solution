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
    
    string s;

    while(cin>>s){
        list<char> ans;
        list<char>::iterator it;

        it = ans.end();

        for(auto &i: s){
            if(i=='['){
                it=ans.begin();
                continue;
            }
            if(i==']'){
                it=ans.end();
                continue;
            }
            else ans.insert(it,i);
        }

        for(auto i: ans) cout << i;
        cout << endl;
    }

    return 0;
}