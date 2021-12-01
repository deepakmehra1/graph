
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void addedge(vector<int> graph[], int x, int y)
{
    graph[x].push_back(y);
    graph[y].push_back(x);
}

void bfs(vector<int> graph[], int start)
{
    vector<bool> visited(graph->size(), false);
    queue<int> q;
    q.push(start);
    visited[start] = true;
    while (!q.empty())
    {
        int vr = q.front();
        cout << vr << " ";
        q.pop();
        for (auto i = graph[vr].begin(); i != graph[vr].end(); i++)
        {
            if (!visited[*i])
            {
                q.push(*i);
                visited[*i] = true;
            }
        }
    }
}

int main()
{
    int v=7;
    vector<int> graph[v];

    addedge(graph, 0, 1);
    addedge(graph, 0, 3);
    addedge(graph, 1, 2);
    addedge(graph, 2, 3);
    addedge(graph, 2, 6);
    addedge(graph, 3, 4);
    addedge(graph, 4, 5);
    addedge(graph, 5, 6);

    cout << "breadth first traversal starting from node 0 : " << endl;
    bfs(graph, 0);

    return 0;
}
