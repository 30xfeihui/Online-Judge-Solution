#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; scanf("%d",&t);
    while(t--){
        int farmyard,eco_friendly;
        int n, ans = 0; scanf("%d",&n);

        while(n--){
            scanf("%d %*d %d",&farmyard,&eco_friendly);
            ans += (farmyard*eco_friendly);
        }
    
        printf("%d\n",ans); 
    }

    return 0;
}
