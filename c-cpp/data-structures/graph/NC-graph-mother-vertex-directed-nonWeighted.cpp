#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"enter the no of nodes\n";
    int nodes;
    cin>>nodes;
    vector<int> graph[nodes];
    cout<<endl;

    cout<<"enter the number of edges"<<endl;
    int edges;
    cin>>edges;
    cout<<endl;

    cout<<"enter the node pairs for the directed graph"<<endl;
    int node1,node2;

    for(int i=0; i!=edges; ++i){
        cin>>node1>>node2;
        // adjacency list from node1 to node2
        graph[node1-1].push_back(node2-1);
    }

    // first of all perform dfs search
    return 0;
}