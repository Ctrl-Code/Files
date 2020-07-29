// ctrl-code: 2007272210

#include <iostream>

int main()
{
    int rows;
    std::cin >> rows;

    int width = (2 * rows) - 1, blanks;

    for (int i = 1; i <= rows; ++i)
    {
        blanks = width - (2 * i);

        for (int j = 1; j <= i; ++j)
        {
            std::cout << j << "\t";
        }

        while (blanks > 0)
        {
            std::cout << "\t";
            --blanks;
        }

        for (int j = i - (i == rows ? 1 : 0); j >= 1; --j)
        {
            std::cout << j << "\t";
        }

        std::cout << std::endl;
    }

    return 0;
}