// ctrl-code: 2020/06/12 [10:06]

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

    // fn declaration
    void BubbleSort(int *, int);
    BubbleSort(arr, totalElements);

    return 0;
}

void BubbleSort(int *array, int n)
{
    void printArray(int *, int);

    for (int i = 0; i != (n - 1) - 1; ++i)
    {
        // we will swap accordingly
        for (int j = 0; j != (n - 1) - i; ++j)
        {
            if (array[j] > array[j + 1])
            {
                std::swap(array[j], array[j + 1]);
            }
        }
    }

    std::cout << "Printing the array" << std::endl;
    printArray(array, n);
}

void printArray(int *arr, int size)
{
    for (int i = 0; i != size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}