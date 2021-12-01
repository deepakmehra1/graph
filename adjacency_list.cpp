
#include<iostream>
#include<vector>

using namespace std;

//v is no of vertices
#define v 5

void addedge(vector<int>graph[],int x,int y)
{
    graph[x].push_back(y);
}

int main()
{
    vector<int> graph[v];
    
    addedge(graph,0,1);
    addedge(graph,0,4);
    addedge(graph,1,1);
    addedge(graph,1,2);
    addedge(graph,1,3);
    addedge(graph,1,4);
    addedge(graph,3,2);
    addedge(graph,3,4);

    cout<<"adjacency list : "<<endl;
    for (int i = 0; i < v; i++)
    {
        cout<<i;

        for (int j = 0; j < graph[i].size(); j++)
        {
            cout<<"->"<<graph[i][j]<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}
