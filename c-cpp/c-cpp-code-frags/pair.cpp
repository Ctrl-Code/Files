#include<bits/stdc++.h>
using namespace std;

int main(){
    pair <int,int> pr[5];
    for(int i=0;i!=5;++i){
        pr[i].first = (i+1)*10;
        pr[i].second = 1000-pr[i].first;
    }

    //Displaying the values
    cout<<"Displaying the values of array of pairs"<<endl;
    for(int i=0;i!=5;++i){
        cout<<"1st of pair "<<pr[i].first<<"\t";
        cout<<"2nd of pair "<<pr[i].second<<endl;
    }
    return 0;
}