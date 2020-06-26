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
    void selectionSort(int *, int);
    selectionSort(arr, totalElements);

    return 0;
}

void selectionSort(int *array, int n)
{
    std::cout << "Displaying the array" << std::endl;

    int min;
    for (int i = 0; i != n - 1; ++i)
    {
        // we will keep tab of minimum index for swapping
        min = i;
        for (int j = i + 1; j != n; ++j){
            if(array[j]<array[min])
                min=j;
            
            // min is not i swap
            if(min != i)
            std::swap(array[i], array[min]);
        }
    }

    // display
    for (int i = 0; i != n; ++i)
    {
        std::cout << array[i] << " | ";
    }

    std::cout << std::endl;
}