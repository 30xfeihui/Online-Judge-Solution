#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,y1,y2; scanf("%d",&t);

    while(t--){
        scanf("%d",&n);

        map<int,int> condition;

        for(int i=0;i<n;i++){
            scanf("%d %d",&y1,&y2);
            condition[y1-y2]+=1;
        }
        if(condition.size()==1) printf("yes\n");
        else printf("no\n");
        if(t) printf("\n");

    }
    return 0;
}


/**
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,y1,y2; scanf("%d",&t);

    while(t--){
        scanf("%d",&n);

        map<int,int> condition;

        for(int i=0;i<n;i++){
            scanf("%d %d",&y1,&y2);
            condition[y1-y2]+=1;
        }
        if(condition.size()==1) printf("yes\n");
        else printf("no\n");
        if(t) printf("\n");

    }
    return 0;
}
**/