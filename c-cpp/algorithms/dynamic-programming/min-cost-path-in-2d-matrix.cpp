#include<iostream>
using namespace std;
#define N 10

int matrix[N][N] = {0};
int cache[N][N] = {0};

int main(){
    cout<<"enter the rows and columns of the matrix\n";
    int rows,cols;
    cin>>rows>>cols;    // <=== INPUT rows, cols
    
    cout<<endl<<"enter the cost matrix"<<endl;
    for(int i=0;i!=rows;++i)
        for(int j=0;j!=cols;++j){
            cin>>matrix[i][j]; // <=== INPUT matrix[rows][cols]
        }

    cache[0][0] = matrix[0][0];

    cout<<"enter the destination coordinates to find the cost\n";
    int i,j;
    cin>>i>>j; // <=== INPUT destination coordinates i, j (normal [1-10][1-10])
    
    int cost(int,int);
    cout<<cost(i-1,j-1)<<endl;

    return 0;
}

int cost(int i,int j){
    if(i==0 && j==0)
        return cache[0][0];
    else if(i==0)
        return cache[0][j] = cost(0,j-1) + matrix[0][j];
    else if(j==0)
        return cache[i][0] = cost(i-1,0) + matrix[i][0];
    else if(int x = cache[i][j])
        return x;
        
    return cache[i][j] = min(cost(i-1,j), min(cost(i,j-1), cost(i-1,j-1))) + matrix[i][j]; 
}