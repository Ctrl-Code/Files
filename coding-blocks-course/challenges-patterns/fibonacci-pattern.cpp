// ctrl-code: 2007270932

#include <iostream>

int main()
{
    int first = 1, second = 1, temp = 0;
    int rows = 0;
    std::cin >> rows;
    if (rows == 1)
    {
        std::cout << "0";
    }
    else
    {
        std::cout << "0\n1 1\n";
        for (int i = 3; i <= rows; ++i)
        {   
            for (int rowElements = 1; rowElements <= i; ++rowElements)
            {
                temp = first + second;
                std::cout << first + second << " ";
                first = second;
                second = temp;
            }
            std::cout << std::endl;
        }
    }
    return 0;
}