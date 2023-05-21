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

    string s, word; getline(cin,s);
    vector<string> title;
    stringstream stm(s);

    while(stm>>word){
        title.emplace_back(word);
    }
    unordered_map<string, int> mp;
    for(int i=0;i<title.size();i++) mp[title[i]] = i+1;

    int idx;


    auto comp = [&](vector<string> a, vector<string> b){

        return a[idx]<b[idx];

    };


    int n; cin>>n;
    cin.ignore();
    string ss;
    vector<vector<string>> arr(n);
    for(int i=0;i<n;i++){
        getline(cin,ss);
        
        stringstream stmm(ss);
        while(stmm>>word) arr[i].emplace_back(word);

    }


    int q; cin>>q;
    string sort_able;
    while(q--){
        cin>>sort_able;
        idx = mp[sort_able]-1;

        stable_sort(arr.begin(), arr.end(), comp);
        for(auto i: title) cout << i << " ";
        cout << endl;

        for(auto i: arr){
            for(auto j: i) cout << j << " ";
            cout << endl;
        }

        if(q>0) cout << endl << endl;
    }

    return 0;
}