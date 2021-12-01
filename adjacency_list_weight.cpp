
#include<iostream>
#include<vector>

using namespace std;

//v is no of vertices
#define v 5

void addedge(vector<pair<int,int>>graph[],int x,int y,int weight)
{
    graph[x].push_back(make_pair(y,weight));
}

int main()
{
    vector<pair<int,int>> graph[v];
    
    addedge(graph,0,1,1);
    addedge(graph,0,4,5);
    addedge(graph,1,1,2);
    addedge(graph,1,2,3);
    addedge(graph,1,3,4);
    addedge(graph,1,4,2);
    addedge(graph,3,2,2);
    addedge(graph,3,4,3);

    cout<<"adjacency list : "<<endl;
    for (int i = 0; i < v; i++)
    {
        cout<<i;

        for (int j = 0; j < graph[i].size(); j++)
        {
            cout<<"->"<<graph[i][j].first<<","<<graph[i][j].second;
        }
        cout<<endl;
        
    }
    return 0;
}
