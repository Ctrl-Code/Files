#include <iostream>
#include <string>

void performConversion()
{
    std::string str;
    std::getline(std::cin, str);
    int lastIndex = str.length() - 1;
    int ans = 0, multiplier = 1;
    for (int i = lastIndex; i != -1; --i)
    {
        if (str[i] == '1')
            ans += multiplier;
        multiplier = multiplier << 1;
    }
    std::cout << ans<<std::endl;
}

int main()
{
    int inputs;
    std::cin >> inputs;

    std::cin.get();

    for (int i = 0; i != inputs; ++i)
        performConversion();

    return 0;
}