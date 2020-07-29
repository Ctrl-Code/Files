// ctrl-code: 2007282003

#include <iostream>

int main()
{
    int rows;
    std::cin >> rows;

    for (int i = 1; i <= rows; ++i)
    {
        int termsInRow = i;

        for (int j = i; termsInRow; --termsInRow)
        {
            if (termsInRow == 1 || termsInRow == i)
                std::cout << j << "\t";
            else
                std::cout << "0\t";
        }
        std::cout << std::endl;
    }

    return 0;
}