// ctrl-code: 2007272145

#include <iostream>

int main()
{
    int n, items;
    std::cin >> n;

    for (int i = 0; i != n; ++i)
    {
        items = i + 1;

        if (i == 0)
            std::cout << "1";
        else
        {

            // 1st element of the row;
            std::cout << i;
            --items;

            // print the middle zeros if present
            for (; items > 1; --items){
                std::cout<<"0";
            }

            // print the last element of the row
            std::cout<< i;
        }
        std::cout<<std::endl;
    }

    return 0;
}