#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; scanf("%d",&t);

    int tn=1;

    while(t--){

        vector<int> rel(10);
        vector<string> url(10);

        for(int i=0;i<10;i++)
            cin >> url[i] >> rel[i];

        int maxx = *max_element(rel.begin(),rel.end());

        printf("Case #%d:\n",tn++);
        for(int i=0;i<10;i++)
            if(rel[i]==maxx)
                cout << url[i] << "\n";
    }

    return 0;
}
