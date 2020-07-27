#include <iostream>

// implemented newLine => (compiler level change is made i.e. before compiling the thing is replaced)
#define newLine std::cout << std::endl;

int main()
{
    auto print = [](int val) {
        std::cout << val << " ";
    };

    // SAMPLE ARRAY WHICH IS INCREASING ROWWISE AS WELL AS COLUMN WISE
    int arr[4][4] = {1, 4, 8, 10, 2, 5, 9, 15, 6, 16, 18, 20, 11, 17, 19, 23};

    // printing the array
    std::cout << "Printing the sample array" << std::endl;
    for (int i = 0; i != 4; ++i)
    {
        for (int j = 0; j != 4; ++j)
        {
            print(arr[i][j]);
        }
        newLine;
    }

    newLine;

    int elementToBeSearched;
    std::cout << "Enter the element to be searched" << std::endl;
    std::cin >> elementToBeSearched;
    newLine;

    std::cout << "Printing the path traced to search the above sorted array" << std::endl;

    bool spiralSearch(int[][4], int, int, int);
    bool elementFoundStatus = spiralSearch(arr, 4, 4, elementToBeSearched);

    if (elementFoundStatus)
        std::cout << "Element " << elementToBeSearched << " found" << std::endl;
    else
        std::cout << "Element Not Found" << std::endl;

    return 0;
}

bool spiralSearch(int arr[][4], int row, int col, int ele)
{
    int i = 0, j = col - 1;
    while (i < row && j >= 0)
    {
        std::cout << "Element which is checked in array is " << arr[i][j] << std::endl;
        if (ele == arr[i][j])
            return true;
        else if (ele > arr[i][j])
            ++i;
        else
            --j;
    }
    return -1;
}