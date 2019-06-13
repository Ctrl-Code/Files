#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> graph[10];
    int nodes,edges,node1,node2;
    cout<<"non-unidirectional & non weighted graph by adjacency list\n";

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

        // setting the edge to be 1 in adjacency list
        graph[node1-1].push_back(node2-1), graph[node2-1].push_back(node1-1);
    }

    // displaying the graph
    cout<<"Displaying the graph in list form"<<endl;
    for(int i=0;i!=nodes;++i){
        cout<<"node "<<i+1<<" is connected to ==>";
        for(int j=0;j!=graph[i].size();++j)
            cout<<graph[i][j]+1<<"-->";
        cout<<"null"<<endl;
    }

    // displaying the stats
    cout<<"\nDisplaying the stats"<<endl;
    
    // NOTE: for getting preferable result convert into matrix then apply the
    //      solution over right upper half.
    int arr[10];
    cout<<"Nodes having no edges between them\n";
    for(int i=0;i!=nodes;++i){
        cout<<"node "<<i+1<<" is not connected to ";
        int arr[10] = {0};
        arr[i] = 1;
        for(int j = 0 ; j!= graph[i].size();++j)
            arr[graph[i][j]] = 1;
        for(int j=0; j!=nodes;++j){
            if(!arr[j])
                cout<<j+1<<" ";
        }
        cout<<endl;
    }
    cout<<"above is not efficient way..rather convert to matrix then show\n";

    return 0;
}