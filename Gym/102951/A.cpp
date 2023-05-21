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
 * https://codeforces.com/gym/102951/problem/A
**/

int distance(int x, int y){
	x = x*x;
	y = y*y;

	return x+y;
}

int32_t main()
{
    ios::sync_with_stdio(false) ; cin.tie(0) ;

    int n; cin >> n;
	vector<int> x(n), y(n);

	for(auto &i: x) cin>>i;
	for(auto &i: y) cin>>i;

	int ans = numeric_limits<int>::min();
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			
			int xx = x[i]-x[j];
			int yy = y[i]-y[j];

			ans = max(ans,distance(xx, yy));

		}
	}

	cout << ans << endl;
	
    return 0;
}