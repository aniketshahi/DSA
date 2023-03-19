#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;
const int N = 105;

int n, m;       // number of nodes and edges
int dist[N][N]; // dist[i][j] stores the shortest distance from node i to node j

void floyd_warshall()
{
    // initialize dist matrix with edge weights
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            dist[i][j] = (i == j ? 0 : INF);
        }
    }
    for (int i = 1; i <= m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w; // input edge (u, v) with weight w
        dist[u][v] = w;
    }

    // update dist matrix with shortest paths
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    floyd_warshall();

    // output shortest distances
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (dist[i][j] == INF)
            {
                cout << "INF ";
            }
            else
            {
                cout << dist[i][j] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
