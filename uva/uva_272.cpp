#include <bits/stdc++.h>
using namespace std;

int main()
{

    int c=0;
    char input;

    while(scanf("%c",&input)!=EOF){
        if(input=='"' && !(c%2)){ printf("``"); c+=1;}
        else if(input=='"' && (c%2)) { printf("''"); c+=1;}
        else printf("%c",input);
    }
    //printf("\n");

    return 0;
}