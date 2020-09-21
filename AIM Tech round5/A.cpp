#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int n_dir[n]={}, m_dir[m]={};
    for (int i=0;i<n;i++) {
        scanf("%*c");
        for (int j=0;j<m;j++){
            char ch;
            scanf("%c",&ch);
            if (ch=='B'){
                n_dir[i]++;
                m_dir[j]++;
            }
        }
    }
    int x,y,a,b;
    for (int i=0;i<n;i++)
        if (n_dir[i]!=0) {
            a=n_dir[i];
            x=i;
            break;
        }
    for (int i=0;i<m;i++)
        if (m_dir[i]!=0) {
            b=m_dir[i];
            y=i;
            break;
        }
    printf("%d %d\n",x+b/2+1,y+a/2+1);
    return 0;
}
