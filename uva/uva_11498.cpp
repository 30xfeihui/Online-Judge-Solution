#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k,x,y,n,m;

    while(scanf("%d",&k),k||0){
        scanf("%d %d",&n,&m);

        while(k--){
            scanf("%d %d",&x,&y);

            if(x==n || x==(-1*n) || y==m || y==(-1*m))
                printf("divisa\n");
            else if(x>n && y>m)
                printf("NE\n");
            else if(x<n && y<m)
                printf("SO\n");
            else if(x>n && y<m)
                printf("SE\n");
            else if(x<n && y>m)
                printf("NO\n");
        }
    }
    

    return 0;
}