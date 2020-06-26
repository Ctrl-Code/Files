#include <iostream>

int main()
{
    auto greet = [](std::string name) {
        std::cout << "Hello " << name << std::endl;
        return "Greet World";
    };

    std::cout << greet("Vipul") << std::endl;
    greet("World");
    return 0;
}