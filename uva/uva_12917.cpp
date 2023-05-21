#include <bits/stdc++.h>
using namespace std;

int main()
{

    int p,h,o,real_object;
    while(scanf("%d %d %d",&p,&h,&o)==3){
        real_object = o-p;

        if(real_object>=h)
            printf("Props win!\n");
        else
            printf("Hunters win!\n");
    }

    return 0;
}