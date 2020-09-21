
 #include <cstdio>
#include <iostream>

using namespace std;

int main(void)
{
    long long int a,b;

    while (~scanf("%lld%lld",&a,&b)){
        if ((b/a)<((double)b/a)){
            long long s;
            s = (b/a)+1;
            printf("%lld\n",s);
        }
        else
            printf("%lld\n",b/a);
    }

    return 0;
}
