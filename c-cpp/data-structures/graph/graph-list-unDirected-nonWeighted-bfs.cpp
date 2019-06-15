#include<bits/stdc++.h>
using namespace std;

int main(){
    int nodes,edges,node1,node2,root;
    cout<<"BFS Search for the undirected graph\n";

    // input
    cout<<"enter total nodes"<<endl;
    cin>>nodes;
    vector<int> graph[nodes];
    cout<<"\nenter the edges"<<endl;
    cin>>edges;
    cout<<"\nenter the pair wise values representing edge between nodes"<<endl;
    for(int i=0;i!=edges;++i){
        cout<<"enter the details for edge "<<i+1<<" of "<<edges<<endl;
        cin>>node1>>node2;
        cout<<endl;

        // setting the edge to be 1 in adjacency list
        graph[node1-1].push_back(node2-1), graph[node2-1].push_back(node1-1);
    }
    cout<<"\nenter the root node from where to start\t";
    cin>>root;
    cout<<endl;

    cout<<"the BFS for the graph with selected root is\n";

    // displaying the bfs order
    queue<int> que;
    bool arr[nodes]={0};
    que.push(root-1);
    arr[root-1] = 1;
    int index;
    while(!que.empty())
    {
        index = que.front();
        cout<<index+1<<" ";
        que.pop();
        for(int i=0;i!=graph[index].size();++i){
            if(arr[graph[index][i]] == 0){
                arr[graph[index][i]] = 1; // traveled with nodes
                que.push(graph[index][i]);
            }
        }
    }
    cout<<endl<<"DONE";
    return 0;
}