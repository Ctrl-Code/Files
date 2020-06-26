#include <iostream>
#include <array>

std::string greet(std::string text)
{
    return "Hello " + text;
}

void greetPerson(std::string (*greetFn)(std::string), std::string person)
{
    std::cout<<greetFn(person)<<std::endl;
    // return greet;
}

int main()
{
    greetPerson(greet, "Vipul");
    return 0;
}