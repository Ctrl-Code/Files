// ctrl-code: 2007231955

#include <iostream>

int main()
{

    int cases;
    std::cin >> cases;

    void findIfAllowedToRunOnSundays(void);

    for (int i = 1; i <= cases; ++i)
        findIfAllowedToRunOnSundays();
    return 0;
}

void findIfAllowedToRunOnSundays()
{
    int carNumber;
    std::cin >> carNumber;

    int oddDigitSum = 0, evenDigitSum = 0, extractedNumber;
    while (carNumber != 0)
    {
        extractedNumber = carNumber % 10;

        // even digit
        if (extractedNumber % 2 == 0)
            evenDigitSum += extractedNumber;
        else
            oddDigitSum += extractedNumber;

        carNumber /= 10;
    }

    if (oddDigitSum % 3 == 0 or evenDigitSum % 4 == 0)
        std::cout << "Yes" << std::endl;
    else
        std::cout << "No" << std::endl;
}