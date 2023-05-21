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
    string s;

    vector<pair<int, vector<string>>> arr(501);
    int i=0;

    while(cin>>n, n||0){
        arr[i].first = n;
        for(int j=0;j<n;j++) cin>>s, arr[i].second.emplace_back(s);
        i++;
    }                                                                                                                                                                                                    
    arr[i].first = 0;


    auto comp = [&](string a, string b){

        string a_ascii = a.substr(0,2);
        string b_ascii = b.substr(0,2);

        return a_ascii<b_ascii;

    };


    int size = i;
    for(i=0;i<size;i++) stable_sort(arr[i].second.begin(), arr[i].second.end(), comp);

    for(i=0;i<size;i++){

        for(auto j: arr[i].second) cout << j << endl;

        if(size-i>1) cout << endl;
    }
    return 0;
}