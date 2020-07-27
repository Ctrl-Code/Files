// ctrl-code: 2007261427

#include <iostream>

int main()
{
    long int side1, side2, side3;
    std::cin >> side1;

    // even side 2mn
    if ((side1 & 1) == 0)
    {
        side2 = ((side1 * side1) / 4) - 1;
        side3 = ((side1 * side1) / 4) + 1;
    }
    // odd side
    else
    {
        side2 = ((side1 + 1) * (side1 - 1)) / 2;
        side3 = ((side1 + 1) * (side1 + 1)) / 4 + ((side1 - 1) * (side1 - 1)) / 4;
    }

    // printting the other 2 sides in increasing order
    if (side2 && side3)
    {
        std::cout << side2 << " " << side3 << std::endl;
    }
    else
        std::cout << "-1";

    return 0;
}