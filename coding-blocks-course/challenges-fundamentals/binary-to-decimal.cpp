// ctrl-code: 2007261306

#include <iostream>

int main()
{
    int binaryNumber, answer = 0, multiplier = 1;
    std::cin >> binaryNumber;
    while (binaryNumber)
    {
        answer += (binaryNumber % 10) * multiplier;
        multiplier = multiplier << 1;
        binaryNumber /= 10;
    }

    std::cout << answer;
    return 0;
}