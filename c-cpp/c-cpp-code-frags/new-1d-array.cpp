#include<iostream>
using namespace std;

int main(){
    
    // create a 1d array pointer
    int *ptr = new int[5];
    // array elements automatically initialised to 0

    // displaying the array
    for(int i=0;i!=5;++i)
        cout<<*(ptr+i)<<" ";
    
    cout<<endl;
    return 0;
}