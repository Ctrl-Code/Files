// ctrl-code: 2007282049

#include <iostream>

void printPattern(int i, int rows)
{
    // print spaces
    int spaces = rows - i;
    while (spaces)
    {
        std::cout << "\t";
        --spaces;
    }

    // increasing sequence
    int terms = 0;
    for (int j = i; terms != i; ++j)
    {
        std::cout << j << "\t";
        ++terms;
    }

    // decreasing sequence; past the height
    --terms;
    for (int j = terms * 2; terms; --j)
    {
        std::cout << j << "\t";
        --terms;
    }

    std::cout << std::endl;
}

int main()
{
    int rows = 0;
    std::cin >> rows;

    for (int i = 1; i <= rows; ++i)
        printPattern(i, rows);

    return 0;
}