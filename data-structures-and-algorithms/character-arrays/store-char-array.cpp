#include <iostream>


int main()
{
    char arr[100];
    int n;
    std::cin>>n;
    
    // for flushing the input buffers. If not used '\n' with the input above is used as 1st char string
    // std::cin.get();

    for(int i=0;i!=n;++i){
        std::cin.getline(arr,100);
        std::cout<<arr<<std::endl;
    }
    return 0;
}