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
    
    auto comp = [&](pair<string, int> a, pair<string, int> b){
        if(a.second==b.second) return a.first<b.first;

        return a.second>b.second;
    };

    auto word = [&](string s){
        string word;
        istringstream stm(s);
        string number = "";

        while(getline(stm, word, '-')){
            if(word=="upper")
                number += "3";
            else if(word=="middle")
                number += "2";
            if(word=="lower")
                number += "1";
        }
        reverse(number.begin(), number.end());
        while(number.length()!=10) number+="2";
        return (int)stoll(number);
    };

    int t, tt=1; cin>>t;
    
    while(t--){

        int n; cin>>n;
        vector<pair<string, int>> arr(n);
        cin.ignore();
        string s1,s2,s3;

        for(int i=0;i<n;i++){
            cin>>s1>>s2>>s3;

            arr[i].first = s1.substr(0,s1.size()-1);
            arr[i].second = word(s2);
        }
        
        sort(arr.begin(), arr.end(), comp);

        for(auto i: arr)
            cout << i.first << endl;

        cout << "==============================" << endl;
    }
    return 0;
}
 