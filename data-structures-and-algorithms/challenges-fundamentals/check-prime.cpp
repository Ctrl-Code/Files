// ctrl-code: 2007260043

#include <iostream>
#include <cmath>

int main()
{
    int number;
    std::cin >> number;

    int sqrtE = sqrt(number);

    bool isPrime = true;
    for (int i = 2; i <= sqrtE; ++i)
    {
        if (number % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
        std::cout << "Prime" << std::endl;
    else
        std::cout << "Not Prime" << std::endl;

    return 0;
}