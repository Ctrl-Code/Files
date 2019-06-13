#include<bits/stdc++.h>
using namespace std;

int main(){
    queue <int> q;
    cout<<"checking if queue empty "<<q.empty()<<endl;
    
    // inserting elements in the queue
    cout<<"inserting elements in the queue"<<endl;
    for(int i=0;i!=5;++i)
        q.push((i+1)*10);

    // displaying list
    for(int j=0;j!=5;++j){
        cout<<"checking if queue empty "<<q.empty()<<endl;
        cout<<q.front()<<endl;
        q.pop();
    }

    cout<<"checking if queue empty "<<q.empty()<<endl;
    return 0;
}