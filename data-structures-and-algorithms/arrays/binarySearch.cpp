// ctrl-code: 2020/06/08 [08:36]

#include <iostream>

int main()
{
    int arr[100];
    int totalElements;
    std::cin >> totalElements;

    // array input
    for (int i = 0; i != totalElements; ++i)
    {
        std::cin >> arr[i];
    }

    // element to be searched
    int element;
    std::cin >> element;

    // fn declaration
    int binarySearch(int[], int, int, int);

    int result = binarySearch(arr, 0, totalElements - 1, element);

    std::cout << "Binary Search Result (position or -1 if not found) " << ((result == -1) ? -1 : (result + 1)) << std::endl;
    return 0;
}

int binarySearch(int array[], int start, int end, int element)
{
    int mid = (start + end) / 2;
    int iteration = 0;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (array[mid] == element)
        {
            return mid;
        }
        else
        {
            if (element < array[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        ++iteration;
    }
    return -1;
}