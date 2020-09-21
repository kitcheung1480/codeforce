#include<bits/stdc++.h>
using namespace std;
int solve() {
    char path[100005];
    scanf(" %s", path);
    std::map<pair<pair<pair<int,int>,int>,int>,int> mymap;
    int x=0,y=0,dist=0;
    int len=strlen(path);
    for (int i=0;i<len;i++) {
        int a=x,b=y;
        if (path[i]=='N') y++;
        if (path[i]=='S') y--;
        if (path[i]=='E') x++;
        if (path[i]=='W') x--;
        if (mymap.find({{{a,b},x},y})==mymap.end()&&mymap.find({{{x,y},a},b})==mymap.end()) {
            mymap[{{{a,b},x},y}]=1;
            dist+=5;
        }
        else {
            dist++;
        }
    }
    printf("%d\n", dist);
    return 0;
}
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}
