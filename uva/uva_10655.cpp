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

const int sizee = 2;
struct Matrix{
	int mat[sizee][sizee] = {0};
};

Matrix multiply(Matrix a, Matrix b){

	Matrix ans;
	
	for(int i=0;i<sizee;i++){
		for(int k=0;k<sizee;k++){

			if(a.mat[i][k]==0) continue;

			for(int j=0;j<sizee;j++){
				ans.mat[i][j] += a.mat[i][k] * b.mat[k][j];
			}

		}
	}


	return ans;

}

Matrix expo(Matrix base, int power){
	Matrix ans;
	for(int i=0;i<sizee;i++)
		for(int j=0;j<sizee;j++)
			ans.mat[i][j] = (i==j); // I matrix

	while(power){
		if(power&1ll) ans = multiply(ans, base);
		base = multiply(base, base);

		power = power>>1ll;
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
 * a.mat[0][0] = 1; a.mat[0][1] = 1; a.mat[1][0] = 1; a.mat[1][1] = 0;
 * int power = 3; // 0 based index
 * ans = expo(a, power);
 * f0, f1 based
 * int value = modd(ans.mat[1][0]*f1) + modd(ans.mat[1][1]*f0);
 * value = modd(value);
 **/

int32_t main()
{
    ios::sync_with_stdio(false) ; cin.tie(0) ;

	int p,q,n;

	while(cin >> p>>q>>n){
		
		// if(p==0 && q==0) break; Wrong Answer For this, otherwise accepted :)

		Matrix a, ans;
		a.mat[0][0] = p; a.mat[0][1] = -q;
		a.mat[1][0] = 1ll; a.mat[1][1] = 0ll;

		int x1 = p;
		int x0 = 2ll;

		ans = expo(a, n);
		int value;

		if(n==0) value = 2;
		else if(n==1) value = x1;
		else value = ans.mat[1][0]*x1 + ans.mat[1][1]*x0;

		cout << value << endl;
	}

    return 0;
}