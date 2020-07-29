// ctrl-code: 2007272133

#include <iostream>

int main()
{
    int rows = 0;
    std::cin >> rows;

    int times = 0;
    bool zeros = false;
    for (int i = 1; i <= rows; ++i)
    {
        times = i;
        zeros = ((i & 1) == 0) ? true : false;
        std::cout << "1";
        --times;

        if (times)
        {
            for (times; times > 1; --times)
            {
                if(zeros)
                    std::cout<<"0";
                else
                    std::cout<<"1";
            }

            std::cout<<"1";
        }
        std::cout<<std::endl;
    }

    return 0;
}