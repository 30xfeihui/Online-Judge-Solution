#include <bits/stdc++.h>
using namespace std;
#define int int64_t
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

/**
 * https://codeforces.com/gym/102951/problem/B
**/

int32_t main()
{
    ios::sync_with_stdio(false) ; cin.tie(0) ;

    int n, x; cin >> n>>x;
	vector<int> arr(n), summ(n+1);

	for(auto &i: arr) cin>>i;

	// prefix_sum
	sort(arr.begin(), arr.end());
	partial_sum(arr.begin(), arr.end(), summ.begin()+1);


	int ans = 0;
	int lo = 0;
	int hi = n;
	
	// binary search
	while(lo<=hi){
	
	    int mid = lo+(hi-lo)/2;
	
	    if(summ[mid]>x) hi = mid-1;
	
	    else ans = mid, lo = mid+1;
	}


	cout << ans << endl;

    return 0;
}