#include<bits/stdc++.h>
using namespace std;
int n;
pair<int, int> R[n];
typedef struct{
    int x;
    int y;
    int r;
}cir;
int welzl(int x, int y, int r) {
    if (n==1)
        return r;
}
    if P is empty or |R| ≥ 3:
        if |R| = 1:
            (we do this to support multisets with duplicate points)
            (we assume that a circle with a radius of zero can exist)
            p := R[0]
            return circle(p, 0)
        else if |R| = 2:
            (we do this to support multisets with duplicate points)
            (we use that the smallest circle between two points has a center at their midpoint)
            (and the segment that passes through them is a diameter of the circle)
            p0 := R[0]
            p1 := R[1]
            center := midpoint(p0, p1)
            diameter := distance(p0, p1)
            return circle(center, diameter / 2)
        else if the points of R are cocircular:
            return the ball they determine
        else:
            return undefined

    choose p in P (randomly and uniformly)
    D := welzl(P - { p }, R)
    if p is in D:
        return D
    return welzl(P - { p }, R ∪ { p })
int main() {
    scanf("%d", &n);
    for (int i=0;i<n;i++) {
        scanf("%d %d", &(R[i].first), &(R[i].second));
    }
    return 0;
}
