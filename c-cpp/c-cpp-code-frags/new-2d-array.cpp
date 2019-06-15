#include<iostream>
using namespace std;

int main(){
    const int size = 5;
    
    // create array of pointers
    int **ptr = new int*[size];
    
    // create array for each array of pointers
    for(int i=0;i!=size;++i){
        *(ptr+i) = new int[size];
        // each array element initialises to 0 automatically;
    }

    // displaying the created array
    cout<<"accessing the elements using pointer arithmetic"<<endl;
    for(int i=0; i!=size; ++i){
        for(int j=0; j!=size; ++j)
            cout<<*(*(ptr+i)+j)<<" ";
        cout<<endl;
    }

    cout<<endl<<"accessing the elements using array notation"<<endl;
    for(int i=0; i!=size; ++i){
        for(int j=0; j!=size; ++j)
            cout<<ptr[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}