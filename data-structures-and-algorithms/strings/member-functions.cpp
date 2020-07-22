#include <iostream>
#define printString(s) std::cout << s << std::endl;

int main()
{
    printString("SECTION 1: Element Access");
    std::string str("program says hello world");
    printString(str.front());
    printString(str.back());
    printString(str.at(6));
    const char *ch1 = str.c_str();
    printString(ch1);

    printString("");
    printString("SECTION 2: Capacity");
    // checking if string is empty
    std::string str2((str.empty() == 0) ? "empty string" : "not empty");
    printString(str2);
    printString(str.length());

    // checking if the string is empty
    auto checkEmpty = [](std::string ourString) {
        if (ourString.empty())
            return "empty";
        else
            return "not empty";
    };

    printString("");
    printString("SECTION 3: Operations");
    str2 = str;
    printString("string before clearing -> " << str);
    str.clear();
    printString("string status after clearing -> " << checkEmpty(str));
    str.append("h"); // append(string)
    printString("operation: append -> " << str);
    str.insert(1, "ello"); // insert(index, string)
    printString("operation: insertion -> " << str);
    str.erase(1, 3); // erase(index, count)
    printString("operation: erase -> " << str);
    str.replace(1, 0, "ell"); // replace(index, count, string)
    printString("operation: replace -> " << str);
    str2 = str.substr(1, 3); // substr(index, count)
    printString("operation: substr -> " << str2);

    printString("");
    printString("SECTION 4: Search");
    str = "Hello World!!! is the basic program which you write for any language";
    printString(str.find("an", str.length() - 15)); // since the element is present find(string, index to begin from )
    str2 = str.find("an", str.length() - 1) == std::string::npos ? "Not Found" : "Found";
    printString("The String foundStatus: "<<str2);
    printString("The strings are "<<str<<" | "<<str2);
    printString("operation: comparison "<<str.compare(str2)); // compare(other string)
    return 0;
}