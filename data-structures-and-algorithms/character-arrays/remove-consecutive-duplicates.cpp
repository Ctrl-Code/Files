#include <iostream>
#include <cstring>

#define newLine std::cout << std::endl;

void remove_consecutive_duplicates(char str[])
{
    int stringLength = strlen(str);

    // i.e. string is either of 1 character or does not exist
    if (stringLength <= 1)
        return;

    // now process
    else
    {
        int i = 0, j = 1;

        while (str[j] != '\0')
        {
            if (str[i] == str[j])
                ++j;
            else
            {
                str[i + 1] = str[j];
                ++i, ++j;
            }
        }

        str[i + 1] = '\0';
        return;
    }
}

int main()
{
    char str[100];

    // input the string
    std::cout << "enter the string" << std::endl;
    std::cin.getline(str, 100);

    // std::cout<<"the string length is "<<strlen(str)<<std::endl;

    std::cout << "The consecutive duplicates removed string is as below";
    newLine;

    remove_consecutive_duplicates(str);
    std::cout << str;
    newLine;

    return 0;
}