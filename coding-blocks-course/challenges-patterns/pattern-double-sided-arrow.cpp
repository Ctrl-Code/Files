// ctrl-code: 2007282142

#include <iostream>

void printPattern(int rowNumber, int maxValue)
{
    // spaces of 4 in the beginning
    for (int i = 0; i != (maxValue - rowNumber); ++i)
        std::cout << "    ";

    // decreasing sequence
    for (int i = rowNumber; i > 0; --i)
    {
        std::cout << i << " ";
    }

    // spaces (set of 2)
    int spacesRequired = ((rowNumber - 1) * 2) - 1;
    while (spacesRequired > 0)
    {
        std::cout << "  ";
        --spacesRequired;
    }

    // increasing sequence
    if (rowNumber != 1)
        for (int i = 1; i <= rowNumber; ++i)
        {
            std::cout << i << " ";
        }

    // newline
    std::cout << std::endl;
}

int main()
{
    int n;
    std::cin >> n;
    for (int i = 1; i <= n; ++i)
        if (i > (n / 2 + 1))
            printPattern(n - i + 1, (n / 2 + 1));
        else
            printPattern(i, (n / 2 + 1));
    return 0;
}