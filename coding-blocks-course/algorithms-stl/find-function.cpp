// to search the value in any container

#include <iostream>
#include <algorithm>
#include <array>
#include <iterator>

int main()
{

    std::array<int, 8> arr{3, 4, 5, 2, 8, 6, 2, 1};

    // (first address, last + 1 address, <search-value>) => iterator/ address
    int *it = std::find(arr.begin(), arr.end(), 5);

    // now inorder to find the index => subtract the first address;
    std::cout << it - arr.begin() << std::endl; // prints 2

    // searching the element which is not there
    it = std::find(arr.begin(), arr.end(), 9);
    std::cout << it - arr.begin() << std::endl; //print 8 (equal to array size)
    if ((it - arr.begin()) == arr.size())
        std::cout<<"element is not present"<<std::endl;

        return 0;
}