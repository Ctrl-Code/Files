#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a;
    cout<<"Performing insertion"<<endl;
    for(int i=0;i!=5;++i){
        a.push_back((i+1)*10);
    }
    cout<<"Displaying the vector"<<endl;
    for(int i=0;i!=5;++i)
    {
        cout<<a.at(i)<<endl;
    }
    
    // displaying the size of vector
    cout<<"Size is "<<a.size()<<endl;

    // displaying the capacity of vector
    cout<<"Capacity is "<<a.capacity()<<endl;
    return 0;
}