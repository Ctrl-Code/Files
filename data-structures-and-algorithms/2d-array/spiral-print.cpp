#include <iostream>

// re = row end, ce = column end, rs = row start, cs = column start
void printSpiralArray(int arr[][10], int re, int ce)
{
    --re, --ce;

    // print element and give space
    auto printElement = [](int val) {
        std::cout << val << " ";
    };

    int rs = 0, cs = 0;

    while (rs<=re && cs<=ce)
    {
        // top row
        for (int j = cs; j <= ce; ++j)
        {
            printElement(arr[rs][j]);
        }
        ++rs;

        // right col
        for (int i = rs; i <= re; ++i)
        {
            printElement(arr[i][ce]);
        }
        --ce;

        // end row
        for (int j = ce; j >= cs; --j)
        {
            printElement(arr[re][j]);
        }
        --re;

        // left column
        for (int i = re; i >= rs; --i)
        {
            printElement(arr[i][cs]);
        }
        ++cs;
    }
}

int main()
{
    int arr[10][10];

    // input rows and columns
    int row, col;
    std::cin >> row >> col;

    // input the array
    for (int i = 0; i != row; ++i)
    {
        for (int j = 0; j != col; ++j)
        {
            std::cin >> arr[i][j];
        }
    }

    printSpiralArray(arr, row, col);

    std::cout<<std::endl;

    return 0;
}