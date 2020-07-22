#include <iostream>
#include <string>

#define printString(s, n) std::cout << "POSITION " << n << " " << s << std::endl;

int main()
{

    // framing from a string
    std::string str1("hello");
    printString(str1, 1);

    // framing from a single character
    std::string str2(3, 'a');
    printString(str2, 2);

    // framing from a string position uptil no of characters
    std::string str3("new string", 3, 4);
    printString(str3, 3);

    // framing a string from a character array upto characters needed
    char c4[]={'h','e', 'l', 'l', 'o', '\0'};
    std::string str4(c4, 2);
    printString(str4, 4);

    char c5[]={'n','e','w',' ','w','o','r','l','d','\0'};
    std::string str5(c5);
    printString(str5,5);

    // others are also there. Rest not implemented

    return 0;
}