#include <iostream>
#include <array>

int main()
{
    std::array<std::array<int, 3>, 5> arr;
    for (int i = 0; i != 5; ++i)
    {
        for (int j = 0; j != 5; ++j)
        {
            std::cout<<0<<" ";
        }
        std::cout<<std::endl;
    }
    std::cout<<arr.at(3).size()<<std::endl;
    return 0;
}