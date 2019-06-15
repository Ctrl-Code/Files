#include<bits/stdc++.h>
using namespace std;

int main(){

    cout<<"enter the matrix size"<<endl;
    int size;
    cin>>size; // <=== INPUT 2d matrix size eg 3 for 3x3 matrix.
    cout<<endl;

    int** createAndInitialise(int);
    int **ptr = createAndInitialise(size);

    cout<<"enter the coordinates of location .eg for row 3 col 2 type 3 2"<<endl;
    int i,j;
    cin>>i>>j;

    int calculateWays(int,int,int**);
    cout<<endl<<calculateWays(i-1,j-1,ptr)<<endl;

    void displayMatrix(int**,int);
    // displayMatrix(ptr,size);

    return 0;
}

int ** createAndInitialise(int len){

    // create and initialise the vector for row 0 and column 0 as 1
    //      since there is only 1 way to reach there
    int **cache = new int *[len];
    for(int i=0;i!=len;++i){
        *(cache+i) = new int[len];
        for(int j=0;j!=len;++j)
            *(*(cache+i)+j) = (j==0 || i==0 ) ? 1 : 0;
    }
    return cache;
    
}

int calculateWays(int i,int j,int **vec){
    if(i==0 && j==0)
        return 1;
    else if(i==0 || j==0)
            return 1;
    else
        return (*(*(vec+i)+j)) ? *(*(vec+i)+j) : *(*(vec+i)+j) = 
            calculateWays(i-1,j,vec) + calculateWays(i,j-1,vec);
}

void displayMatrix(int **arr,int size){
    cout<<endl<<"displaying the matrix created for finding it"<<endl;
    for(int i=0;i!=size;++i){
        for(int j=0;j!=size;++j)
            cout<<*(*(arr +i)+j)<<" ";
        cout<<endl;
    }

}
