// ctrl-code: 2007251921

#include <iostream>
#include <cmath>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;

    int discriminant = (b * b) - (4 * a * c);
    if (discriminant < 0)
        std::cout << "Imaginary";
    else if (discriminant == 0)
        std::cout << "Real and Equal\n"
                  << (-b - std::sqrt(discriminant)) / (2 * a) << " " << (-b - std::sqrt(discriminant)) / (2 * a);
    else
        std::cout << "Real and Distinct\n"
                  << (-b - std::sqrt(discriminant)) / (2 * a) << " " << (-b + std::sqrt(discriminant)) / (2 * a);
    return 0;
}