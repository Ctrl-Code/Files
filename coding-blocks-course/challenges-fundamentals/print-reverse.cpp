// ctrl-code: 2007261300

#include <iostream>

int main()
{
    int number, answer = 0, temp;
    std::cin >> number;

    while (number)
    {
        temp = number % 10;
        answer = (answer * 10) + temp;
        number /= 10;
    }

    std::cout << answer;
    return 0;
}