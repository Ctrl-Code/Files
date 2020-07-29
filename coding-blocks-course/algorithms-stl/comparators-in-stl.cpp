// how to accept functions as parameter

#include <iostream>
#include <array>

int main()
{

    // functiond declarations
    void displayArray(std::array<int, 5> &);
    void bubble_sort(std::array<int, 5> &, int, bool (&)(int, int));
    bool comparator(int, int);

    std::array<int, 5> arr{4, 2, 3, 5, 1};

    // applying the bubble sort
    std::cout << "Applying the bubble sort algorithm on it to sort\n";

    for (int i = 0; i != arr.size(); ++i)
    {
        bubble_sort(arr, i, comparator);
    }

    displayArray(arr);
    return 0;
}

void displayArray(std::array<int, 5> &array)
{
    for (int i = 0; i != array.size(); ++i)
        std::cout << array.at(i) << " ";
    std::cout << std::endl;
}

void bubble_sort(std::array<int, 5> &array, int limit, bool (&compare)(int a, int b))
{
    for (int i = 0; i < (array.size() - 1 - limit); ++i)
    {
        if (compare(array.at(i), array.at(i + 1)))
        {
            int temp = array.at(i);
            array.at(i) = array.at(i + 1);
            array.at(i + 1) = temp;
        }
    }
}

bool comparator(int a, int b)
{
    return a < b;
}