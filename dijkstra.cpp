#include <iostream>
using namespace std;

int dijkstra(int graph[5][5], int start, int end)
{
    int distance[5];
    bool visited[5];
    int count, mindistance, nextnode, i, j;
    for (i = 0; i < 5; i++)
    {
        distance[i] = 999;
        visited[i] = false;
    }
    distance[start] = 0;
    for (count = 0; count < 5; count++)
    {
        mindistance = 999;
        for (i = 0; i < 5; i++)
        {
            if (distance[i] < mindistance && !visited[i])
            {
                mindistance = distance[i];
                nextnode = i;
            }
        }
        visited[nextnode] = true;
        for (i = 0; i < 5; i++)
        {
            if (!visited[i])
            {
                if (mindistance + graph[nextnode][i] < distance[i])
                {
                    distance[i] = mindistance + graph[nextnode][i];
                }
            }
        }
    }
    return distance[end];
}

int main()
{
    int graph[5][5] = {
        {0, 1, 2, 3, 4},
        {1, 0, 5, 6, 7},
        {2, 5, 0, 8, 9},
        {3, 6, 8, 0, 10},
        {4, 7, 9, 10, 0}};
    cout << dijkstra(graph, 0, 4) << endl;
    return 0;
}
