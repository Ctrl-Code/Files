// ctrl-code: 2007282328

#include <iostream>

void printPattern(int n)
{
    int mid = (n + 1) / 2, midMidLines = (n - 3) / 2;

    // 1st line
    for (int i = 1; i <= n; ++i)
    {
        if (i == 1 || (i >= mid))
            std::cout << "*";
        else
            std::cout << " ";
    }
    std::cout << std::endl;

    // upper half section between mid and first line
    for (int j = midMidLines; j; --j)
    {
        for (int i = 1; i <= n; ++i)
        {
            if (i == 1 || i == mid)
                std::cout << "*";
            else
                std::cout << " ";
        }
        std::cout<<std::endl;
    }

    // mid line
    for (int i = 0; i != n; ++i)
        std::cout << "*";
    std::cout << std::endl;

    // lower half section between mid and last line
    for (int j = midMidLines; j; --j)
    {
        for (int i = 1; i <= n; ++i)
        {
            if (i == n || i == mid)
                std::cout << "*";
            else
                std::cout << " ";
        }
        std::cout<<std::endl;
    }

    // nth line
    for (int i = 1; i <= n; ++i)
    {
        if (i <= mid || i == n)
            std::cout << "*";
        else
            std::cout << " ";
    }
    std::cout << std::endl;
}

int main()
{
    int n;
    std::cin >> n;
    printPattern(n);
    return 0;
}