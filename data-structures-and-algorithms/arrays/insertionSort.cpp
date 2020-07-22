// ctrl-code: 2020/06/23 [11:23]

#include <iostream>

int main()
{
    // fn declaration
    void insertionSort(int *, int);
    void printArray(int *, int);

    int arr[100];
    int totalElements;
    std::cin >> totalElements;

    // array input
    for (int i = 0; i != totalElements; ++i)
    {
        std::cin >> arr[i];
    }

    std::cout << "Initial Array is" << std::endl;
    printArray(arr, totalElements);
    std::cout<<std::endl;

    insertionSort(arr, totalElements);

    return 0;
}

void insertionSort(int *array, int n)
{
    // fn declaration
    void printArray(int *, int);

    for (int i = 1; i != n; ++i)
    {
        int temp = array[i];

        for (int j = i - 1; j != -1; --j)
        {
            std::cout << "the values of i and j are " << i << " " << j << " ";
            if (temp < array[j])
            {
                array[j + 1] = array[j];

                if (j == 0)
                    array[0] = temp;
                printArray(array, n);
            }

            else
            {
                array[j+1] = temp;
                printArray(array, n);
                break;
            }
        }
        std::cout << std::endl;
    }
    std::cout << std::endl
              << "FINAL OUTPUT IS" << std::endl;
    printArray(array, n);
}

// print array
void printArray(int *array, int length)
{
    std::cout << "Printing the array ";
    for (int i = 0; i != length; ++i)
        std::cout << array[i] << " ";
    std::cout << std::endl;
}