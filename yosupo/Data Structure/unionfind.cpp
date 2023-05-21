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

struct dsu {
	vector<int> e;
	int size_of_set;
	dsu(int N) { e = vector<int>(N+1, -1); size_of_set=N; }

	// get representive component (uses path compression)
	int get(int x) { return e[x] < 0 ? x : e[x] = get(e[x]); }

	bool same_set(int a, int b) { return get(a) == get(b); }

	int size(int x) { return -e[get(x)]; }

	int count() { return size_of_set; }

	bool unite(int x, int y) {  // union by size
		x = get(x), y = get(y);
		if (x == y) return false;
		if (e[x] > e[y]) swap(x, y);
		e[x] += e[y];
		e[y] = x;
		size_of_set--;
		return true;
	}
};

// dsu d(node_number);
// d.unite(u,v) :-> connect u&v ( add edge )
// d.same_set(u,v) :-> True if u&v are connected
// d.size(u)
// d.get(u)
// d.count() :-> number of connected component


int32_t main()
{
    ios::sync_with_stdio(false) ; cin.tie(0) ;

    int n, q; cin >> n>>q;
    dsu d(n);

    int a,b,c;
    while(q--){

    	cin >> a>>b>>c;

    	if(a){
    		cout << d.same_set(b,c) << endl;
    	}
    	else d.unite(b,c);

    }

    return 0;
}