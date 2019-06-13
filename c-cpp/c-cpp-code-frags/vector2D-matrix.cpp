#include<bits/stdc++.h>
using namespace std;

int main(){
    int rows,count=0;
    cout<<"enter the size of matrix to be created\n";
    cin>>rows;
    vector<int> a[rows];
    
    // performing insertion on 2D vector
    cout<<"Performing insertion"<<endl;
    for(int i=0;i!=rows;++i){
        for(int j=0;j!=rows;++j)
            a[i].push_back(++count);
    }

    // displaying the 2D vector
    cout<<"Displaying the vector"<<endl;
    for(int i=0;i!=rows;++i){
        for(int j=0; j!=rows;++j)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}