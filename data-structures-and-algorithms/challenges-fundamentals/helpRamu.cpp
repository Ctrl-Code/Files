// ctrl-code: 2007250002

#include <iostream>

int main()
{
    int testCases;
    std::cin >> testCases;

    void calculate(void);

    for (int j = 0; j != testCases; ++j)
    {
        calculate();
    }

    return 0;
}

void calculate(void)
{

    // p1 = price1
    int p1, p2, p3, p4;
    std::cin >> p1 >> p2 >> p3 >> p4;

    // c = cab, r = rickshaw
    int c, r;
    std::cin >> c >> r;

    int priceMinCabs = 0, priceMinRickshaws = 0;

    for (int i = 0; i != c; ++i)
    {
        int times;
        std::cin >> times;
        priceMinCabs += std::min(times * p1, p2);
    }
    priceMinCabs = std::min(priceMinCabs, p3);

    for (int i = 0; i != r; ++i)
    {
        int times;
        std::cin >> times;
        priceMinRickshaws += std::min(times * p1, p2);
    }
    priceMinRickshaws = std::min(priceMinRickshaws, p3);

    std::cout << std::min(priceMinRickshaws + priceMinCabs, p4)<<std::endl;
}