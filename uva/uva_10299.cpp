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

bool bs[100000005];
vector<int> primes;

void sieve(){
    int size = 10000000;
    bs[0]=bs[1]=1;
    for(int i=3;i*i<size;i+=2)
        if(!bs[i]){
            for(int j=i*i;j<size;j+=i)
                bs[j]=1;
        }

    primes.emplace_back(2);
    for(int i=3;i<10000000;i+=2)
        if(!bs[i]){
            primes.emplace_back(i);
        }
}

int32_t main()
{
	sieve();
    ios::sync_with_stdio(false) ; cin.tie(0) ;

	int n;

	while(cin >> n, n||0){

		int k = 0, ans = n;
		
		if(n==1) ans = 0;
		else{
			while(primes[k]*primes[k]<=n){ //n
		       
			    if(n%primes[k]==0) ans -= ans/primes[k];
			    while(n%primes[k]==0){     //n
			        n/=primes[k];          //n
			    }
			    k++;
			}
			if(n!=1) ans -= ans/n;            //n
		}
		
		cout << ans << endl; 

	}  

    return 0;
}
