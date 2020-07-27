// ctrl-code: 2007251721

#include <iostream>
#include <cmath>

int main()
{

    int number;
    std::cin >> number;

    int octalNumber = 0, digits = 0;

    while (number)
    {
        if (octalNumber == 0)
            octalNumber = number % 8;
        else
            octalNumber += (number % 8 * std::pow(10, digits));

        number /= 8;
        ++digits;
    };

    std::cout << octalNumber;

    return 0;
}