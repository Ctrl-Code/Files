// ctrl-code 2019-apr-27 1126 am ist

// demonstrating swapping of two numbers without using auxiliary space

#include<iostream>

using std::cout;
using std::endl;

int main(){
    
    // input
    int a=5, b=10;

    // swapping
    a = a+b, b=a-b, a=a-b;

    // output
    cout<<"a is now "<<a<<endl<<"b is now "<<b<<endl;
    return 0;
}
