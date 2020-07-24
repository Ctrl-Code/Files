#include <iostream>

int main()
{
    int n1, n2, term = 1, value, count = 1;
    std::cin >> n1 >> n2;

    while (count <= n1)
    {
        value = (3 * term) + 2;

        if (value % n2 != 0)
        {
            std::cout << value << std::endl;
            ++count;
        }

        ++term;
    }

    return 0;
}