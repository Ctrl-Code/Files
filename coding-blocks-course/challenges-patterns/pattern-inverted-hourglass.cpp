// ctrl-code: 2007282308

#include <iostream>

void printPattern(int startValue, int termsPerSide, bool printZero = false)
{
    int terms = termsPerSide;
    int value = startValue;

    // lhs
    while (terms)
    {
        std::cout << value << " ";
        --terms;
        --value;
    }

    // spaces
    int spaces = (2 * startValue) + 1 - (2 * termsPerSide);
    // if zero is to be print => no spaces allowed
    if (printZero)
    {
        --spaces;
        std::cout << "0 ";
    }
    for (int i = 0; i != spaces; ++i)
        std::cout << "  ";

    // rhs
    ++value; // increment it from decremented value
    while (value <= startValue)
    {
        std::cout << value << " ";
        ++value;
    }

    std::cout << std::endl;
}

int main()
{
    int n;
    std::cin >> n;

    // first n rows
    for (int i = 1; i <= n; ++i)
        printPattern(n, i);

    // middle row with 0
    printPattern(n, n, true);

    // next n rows
    for (int i = n; i != 0; --i)
        printPattern(n, i);
    
    return 0;
}