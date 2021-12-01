#include<iostream>

using namespace std;

//v is no of vertices
#define v 5

void addedge(int graph[][v],int x,int y)
{
    graph[x][y]=1;
}

int main()
{
    int graph[v][v]={0};
    
    addedge(graph,0,1);
    addedge(graph,0,4);
    addedge(graph,1,1);
    addedge(graph,1,2);
    addedge(graph,1,3);
    addedge(graph,1,4);
    addedge(graph,3,2);
    addedge(graph,3,4);

    cout<<"adjacency matrix : "<<endl;
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
}
