// ctrl-code: 2007250024

#include <iostream>

int main()
{
    int number, digit, ans = 0, remainder;
    std::cin >> number >> digit;

    while (number)
    {
        remainder = number % 10;
        number /= 10;
        ans+= remainder == digit ? 1 : 0;
    }

    std::cout<<ans<<std::endl;

    return 0;
}