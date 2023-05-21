#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,tes=1; scanf("%d",&t);
    
    while(t--){
        int n,d,m; scanf("%d %d",&n,&m); n-=1;

        int high =0 ,low = 0;
        while(n--){
            scanf("%d",&d);
            if(d>m) high++;
            else if(d<m) low++;
            m = d;
        }

        printf("Case %d: %d %d\n",tes++,high,low);
    }
    return 0;
}
