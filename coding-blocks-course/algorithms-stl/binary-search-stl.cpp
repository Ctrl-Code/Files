// program to find the occurence of an element in case of sorted array
// using inbuilt binary_search, lower_bound and upper_bound in O(log n)

#include <iostream>
#include <algorithm>
#include <array>

int main()
{
    std::array<int, 11> arr{1, 2, 3, 4, 4, 4, 5, 6, 7, 8, 9};

    int key;
    std::cout << "Enter the element to be searched for in the array ";
    std::cin >> key;

    // since sorted. Hence applying binary search (same params as find method)
    bool present = std::binary_search(arr.begin(), arr.end(), key); // bool 1 or 0
    if (present)
        std::cout << "element found\n";
    else
        std::cout << "element not found\n";

    // get the index of the element present
    // using lower_bound and upper_bound

    auto lb = std::lower_bound(arr.begin(), arr.end(), key);
    std::cout << "lower bound is " << lb - arr.begin() << std::endl; // return index of the element

    auto ub = std::upper_bound(arr.begin(), arr.end(), key);
    std::cout << "upper bound is " << ub - arr.begin() << std::endl; // return index of the element as well

    int lbIndex = lb - arr.begin();
    int ubIndex = ub - arr.begin();

    if (lbIndex == arr.size() || ubIndex == arr.size())
        std::cout << "Element is not found, hence frequency cannot be determined\n";

    else
        // to find the number of occurences
        std::cout << "The number of occurences/ frequency is " << ub - lb << std::endl;

    return 0;
}