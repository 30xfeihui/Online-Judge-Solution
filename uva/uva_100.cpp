#include <bits/stdc++.h>
using namespace std;

int counter(int n){
    int count = 1;

    while(n!=1){
        count++;
        if(n%2==0) n/=2;
        else n = (n*3)+1;

        if(n==1) break;
    }
    return count;

}

int main() {
    int a,b;

    while(scanf("%d %d",&a,&b)!=EOF){
        cout << a << " " << b << " " ;
        if(a>b){
            int temp = a;
            a = b;
            b = temp;
        }
        int max = 0, count=0;

        for(int i=a;i<=b;i++){
            count = counter(i);
            if (count > max) max = count;
        }

        cout << max << endl;
    }
}