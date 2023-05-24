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

vector<int> humble;

void generate(){
    // prime factor is 2,3,5,7
    vector<int> prime{2,3,5,7};
    set<int> queue;

    for(auto i: prime) queue.insert(i);

    humble.emplace_back(1);
    while(humble.size()<5844){
        int first = *queue.begin();
        queue.erase(queue.begin());
        humble.emplace_back(first);

        for(auto i: prime) queue.insert(i*first);
    }
}

int32_t main()
{
    ios::sync_with_stdio(false) ; cin.tie(0) ;

    generate();

    int n;

    while(cin >> n, n||0){

        string tomo;

        if(n%10==1 && n%100!=11) tomo = "st";
        else if(n%10==2 && n%100!=12) tomo = "nd";
        else if(n%10==3 && n%100!=13) tomo = "rd";
        else tomo = "th";

        
        cout << "The " << n << tomo;
        cout << " humble number is ";
        cout << humble[n-1] << "." << endl;
    }
    return 0;
}
