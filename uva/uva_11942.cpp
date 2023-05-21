#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; scanf("%d",&t);
    printf("Lumberjacks:\n");

    while(t--){
        int acs = 0, dcs = 0;
        int previous,cur;
        scanf("%d",&previous);

        int n=9;
        while(n--){
            scanf("%d",&cur);
            if(cur>previous) acs++;
            else if(cur<previous) dcs++;
            previous = cur;
        }
        if(!acs || !dcs) printf("Ordered\n");
        else printf("Unordered\n");
    }    
    return 0;
}
