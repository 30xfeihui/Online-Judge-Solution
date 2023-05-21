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

const int sizee = 2;
struct Matrix{
	int mat[sizee][sizee] = {0};
};

int modd(int a, int mod){
	return ((a%mod)+mod)%mod;
}

Matrix multiply(Matrix a, Matrix b, int mod){

	Matrix ans;
	
	for(int i=0;i<sizee;i++){
		for(int k=0;k<sizee;k++){

			if(a.mat[i][k]==0) continue;

			for(int j=0;j<sizee;j++){
				ans.mat[i][j] += modd(a.mat[i][k], mod) * modd(b.mat[k][j], mod);
				ans.mat[i][j] = modd(ans.mat[i][j], mod);
			}

		}
	}


	return ans;

}

Matrix expo(Matrix base, int power, int mod){
	Matrix ans;
	for(int i=0;i<sizee;i++)
		for(int j=0;j<sizee;j++)
			ans.mat[i][j] = (i==j); // I matrix

	while(power){
		if(power&1) ans = multiply(ans, base, mod);
		base = multiply(base, base, mod);

		power = power>>1;
	}

	return ans;
}

/**
 *
 * 2x2 fibonacci matrix (a)
 * [ 1 1
 *   1 0 ]
 * 
 * Matrix a, ans;
 * int power = 3; // 0 based index
 * ans = expo(a, power);
 **/

int32_t main()
{
    ios::sync_with_stdio(false) ; cin.tie(0) ;

    vector<int> power_two(21);
    power_two[0] = 1;
    for(int i=1;i<21;i++) power_two[i] = 2*power_two[i-1];

    int n,m;
    while(cin >> n>>m){
    	int f0=0, f1=1;
    	m = power_two[m]; // 2^m

	    Matrix a, ans;
		a.mat[0][0] = 1; a.mat[0][1] = 1;
		a.mat[1][0] = 1; a.mat[1][1] = 0;
		int power = n; // 0 based index

		ans = expo(a, power, m);
		
		int value = modd(ans.mat[1][0]*f1, m) + modd(ans.mat[1][1]*f0, m);
		value = modd(value, m);

		cout << value << endl;
    }


    return 0;
}
