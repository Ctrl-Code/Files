#include<iostream>
using namespace std;

int main(){
    bool graph[10][10]={0};
    int nodes,edges,node1,node2;
    cout<<"non-unidirectional & non weighted graph\n";

    // input
    cout<<"enter total nodes"<<endl;
    cin>>nodes;
    cout<<"\nenter the edges"<<endl;
    cin>>edges;
    cout<<"\nenter the pair wise values representing edge between nodes"<<endl;
    for(int i=0;i!=edges;++i){
        cout<<"enter the details for edge "<<i+1<<" of "<<edges<<endl;
        cin>>node1>>node2;
        cout<<endl;
        
        // setting the edge to be 1 in adjacency matrix
        graph[node1-1][node2-1] = graph[node2-1][node1-1] = 1;
    }

    // displaying the graph
    cout<<"Displaying the graph"<<endl;
    for(int i=0;i!=nodes;++i){
        for(int j=0;j!=nodes;++j)
            cout<<graph[i][j]<<" ";
        cout<<endl;
    }

    // displaying the stats
    cout<<"\nDisplaying the stats"<<endl;
    
    // edges having no weight in them
    // upper right traiangle used
    cout<<"Nodes having no edges between them\n";
    for(int i=0;i!=nodes;++i){
        for(int j=i+1;j!=nodes;++j)
        if(graph[i][j] == 0)
            cout<<i+1<<" "<<j+1<<endl;
    }

    return 0;
}