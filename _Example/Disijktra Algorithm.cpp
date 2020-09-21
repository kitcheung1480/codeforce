#include<bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f

class Graph {
    int V;
    list< pair<int, int> > *adj;
public:
    Graph(int V);
    void addEdge(int u, int v, int w);
    void shortestPath(int s);
};

Graph::Graph(int V) {
    this->V = V;
    adj = new list< pair<int, int> > [V];
}

void Graph::addEdge(int u, int v, int w) {
    adj[u].push_back(make_pair(v, w));
    adj[v].push_back(make_pair(u, w));
}

void Graph::shortestPath(int src, int trg) {
    priority_queue< pair<int, int>, vector < pair<int, int> > , greater< pair<int, int> > > pq;
    vector< pair<int, int> > rec;
    vector<int> dist(V, INF);
    pq.push(make_pair(0, src));
    dist[src] = 0;
    while (!pq.empty()) {
        int u = pq.top().second;
        if (u == trg) {
            while ()
        }
        else {
            rec.push_back(pq.top());
            pq.pop();
            list< pair<int, int> >::iterator i;
            for (i = adj[u].begin(); i != adj[u].end(); ++i) {
                int v = (*i).first;
                int weight = (*i).second;
                if (dist[v] > dist[u] + weight){
                    dist[v] = dist[u] + weight;
                    pq.push(make_pair(dist[v], v));
                }
            }
        }
    }
}

int main() {
    int V, src, trg;
    scanf("%d %d %d", &V, &src, &trg);
    Graph g(V);
    int u, v, w;
    do {
        scanf("%d %d %d", &u, &v, &w);
    }
    while (u|v|w);
    g.shortestPath(src, trg);
    return 0;
}
