// ctrl-code: 2007260032

#include <iostream>
#include <cmath>

int main()
{

    int number;
    std::cin >> number;

    int digits = 0, temp = number;
    while (temp)
    {
        temp = temp / 10;
        ++digits;
    }

    int sum = 0, originalNumber = number;
    while (number)
    {
        temp = number % 10;
        sum += pow(temp, digits);
        number /= 10;
    }

    if(sum == originalNumber)
        std::cout<<"true";
    else
        std::cout<<"false";

    return 0;
}