#include <iostream>
#include <algorithm>
#include <array>

#define N 5

bool comparator(int a, int b)
{
    return a > b;
}

int main()
{
    void displayArray(std::array<int, N> &);

    std::array<int, N> arr{3, 2, 4, 1, 5};
    displayArray(arr);

    // initial sort function
    std::cout << "Sorting in increasing order we have our array as\n";
    std::sort(arr.begin(), arr.end());
    displayArray(arr);

    // re-initialise
    arr = {3, 2, 4, 1, 5};
    std::cout << "Sorting in decreasing order we have our array as\n";
    std::sort(arr.begin(), arr.end(), comparator);
    displayArray(arr);
    return 0;
}

void displayArray(std::array<int, N> &array)
{
    for (auto it = array.begin(); it != array.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}